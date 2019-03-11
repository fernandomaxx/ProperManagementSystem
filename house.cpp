#include "house.h"

int House::getNumberFloor( void ) const
{
    return number_floor;
}

void House::setNumberFloor( int number_floor )
{
    House::number_floor = number_floor;
}

int House::getNumberBedroom( void ) const
{
    return number_bedroom;
}

void House::setNumberBedroom( int number_bedroom )
{
    House::number_bedroom = number_bedroom;
}

double House::getAreaLand( void ) const
{
    return area_land;
}

void House::setAreaLand( double area_land )
{
    House::area_land = area_land;
}

double House::getAreaBuilt( void ) const
{
    return area_built;
}

void House::setAreaBuilt( double area_built )
{
    House::area_built = area_built;
}

std::string House::description( void )
{
    return nullptr;
}
