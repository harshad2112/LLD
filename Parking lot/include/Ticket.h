#ifndef TICKET_H
#define TICKET_H

#include <iostream>
#include <string>

#include "Vehicle.h"
#include "ParkingSlot.h"

using namespace std;

class Ticket
{
private:
    static int ticketCounter;
public:
    Vehicle *vehicle;
    int ticketNumber;
    long long startTime;
    long long EndTime;
    ParkingSlot *parkingSlot;
    double totalCost;

    Ticket(Vehicle *vehicle, ParkingSlot *parkingSlot);
    double updateTotalCost(long long endTime);
    void printTicket();
};

#endif
