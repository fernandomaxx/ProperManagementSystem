#ifndef PROPERTY_H
#define PROPERTY_H
#define RENT 0
#define SELL 1

#include <iostream>
#include <string>
#include <vector>

#include "address.h"

class Property
{
public:

    Property( double price,
              int type_offer,
              const Address address);

    double getPrice( void ) const;

    void setPrice( double price );

    int getTypeOffer( void ) const;

    void setTypeOffer( int type_offer );

    const Address &getAddress( void ) const;

    void setAddress( const Address &address );

    virtual std::string description( void );

private:

    double price;
    int type_offer;
    Address address;

};


#endif /* PROPERTY_H */
