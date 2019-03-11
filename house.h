#ifndef HOUSE_H
#define HOUSE_H

#include "property.h"

class House : public Property
{
public:

    int getNumberFloor( void ) const;

    void setNumberFloor( int number_floor );

    int getNumberBedroom( void ) const;

    void setNumberBedroom( int number_bedroom );

    double getAreaLand( void ) const;

    void setAreaLand( double area_land );

    double getAreaBuilt( void ) const;

    void setAreaBuilt( double area_built );

    std::string description( void ) override;

private:

    int number_floor;
    int number_bedroom;
    double area_land;
    double area_built;

};


#endif /* HOUSE_H */
