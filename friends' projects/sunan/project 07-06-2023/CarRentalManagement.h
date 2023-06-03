#ifndef CARRENTALMANAGEMENT_H
#define CARRENTALMANAGEMENT_H

#include "Car.h"
#include "Customer.h"
#include <array>
#include <list>
#include <stack>
#include <queue>
#include <unordered_map>

class CarRentalManagement
{
private:
    std::array<Car, 100> carsArray;
    std::list<Customer> customerList;
    std::stack<Car> returnStack;
    std::queue<Customer> reservationQueue;
    std::unordered_map<int, std::string> rentalHistory;

public:
    void addCar(int id, const std::string &brand, const std::string &model);
    void rentCar(const std::string &name, const std::string &contact, int carId);
    void returnCar(int carId);
    void makeReservation(const std::string &name, const std::string &contact, int carId);
    void processReservationQueue();
    void displayCars();
    void displayRentalHistory();
};

#endif // CARRENTALMANAGEMENT_H
