#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <vector>
#include <memory>

#include "ParkingFloor.h"
#include "Address.h"
#include "Vehicle.h"
#include "Ticket.h"

using namespace std;

class ParkingLot
{
private:
    Address *address;
    string parkingLotName;
    vector<ParkingFloor *> parkingFloors;

public:
    ParkingLot(Address *address, string parkingLotName, vector<ParkingFloor *> parkingFloors);
    void addFloors(ParkingFloor *parkingFloor);
    void removeFloors(ParkingFloor *ParkingFloor);
    unique_ptr<Ticket *> GetParkingTicket(Vehicle *vehicle);
    unique_ptr<ParkingSlot *> getParkingSlot(Vehicle *vehicle);
};

#endif