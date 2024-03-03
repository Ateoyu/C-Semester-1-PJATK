#include <iostream>
using namespace std;

class Vehicle {
protected:
    int speed{};
    int weight{};
    int seats{};

    void askForInput() {
        cout << "Enter speed (Km/h):";
        cin >> speed;
        cout << "Enter weight (Kg):";
        cin >> weight;
        cout << "Enter number of seats:";
        cin >> seats;
        cout << endl;
    }

public:
    Vehicle() {
        speed = 0;
        weight = 0;
        seats = 0;
    }

    virtual void printDetails() {
        cout << "This is a vehicle." << endl;
    }

    virtual void printDetails(const int seats, const int weight, const int speed) {
        cout << "This vehicle has " << seats << " seats, weighs " << weight << " Kg, and can go up to " << speed <<
                " Km/h." << endl;
    }
};

class Car : public Vehicle {
public:
    Car() {
        cout << "Enter car details\n";
        askForInput();
    }

    void printDetails() override {
        cout << "This is a car." << endl;
        Vehicle::printDetails(seats, weight, speed);
    }
};

class Bus : public Vehicle {
public:
    Bus() {
        cout << "Enter bus details\n";
        askForInput();
    }

    void printDetails() override {
        cout << "This is a bus." << endl;
        Vehicle::printDetails(seats, weight, speed);
    }
};

int main() {
    Vehicle* vehicle1 = new Car();
    Vehicle* vehicle2 = new Bus();

    vehicle1->printDetails(); // Calls Car's printDetails
    cout << endl;
    vehicle2->printDetails(); // Calls Bus's printDetails

    delete vehicle1;
    delete vehicle2;

    return 0;
}
