cmake_minimum_required(VERSION 3.13)
project(ProperManagementSystem)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ProperManagementSystem
    address.cpp
    address.h
    apartment.cpp
    apartment.h
    house.cpp
    house.h
    land.cpp
    land.h
    property.cpp
    property.h
    propertysystem.cpp
    propertysystem.h)
