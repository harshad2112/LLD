#ifndef PARKINGSLOT_H
#define PARKINGSLOT_H

#include "Vehicle.h"
#include "ParkingSlotType.h"

class ParkingSlot
{
public:
    ParkingSlotType parkingSlotType;
    int slotId;
    bool isAvailable;
    Vehicle *vehicle;
    ParkingSlot(int slotId, ParkingSlotType parkingSlotType);
    int getParkingSlotCost(int duration);
};

#endif