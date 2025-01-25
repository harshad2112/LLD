#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

#include "VehicleType.h"

using namespace std;

class Vehicle
{
public:
    string vehicleNumber;
    VehicleType vehicleType;
    Vehicle(string vehicleNumber, VehicleType vehicleType)
    {
        this->vehicleNumber = vehicleNumber;
        this->vehicleType = vehicleType;
    }
};

#endif