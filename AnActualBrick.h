/*Rando Sword*/

#include <string>
#include "Weapon.h"

#ifndef ANACTUALBRICK_H
#define ANACTUALBRICK_H


class AnActualBrick : public Weapon {
public:

    AnActualBrick(): Weapon("An Actual Brick", 5.0) {
	}

    virtual ~AnActualBrick() {};

    virtual double hit(double armor);

};

#endif /* ANACTUALBRICK_H */