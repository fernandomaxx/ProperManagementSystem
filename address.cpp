#include <utility>

#include "address.h"

Address::Address( int number,
                  int cep,
                  std::string street,
                  std::string district,
                  std::string city ) :
        number{ number },
        cep{ cep },
        street{ std::move( street ) },
        district{ std::move( district ) },
        city{ std::move( city ) }
{}

int Address::getNumber( void ) const
{
    return number;
}

void Address::setNumber( int number )
{
    Address::number = number;
}

int Address::getCep( void ) const
{
    return cep;
}

void Address::setCep( int cep )
{
    Address::cep = cep;
}

const std::string &Address::getStreet( void ) const
{
    return street;
}

void Address::setStreet( const std::string &street )
{
    Address::street = street;
}

const std::string &Address::getDistrict( void ) const
{
    return district;
}

void Address::setDistrict( const std::string &district )
{
    Address::district = district;
}

const std::string &Address::getCity( void ) const
{
    return city;
}

void Address::setCity( const std::string &city )
{
    Address::city = city;
}
