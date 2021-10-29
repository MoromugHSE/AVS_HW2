cmake_minimum_required(VERSION 3.5)
project(AVS_HW2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")

set(BINARY_DIR "${CMAKE_BINARY_DIR}")

set(LIB_FILES
        # Headers
        Random.h
        Transport.h
        Truck.h
        Bus.h
        Car.h
        Container.h

        # Source files
        Random.cpp
        Transport.cpp
        Truck.cpp
        Bus.cpp
        Car.cpp
        Container.cpp
        )

add_library(transport STATIC ${LIB_FILES})

add_executable(task main.cpp)

target_link_libraries(task transport)
