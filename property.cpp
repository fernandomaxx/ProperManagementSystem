#include <utility>

#include "property.h"

Property::Property( double price,
                    int type_offer,
                    const Address address) :
        price{ price },
        type_offer{ type_offer },
        address{ address }
{}

double Property::getPrice( void ) const
{
    return price;
}

void Property::setPrice( double price )
{
    Property::price = price;
}

int Property::getTypeOffer( void ) const
{
    return type_offer;
}

void Property::setTypeOffer( int type_offer )
{
    Property::type_offer = type_offer;
}

const Address &Property::getAddress( void ) const
{
    return address;
}

void Property::setAddress( const Address &address )
{
    Property::address = address;
}

std::string Property::description( void )
{
    return "";
}
