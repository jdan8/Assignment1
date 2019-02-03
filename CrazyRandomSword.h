/*Rando Sword*/

#include <string>
#include "Weapon.h"


#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H


class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Crazy random sword", 0){
	}

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */