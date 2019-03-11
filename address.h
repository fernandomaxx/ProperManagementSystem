#ifndef ADDRESS_H
#define ADDRESS_H


#include <string>

class Address
{
public:

    Address( int number,
             int cep,
             std::string street,
             std::string district,
             std::string city );

    int getNumber( void ) const;

    void setNumber( int number );

    int getCep( void ) const;

    void setCep( int cep );

    const std::string &getStreet( void ) const;

    void setStreet( const std::string &street );

    const std::string &getDistrict( void ) const;

    void setDistrict( const std::string &district );

    const std::string &getCity( void ) const;

    void setCity( const std::string &city );

private:

    int number;
    int cep;
    std::string street;
    std::string district;
    std::string city;

};


#endif /* ADDRESS_H */
