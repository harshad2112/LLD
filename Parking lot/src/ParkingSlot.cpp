#include "../include/ParkingSlot.h"

ParkingSlot::ParkingSlot(int slotId, ParkingSlotType parkingSlotType)
{
    this->slotId = slotId;
    isAvailable = true;
    this->parkingSlotType = parkingSlotType;
}