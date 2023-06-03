#include "CarRentalManagement.h"
#include <iostream>

void CarRentalManagement::addCar(int id, const std::string &brand, const std::string &model)
{
    Car car;
    car.id = id;
    car.brand = brand;
    car.model = model;
    car.available = true;

    carsArray[id] = car;
}

void CarRentalManagement::rentCar(const std::string &name, const std::string &contact, int carId)
{
    if (carsArray[carId].available)
    {
        carsArray[carId].available = false;
        Customer customer;
        customer.name = name;
        customer.contact = contact;
        customer.carId = carId;
        customerList.push_back(customer);

        std::cout << "Car with ID " << carId << " has been rented by " << name << "." << std::endl;
    }
    else
    {
        std::cout << "Car with ID " << carId << " is not available for rent." << std::endl;
    }
}

void CarRentalManagement::returnCar(int carId)
{
    if (!carsArray[carId].available)
    {
        carsArray[carId].available = true;
        std::cout << "Car with ID " << carId << " has been returned." << std::endl;

        // Store rental history
        const auto &customer = customerList.back();
        rentalHistory[carId] = customer.name;

        // Remove customer from the list
        customerList.pop_back();

        // Push returned car to the stack
        returnStack.push(carsArray[carId]);
    }
    else
    {
        std::cout << "Car with ID " << carId << " is already available." << std::endl;
    }
}

void CarRentalManagement::makeReservation(const std::string &name, const std::string &contact, int carId)
{
    if (carsArray[carId].available)
    {
        carsArray[carId].available = false;
        Customer customer;
        customer.name = name;
        customer.contact = contact;
        customer.carId = carId;
        reservationQueue.push(customer);

        std::cout << "Car with ID " << carId << " has been reserved for " << name << "." << std::endl;
    }
    else
    {
        std::cout << "Car with ID " << carId << " is not available for reservation." << std::endl;
    }
}

void CarRentalManagement::processReservationQueue()
{
    while (!reservationQueue.empty())
    {
        const auto &customer = reservationQueue.front();
        if (carsArray[customer.carId].available)
        {
            carsArray[customer.carId].available = false;
            customerList.push_back(customer);
            reservationQueue.pop();

            std::cout << "Reserved car with ID " << customer.carId << " has been allocated to " << customer.name << "." << std::endl;
        }
        else
        {
            break; // Stop processing if no available cars
        }
    }
}

void CarRentalManagement::displayCars()
{
    std::cout << "Cars in the Car Rental Management system:" << std::endl;
    for (const auto &car : carsArray)
    {
        std::cout << "ID: " << car.id << ", Brand: " << car.brand << ", Model: " << car.model << ", Available: " << (car.available ? "Yes" : "No") << std::endl;
    }
}

void CarRentalManagement::displayRentalHistory()
{
    std::cout << "Rental History:" << std::endl;
    for (const auto &entry : rentalHistory)
    {
        std::cout << "Car ID: " << entry.first << ", Rented by: " << entry.second << std::endl;
    }
}
