/* CrazyRandomSword.cpp*/

#include "CrazyRandomSword.h"
#include <time.h>
#include <stdlib.h>
#include <cmath>


double CrazyRandomSword::hit(double armor){
	
	srand(time(NULL)); 

 double damage = hitPoints - (result);
    if (damage < 0) {
        return 0;
    }
    return damage;
}