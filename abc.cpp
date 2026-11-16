#include <iostream>
#include <string>
using namespace std;

//====================ABSTRACT PERSON ====================
class Person {
protected:
    string name;
    string phone;
public:
    Person(string n, string p) {
        name = n;
        phone = p;
    }
    string getName() {
        return name;
    }
    string getPhone() {
        return phone;
    }
    virtual ~Person() {}
};

//==================== OWNER ====================
class Owner : public Person {
public:
    Owner(string n, string p) : Person(n, p) {}
};

//====================ABSTRACTVEHICLE ====================
class Vehicle {
protected:
    string regNo;
    Person* owner;
public:
    Vehicle(string r, Person* o) {
        regNo = r;
        owner = o;
    }
    string getRegNumber() {
        return regNo;
    }
    virtual double calculateFee(int hours) = 0;
    virtual ~Vehicle() {}
};

//==================== CAR ====================
class Car : public Vehicle {
public:
    Car(string r, Person* o) : Vehicle(r, o) {}
    double calculateFee(int hours) override 
    {
        return hours * 100; 
    } 

};

//==================== BIKE ==================== 
class Bike : public Vehicle { 
public:
    Bike(string r, Person* o) : Vehicle(r, o) {} 
    double calculateFee(int hours) override 
    { 
       return hours * 50; 
    } 
}; 

//==================== PARKING SLOT==================== class ParkingSlot { private: int slotNumber; bool occupied; public: ParkingSlot(int num) { slotNumber = num; occupied = false; } bool isAvailable() { return !occupied; } void assignVehicle() { occupied = true; } void removeVehicle() { occupied = false; } int getSlotNumber() { return slotNumber; } }; //==================== TICKET ====================


