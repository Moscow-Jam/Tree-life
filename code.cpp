
#include "weather.hpp"

#include <stdio.h>
#include <iostream>
#include <algorithm>


int Weather::get_sun(){
	int sun;
	sun = this->clouds * this->season;
	return sun;
}

int Weather::get_water(){
	int water;
	water = humidity + precipitation;
	return water;
}

int Level::get_coefficient(){
	int coefficient;
	coefficient = (100 - 1/this->level_number)/100;     //0<coeff<1
	return coefficient;
}

/*
int Growth::get_growth(){
	sun = Weather::get_sun();
	water = Weather::get_water();
	coefficient = Level::get_coefficient();
	bonus = Bonus::get_bonus();

	growth = min(sun,water) * coefficient * (1 + bonus);
	return growth;
}
*/
