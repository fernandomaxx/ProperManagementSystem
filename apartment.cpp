#include "apartment.h"

int Apartment::getAreaApartment( void ) const
{
    return area_apartment;
}

void Apartment::setAreaApartment( int area_apartment )
{
    Apartment::area_apartment = area_apartment;
}

int Apartment::getNumberBedroom( void ) const
{
    return number_bedroom;
}

void Apartment::setNumberBedroom( int number_bedroom )
{
    Apartment::number_bedroom = number_bedroom;
}

int Apartment::getFloorNumber( void ) const
{
    return floor_number;
}

void Apartment::setFloorNumber( int floor_number )
{
    Apartment::floor_number = floor_number;
}

int Apartment::getGarageNumber( void ) const
{
    return garage_number;
}

void Apartment::setGarageNumber( int garage_number )
{
    Apartment::garage_number = garage_number;
}

double Apartment::getValueCondominium( void ) const
{
    return value_condominium;
}

void Apartment::setValueCondominium( double value_condominium )
{
    Apartment::value_condominium = value_condominium;
}

const std::string &Apartment::getPosition( void ) const
{
    return position;
}

void Apartment::setPosition( const std::string &position )
{
    Apartment::position = position;
}

std::string Apartment::description( void )
{
    return nullptr;
}
