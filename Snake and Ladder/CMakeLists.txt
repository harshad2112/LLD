cmake_minimum_required(VERSION 3.10)

# set project name
project(SnakeAndLadder)

set(SOURCES
    ./src/Player.cpp
    ./src/Board.cpp
    ./src/Dice.cpp
    ./src/main.cpp
    ./include/Player.h
    ./include/Ladder.h
    ./include/Snake.h
    ./include/Board.h
    ./include/Dice.h
)
add_executable(SnakeAndLadder ${SOURCES})

target_include_directories(SnakeAndLadder
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

