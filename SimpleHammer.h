/*Simple Hammer*/

#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H


class SimpleHammer : public Weapon {
public:

    SimpleHammer() : Weapon("Simple Hammer", 25.0) 
	{
    }

    virtual ~SimpleHammer() {};

    virtual double hit(double armor);

};

#endif /* SIMPLEHAMMER_H */