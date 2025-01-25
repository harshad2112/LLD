#include "../include/ParkingFloor.h"

ParkingFloor::ParkingFloor(int floorNumber, vector<ParkingSlot *> parkingSlots)
{
    this->floorNumber = floorNumber;
    this->parkingSlots = parkingSlots;
}
