#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Car {
    string model;
    int seats;
    double pricePerDay;
    string driverName;
    string driverNID;
    string driverMobile;
    string driverReview;
    bool isAvailable;
    bool isBooked;
};

struct Customer {
    string name;
    string NID;
    string mobile;
    string carModel;
    int rentedDays;
    double totalAmount;
};

bool sortByCarName(const Car& car1, const Car& car2) {
    return car1.model < car2.model;
}

bool sortByPricePerDay(const Car& car1, const Car& car2) {
    return car1.pricePerDay > car2.pricePerDay;
}

bool sortBySeatNumber(const Car& car1, const Car& car2) {
    return car1.seats < car2.seats;
}

// Function to register a car
void registerCar() {
    Car car;
    cout << "Enter car model: ";
    getline(cin >> ws, car.model);
    cout << "Enter number of seats: ";
    cin >> car.seats;
    cout << "Enter price per day: ";
    cin >> car.pricePerDay;
    cout << "Enter driver's name: ";
    getline(cin >> ws, car.driverName);
    cout << "Enter driver's NID: ";
    getline(cin >> ws, car.driverNID);
    cout << "Enter driver's mobile number: ";
    getline(cin >> ws, car.driverMobile);
    car.isAvailable = true;
    car.isBooked = false;

    ofstream file("car_data.txt", ios::app);
    file << car.model << "," << car.seats << "," << car.pricePerDay << "," << car.driverName << "," << car.driverNID << "," << car.driverMobile << "," << car.isAvailable << "," << car.isBooked << endl;
    file.close();

    cout << "Car registered successfully!\n";
}

void searchAvailableCars() {
    int requiredSeats;
    cout << "Enter the number of seats you are looking for: ";
    cin >> requiredSeats;

    ifstream file("car_data.txt");
    string line;
    vector<Car> availableCars;

    while (getline(file, line)) {
        Car car;
        stringstream ss(line);
        getline(ss, car.model, ',');
        ss >> car.seats;
        ss.ignore();
        ss >> car.pricePerDay;
        ss.ignore();
        getline(ss, car.driverName, ',');
        getline(ss, car.driverNID, ',');
        getline(ss, car.driverMobile, ',');
        ss >> car.isAvailable;
        ss.ignore();
        ss >> car.isBooked;

        if (car.isAvailable && !car.isBooked && car.seats == requiredSeats)
            availableCars.push_back(car);
    }

    file.close();

    if (availableCars.empty()) {
        cout << "No cars available with " << requiredSeats << " seats.\n";
        return;
    }

    // Sort available cars by price per day
    sort(availableCars.begin(), availableCars.end(), sortByPricePerDay);

    cout << "Available cars with " << requiredSeats << " seats:\n";
    for (size_t i = 0; i < availableCars.size(); i++) {
        cout << i + 1 << ". " << availableCars[i].model << " - " << availableCars[i].driverName;
        cout << " ($" << availableCars[i].pricePerDay << " per day)\n";
    }

    int option;
    cout << "Enter the number of the car you want to rent (0 to cancel): ";
    cin >> option;

    if (option >= 1 && option <= availableCars.size()) {
        Car& selectedCar = availableCars[option - 1];
        if (selectedCar.isBooked) {
            cout << "Sorry, the selected car is already booked.\n";
        } else {
            selectedCar.isBooked = true;
            cout << "You can rent the car: " << selectedCar.model << " - " << selectedCar.driverName << "\n";

            // Move the car to the booked list
            //ofstream bookedFile("booked_cars.txt", ios::app);
           // bookedFile << selectedCar.model << "," << selectedCar.seats << "," << selectedCar.pricePerDay << "," << selectedCar.driverName << "," << selectedCar.driverNID << "," << selectedCar.driverMobile << "," << selectedCar.isAvailable << "," << selectedCar.isBooked << endl;
           // bookedFile.close();

            // Update the car availability status in the car_data.txt file
            ifstream carFile("car_data.txt");
            ofstream tempFile("temp_car_data.txt");
            while (getline(carFile, line)) {
                stringstream ss(line);
                string model;
                getline(ss, model, ',');
                if (model != selectedCar.model) {
                    tempFile << line << endl;
                }
            }
            carFile.close();
            tempFile.close();

            // Remove the original car_data.txt file and rename the temp_car_data.txt file
            remove("car_data.txt");
            rename("temp_car_data.txt", "car_data.txt");
        }
    } else if (option != 0) {
        cout << "Invalid option. Rental canceled.\n";
    }
}

// Function to rent a car
void rentCar() {
    int requiredSeats;
    cout << "Enter the number of seats you are looking for: ";
    cin >> requiredSeats;

    ifstream file("car_data.txt");
    string line;
    vector<Car> availableCars;

    while (getline(file, line)) {
        Car car;
        stringstream ss(line);
        getline(ss, car.model, ',');
        ss >> car.seats;
        ss.ignore();
        ss >> car.pricePerDay;
        ss.ignore();
        getline(ss, car.driverName, ',');
        getline(ss, car.driverNID, ',');
        getline(ss, car.driverMobile, ',');
        ss >> car.isAvailable;
        ss.ignore();
        ss >> car.isBooked;

        if (car.isAvailable && !car.isBooked && car.seats == requiredSeats)
            availableCars.push_back(car);
    }

    file.close();

    if (availableCars.empty()) {
        cout << "No cars available with " << requiredSeats << " seats.\n";
        return;
    }

    cout << "Available cars with " << requiredSeats << " seats:\n";
    for (size_t i = 0; i < availableCars.size(); i++) {
        cout << i + 1 << ". " << availableCars[i].model << " - " << availableCars[i].driverName << endl;
    }

    int choice;
    cout << "Enter the car number you want to rent: ";
    cin >> choice;

    if (choice < 1 || choice > static_cast<int>(availableCars.size())) {
        cout << "Invalid car choice.\n";
        return;
    }

    Car selectedCar = availableCars[choice - 1];
    cout << "You have selected: " << selectedCar.model << " - " << selectedCar.driverName << endl;

    // Update the car's booked status in the car_data.txt file
    ifstream carFile("car_data.txt");
    ofstream tempFile("temp_car_data.txt");
    while (getline(carFile, line)) {
        stringstream ss(line);
        string model;
        getline(ss, model, ',');
        if (model == selectedCar.model) {
            tempFile << selectedCar.model << "," << selectedCar.seats << "," << selectedCar.pricePerDay << "," << selectedCar.driverName << "," << selectedCar.driverNID << "," << selectedCar.driverMobile << "," << selectedCar.isAvailable << "," << true << endl;
        } else {
            tempFile << line << endl;
        }
    }
    carFile.close();
    tempFile.close();

    // Remove the original car_data.txt file and rename the temp_car_data.txt file
    remove("car_data.txt");
    rename("temp_car_data.txt", "car_data.txt");

    // Customer details
    Customer customer;
    cout << "Enter your name: ";
    getline(cin >> ws, customer.name);
    cout << "Enter your NID: ";
    getline(cin >> ws, customer.NID);
    cout << "Enter your mobile number: ";
    getline(cin >> ws, customer.mobile);
    cout << "Enter the number of days you want to rent the car for: ";
    cin >> customer.rentedDays;

    customer.carModel = selectedCar.model;
    customer.totalAmount = customer.rentedDays * selectedCar.pricePerDay;

    // Save customer details
    ofstream customerFile("customer_data.txt", ios::app);
    customerFile << customer.name << "," << customer.NID << "," << customer.mobile << "," << customer.carModel << "," << customer.rentedDays << "," << customer.totalAmount << endl;
    customerFile.close();

    cout << "Successfully rented the car!\n";
    cout << "Car details:\n";
    cout << "Model: " << selectedCar.model << endl;
    cout << "Driver: " << selectedCar.driverName << endl;
    cout << "Number of seats: " << selectedCar.seats << endl;
    cout << "Price per day: " << selectedCar.pricePerDay << endl;
    cout << "Rented for " << customer.rentedDays << " days\n";
    cout << "Total amount: " << customer.totalAmount << " $\n";
}

void showRentHistory() {
    ifstream customerFile("customer_data.txt");
    vector<Customer> rentedCars;

    string line;
    while (getline(customerFile, line)) {
        stringstream ss(line);
        Customer customer;
        getline(ss, customer.name, ',');
        getline(ss, customer.NID, ',');
        getline(ss, customer.mobile, ',');
        getline(ss, customer.carModel, ',');
        ss >> customer.rentedDays;
        ss.ignore();
        ss >> customer.totalAmount;
        ss.ignore();

        rentedCars.push_back(customer);
    }

    customerFile.close();

    // Sort rented cars by rented days
    sort(rentedCars.begin(), rentedCars.end(), [](const Customer& c1, const Customer& c2) {
        return c1.rentedDays > c2.rentedDays;
    });


    cout << "Rent History:\n";
    for (const auto& customer : rentedCars) {
        cout << "Car model: " << customer.carModel << ", Rented for: " << customer.rentedDays << " days\n";
    }
}

void showBookedCars() {
    ifstream bookedFile("booked_cars.txt");
    vector<Car> bookedCars;

    string line;
    while (getline(bookedFile, line)) {
        stringstream ss(line);
        Car car;
        getline(ss, car.model, ',');
        ss >> car.seats;
        ss.ignore();
        ss >> car.pricePerDay;
        ss.ignore();
        getline(ss, car.driverName, ',');
        getline(ss, car.driverNID, ',');
        getline(ss, car.driverMobile, ',');
        ss >> car.isAvailable;
        ss.ignore();
        ss >> car.isBooked;
        ss.ignore();

        bookedCars.push_back(car);
    }

    bookedFile.close();

    if (bookedCars.empty()) {
        cout << "No cars are currently booked.\n";
        return;
    }

    cout << "Booked Cars:\n";
    for (const auto& car : bookedCars) {
        cout << "Model: " << car.model << ", Driver: " << car.driverName << endl;
    }
}

int main() {
    int choice;

    while (true) {
        cout << "Menu:- \n";
        cout << "1. Register a car\n";
        cout << "2. Search available cars\n";
        cout << "3. Rent a car\n";
        cout << "4. Show rent history\n";
        cout << "5. Show booked cars\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                registerCar();
                break;
            case 2:
                searchAvailableCars();
                break;
            case 3:
                rentCar();
                break;
            case 4:
                showRentHistory();
                break;
            case 5:
                showBookedCars();
                break;
            case 0:
                cout << "Thank you for. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}