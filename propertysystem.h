#ifndef PROPERTYSYSTEM_H
#define PROPERTYSYSTEM_H

#include "property.h"

class PropertySystem
{
public:

    void propertyRegister( Property property );

    std::vector< Property > getProperty( void );

private:

    std::vector< Property* > property_list;

};


#endif /* PROPERTYSYSTEM_H */
