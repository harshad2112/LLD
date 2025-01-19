cmake_minimum_required(VERSION 3.10)

# set project name
project(DecoratorPattern)

set(SOURCES
    include/Bread.h
    include/WheatBread.h
    include/ItalianBread.h
    include/FlatBread.h
    include/Toppings.h
    include/Cheese.h
    include/Corn.h
    src/Bread.cpp
    src/WheatBread.cpp
    src/ItalianBread.cpp
    src/FlatBread.cpp
    src/Cheese.cpp
    src/Corn.cpp
    src/main.cpp   
)
add_executable(DecoratorPattern ${SOURCES})

target_include_directories(DecoratorPattern
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

