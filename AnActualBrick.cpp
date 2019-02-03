/*AnActualBrick.cpp*/

#include "AnActualBrick.h"


double AnActualBrick::hit(double armor){
    
	double damage;
	if( armor <5 )
	{
		damage = hitPoints; 
	}
	else if( armor > 5 && armor < 20)
	{
		damage = hitPoints - 1;
	}
	else if( armor > 20 && armor <35)
	{
		damage = hitPoints - 3;
	}
	else{
		damage = 0;
	}
    if(damage < 0){
        return 0;
    }
    return damage;
}