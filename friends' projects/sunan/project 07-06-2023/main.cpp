#include "CarRentalManagement.h"

int main() {
    CarRentalManagement carRental;

    carRental.addCar(0, "Toyota", "Camry");
    carRental.addCar(1, "Honda", "Civic");
    carRental.addCar(2, "Ford", "Mustang");

    carRental.rentCar("John Doe", "123456789", 1);
    carRental.returnCar(1);

    carRental.makeReservation("Jane Smith", "987654321", 2);
    carRental.processReservationQueue();

    carRental.displayCars();
    carRental.displayRentalHistory();

    return 0;
}
