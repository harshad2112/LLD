#include <algorithm>
#include <iostream>
#include <memory>

#include "../include/ParkingLot.h"
#include "../include/Ticket.h"

using namespace std;

ParkingLot::ParkingLot(Address *address, string parkingLotName, vector<ParkingFloor *> parkingFloors)
{
    this->address = address;
    this->parkingLotName = parkingLotName;
    this->parkingFloors = parkingFloors;
    cout<<"Parking Floors created: "<<this->parkingFloors.size()<<endl;
    for(auto floor: this->parkingFloors){
            cout<<"Parking slots on floor: "<<floor->floorNumber<<" are: "<<floor->parkingSlots.size()<<endl;
    }
}

void ParkingLot::addFloors(ParkingFloor *parkingFloor)
{
    this->parkingFloors.push_back(parkingFloor);
}

void ParkingLot::removeFloors(ParkingFloor *ParkingFloor)
{
    this->parkingFloors.erase(find(this->parkingFloors.begin(), this->parkingFloors.end(), ParkingFloor));
}

unique_ptr<ParkingSlot *> ParkingLot::getParkingSlot(Vehicle *vehicle)
{
    VehicleType currentVehicleType = vehicle->vehicleType;
    ParkingSlotType requiredParkingSlot;
    switch (currentVehicleType)
    {
    case TwoWheeler:
    case HatchBack:
        requiredParkingSlot = Compact;
        break;

    case Sedan:
    case SUV:
        requiredParkingSlot = Medium;
        break;

    case Bus:
        requiredParkingSlot = Large;
        break;
    }
    for (auto floor : this->parkingFloors){
        for (ParkingSlot* pSlot : floor->parkingSlots)
        {
            if (pSlot->parkingSlotType == requiredParkingSlot && pSlot->isAvailable == true)
            {
                return make_unique<ParkingSlot *>(pSlot);
            }
        }
    }
    return nullptr;
}

unique_ptr<Ticket *> ParkingLot::GetParkingTicket(Vehicle *vehicle)
{
    unique_ptr<ParkingSlot *> slot = getParkingSlot(vehicle);
    if (slot == nullptr)
    {
        cout << "Parking is full, come back later"<<endl;
        return nullptr;
    }
    ParkingSlot *pSlot = move(*slot);
    pSlot->isAvailable = false;
    Ticket *ticket = new Ticket(vehicle, pSlot);
    return make_unique<Ticket *>(ticket);
}
