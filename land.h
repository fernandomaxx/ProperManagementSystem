#ifndef LAND_H
#define LAND_H

#include "property.h"

class Land : public Property
{
public:

    int getAreaLand( void ) const;

    void setAreaLand( int area_land );

    std::string description( void ) override;

private:

    int area_land;
};


#endif /* LAND_H */
