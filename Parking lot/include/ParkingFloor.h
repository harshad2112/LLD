#ifndef PARKINGFLOOR_H
#define PARKINGFLOOR_H

#include <vector>

#include "ParkingSlot.h"

class ParkingFloor
{
public:
    int floorNumber;
    vector<ParkingSlot *> parkingSlots;
    ParkingFloor(int floorNumber, vector<ParkingSlot *> ParkingSlots);
};

#endif