cmake_minimum_required(VERSION 3.10)

# set project name
project(ParkingLot)

set(SOURCES
    ./src/Ticket.cpp
    ./src/ParkingSlot.cpp
    ./src/ParkingFloor.cpp
    ./src/main.cpp
    ./src/ParkingLot.cpp
    ./include/VehicleType.h
    ./include/ParkingSlotType.h
    ./include/Vehicle.h
    ./include/Address.h
    ./include/ParkingSlot.h
    ./include/Ticket.h
    ./include/ParkingLot.h
    ./include/ParkingFloor.h
)
add_executable(ParkingLot ${SOURCES})

target_include_directories(ParkingLot
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

