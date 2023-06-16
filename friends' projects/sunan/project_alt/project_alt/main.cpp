#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <list>
#include <map>
#include <set>

// Car structure
struct Car {
    std::string modelName;
    int seats;
    std::string driverName;
    std::string driverPhoneNumber;
    double pricePerDay;
};

// Car comparison function for sorting by name
bool compareByName(const Car& car1, const Car& car2) {
    return car1.modelName < car2.modelName;
}

// Car comparison function for sorting by price per day
bool compareByPricePerDay(const Car& car1, const Car& car2) {
    return car1.pricePerDay < car2.pricePerDay;
}

// Car comparison function for sorting by seat number in ascending order
bool compareBySeatsAscending(const Car& car1, const Car& car2) {
    return car1.seats < car2.seats;
}

// Car comparison function for sorting by seat number in descending order
bool compareBySeatsDescending(const Car& car1, const Car& car2) {
    return car1.seats > car2.seats;
}

void registerCar() {
    std::ofstream outputFile("car_data.txt", std::ios::app);
    if (!outputFile.is_open()) {
        std::cout << "Error opening file. Unable to register car." << std::endl;
        return;
    }

    Car newCar;
    std::cout << "Enter car model name: ";
    std::cin.ignore();
    std::getline(std::cin, newCar.modelName);
    std::cout << "Enter number of seats in the car: ";
    std::cin >> newCar.seats;
    std::cout << "Enter driver's name: ";
    std::cin.ignore();
    std::getline(std::cin, newCar.driverName);
    std::cout << "Enter driver's phone number: ";
    std::getline(std::cin, newCar.driverPhoneNumber);

    outputFile << newCar.modelName << "," << newCar.seats << "," << newCar.driverName << "," << newCar.driverPhoneNumber << std::endl;

    outputFile.close();

    std::cout << "Car registration successful!" << std::endl;
}

void rentCar() {
    std::ifstream inputFile("car_data.txt");
    if (!inputFile.is_open()) {
        std::cout << "Error opening file. No cars available for rent." << std::endl;
        return;
    }

    int requiredSeats;
    std::cout << "Enter the number of seats required: ";
    std::cin >> requiredSeats;

    std::vector<Car> availableCars;
    std::string line;
    while (std::getline(inputFile, line)) {
        std::istringstream iss(line);
        std::string modelName, seatsStr, driverName, driverPhoneNumber;
        if (std::getline(iss, modelName, ',') && std::getline(iss, seatsStr, ',') &&
            std::getline(iss, driverName, ',') && std::getline(iss, driverPhoneNumber)) {
            int seats = std::stoi(seatsStr);
            if (seats >= requiredSeats) {
                availableCars.push_back({ modelName, seats, driverName, driverPhoneNumber });
            }
        }
    }

    inputFile.close();

    if (availableCars.empty()) {
        std::cout << "No cars available with the required number of seats." << std::endl;
        return;
    }

    std::cout << "Choose a sorting option:" << std::endl;
    std::cout << "1. Sort cars by name" << std::endl;
    std::cout << "2. Sort cars by price per day" << std::endl;
    std::cout << "3. Sort cars by seat number (ascending)" << std::endl;
    std::cout << "4. Sort cars by seat number (descending)" << std::endl;
    int option;
    std::cin >> option;

    switch (option) {
    case 1:
        std::sort(availableCars.begin(), availableCars.end(), compareByName);
        break;
    case 2:
        std::sort(availableCars.begin(), availableCars.end(), compareByPricePerDay);
        break;
    case 3:
        std::sort(availableCars.begin(), availableCars.end(), compareBySeatsAscending);
        break;
    case 4:
        std::sort(availableCars.begin(), availableCars.end(), compareBySeatsDescending);
        break;
    default:
        std::cout << "Invalid option. Exiting." << std::endl;
        return;
    }

    std::cout << "Select a car:" << std::endl;
    for (int i = 0; i < availableCars.size(); i++) {
        std::cout << i + 1 << ". Car: " << availableCars[i].modelName << " (Seats: " << availableCars[i].seats << ", Driver: " << availableCars[i].driverName << ")" << std::endl;
    }
    int carIndex;
    std::cin >> carIndex;
    const Car& selectedCar = availableCars[carIndex - 1];

    std::ofstream outputFile("rental_data.txt", std::ios::app);
    if (!outputFile.is_open()) {
        std::cout << "Error opening file. Unable to rent a car." << std::endl;
        return;
    }

    std::string customerName;
    std::cout << "Enter customer name: ";
    std::cin.ignore();
    std::getline(std::cin, customerName);

    std::list<int> customerNIDs;
    std::cout << "Enter customer NID (or -1 to finish): ";
    int nid;
    while (std::cin >> nid && nid != -1) {
        customerNIDs.push_back(nid);
        std::cout << "Enter customer NID (or -1 to finish): ";
    }
    customerNIDs.sort();

    std::list<std::string> mobileNumbers;
    std::string mobileNumber;
    std::cout << "Enter customer mobile number (or 'q' to quit): ";
    while (std::cin >> mobileNumber && mobileNumber != "q") {
        mobileNumbers.push_back(mobileNumber);
        std::cout << "Enter customer mobile number (or 'q' to quit): ";
    }

    int rentalDays;
    std::cout << "Enter number of rental days: ";
    std::cin >> rentalDays;

    double totalAmount = rentalDays * selectedCar.pricePerDay;

    outputFile << "Car: " << selectedCar.modelName << std::endl;
    outputFile << "Seats: " << selectedCar.seats << std::endl;
    outputFile << "Price per day: $" << selectedCar.pricePerDay << std::endl;
    outputFile << "Customer Name: " << customerName << std::endl;
    outputFile << "NIDs: ";
    for (const auto& nid : customerNIDs) {
        outputFile << nid << " ";
    }
    outputFile << std::endl;
    outputFile << "Mobile Numbers: ";
    for (const auto& mobileNumber : mobileNumbers) {
        outputFile << mobileNumber << " ";
    }
    outputFile << std::endl;
    outputFile << "Rental Days: " << rentalDays << std::endl;
    outputFile << "Total Amount: $" << totalAmount << std::endl;
    outputFile << std::endl;

    outputFile.close();

    std::cout << "Car rented successfully!" << std::endl;
}

void showRentalHistory() {
    std::ifstream inputFile("rental_data.txt");
    if (!inputFile.is_open()) {
        std::cout << "No rental history available." << std::endl;
        return;
    }

    std::map<std::string, int> rentalHistory;

    std::string line;
    while (std::getline(inputFile, line)) {
        if (line.find("Car: ") == 0) {
            std::string carModel = line.substr(5);
            std::getline(inputFile, line);  // Skip "Seats: " line
            std::getline(inputFile, line);  // Read seats
            int seats = std::stoi(line);
            rentalHistory[carModel] = seats;
        }
    }

    inputFile.close();

    std::cout << "Car rental history:" << std::endl;
    for (const auto& entry : rentalHistory) {
        std::cout << "Car: " << entry.first << " - Rented for " << entry.second << " days" << std::endl;
    }
}

int main() {
    std::cout << "Welcome to the Car Rental System!" << std::endl;

    while (1) {
        std::cout << "Choose an option:" << std::endl;
        std::cout << "1. Register a car" << std::endl;
        std::cout << "2. Rent a car" << std::endl;
        std::cout << "3. Show car rental history" << std::endl;
        int option;
        std::cin >> option;

        switch (option) {
        case 1:
            registerCar();
            break;
        case 2:
            rentCar();
            break;
        case 3:
            showRentalHistory();
            break;
        default:
            std::cout << "Invalid option. Exiting." << std::endl;
            break;
        }
    }

    return 0;
}
