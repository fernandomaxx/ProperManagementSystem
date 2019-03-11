#include "land.h"

int Land::getAreaLand( void ) const
{
    return area_land;
}

void Land::setAreaLand( int area_land )
{
    Land::area_land = area_land;
}

std::string Land::description(void) {
    return std::__cxx11::string();
}
