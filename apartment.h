#ifndef APARTMENT_H
#define APARTMENT_H

#include "property.h"

class Apartment : public Property
{
public:

    int getAreaApartment( void ) const;

    void setAreaApartment( int area_apartment );

    int getNumberBedroom( void ) const;

    void setNumberBedroom( int number_bedroom );

    int getFloorNumber( void ) const;

    void setFloorNumber( int floor_number );

    int getGarageNumber( void ) const;

    void setGarageNumber( int garage_number );

    double getValueCondominium( void ) const;

    void setValueCondominium( double value_condominium );

    const std::string &getPosition( void ) const;

    void setPosition( const std::string &position );

    std::string description( void ) override;

private:

    int area_apartment;
    int number_bedroom;
    int floor_number;
    int garage_number;
    double value_condominium;
    std::string position;

};


#endif /* APARTMENT_H */
