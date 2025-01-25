#include "../include/ParkingFloor.h"
#include "../include/VehicleType.h"
#include "../include/ParkingSlot.h"
#include "../include/ParkingLot.h"
#include "../include/Address.h"
#include "../include/Vehicle.h"
#include "../include/Ticket.h"

using namespace std;

int main()
{
    int floors = 1;
    int parkingSpacePerFloor = 100;
    Address *parkingLotAddress = new Address("123 A", "Kalindi Kunj", "New Delhi", "Delhi", "India", 123456);
    string parkingLotName = "The Grand Parking Lot";

    vector<ParkingFloor *> parkingFloors;
    for (int i = 0; i < floors; i++)
    {
        vector<ParkingSlot *> currentParkingSlots;
        for (int j = 0; j < parkingSpacePerFloor; j++)
        {
            ParkingSlotType parkingSlotType = static_cast<ParkingSlotType>(j / (parkingSpacePerFloor / 4));
            ParkingSlot *parkingSlot = new ParkingSlot((i + 1) * 1000 + j + 1, parkingSlotType);
            currentParkingSlots.push_back(parkingSlot);
        }
        ParkingFloor *currentFloor = new ParkingFloor(i + 1, currentParkingSlots);
        parkingFloors.push_back(currentFloor);
    }

    ParkingLot *parkingLot = new ParkingLot(parkingLotAddress, parkingLotName, parkingFloors);
    Vehicle *hatchBack1 = new Vehicle("DL 91 AS 0420", HatchBack);
    unique_ptr<Ticket *> ticket1 = parkingLot->GetParkingTicket(hatchBack1);
    for (int i = 0; i < 26; i++)
    {
        Vehicle *hatchBack = new Vehicle("DL 91 AS " + to_string(4200 + i), HatchBack);
        unique_ptr<Ticket *> ticket = parkingLot->GetParkingTicket(hatchBack);
        if (ticket)
            (*ticket)->printTicket();
    }
    if (ticket1)
        (*ticket1)->printTicket();
}
