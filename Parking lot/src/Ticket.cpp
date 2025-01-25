#include <chrono>

#include "../include/Ticket.h"

int Ticket::ticketCounter = 0;

Ticket::Ticket(Vehicle *vehicle, ParkingSlot *parkingSlot)
{
    this->vehicle = vehicle;
    this->parkingSlot = parkingSlot;
    auto now = std::chrono::system_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch());
    this->startTime = duration.count();
    this->ticketNumber = ++ticketCounter;
}

void Ticket::printTicket()
{
    cout << "Ticket Number: " << ticketNumber << endl;
    cout << "Vehicle Number: " << vehicle->vehicleNumber << endl;
    cout << "Start Time: " << startTime << endl;
    cout << "Parking Slot info: " << parkingSlot->slotId << endl;
}
