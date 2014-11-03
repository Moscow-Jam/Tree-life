#include <stdio.h>
#include <conio.h>

int min(a,b){
	if (a >= b) 
		return b;
	else
		return a;
}

class Weather{
private:
	int humidity; 		//amount of water in ground
	int precipitation; 	//amount of water from clouds
	double clouds; 		//percentage of light
	double season; 		//amount of light everyday
	int temperature		//not used
	int wind_velocity; 	//not used
	int wind_direction; //not used
public:
	int get_sun();
	int get_water();
}

class Level{
private:
	int level;
public:
	int get_coefficient;
}

class Bonuses{
private:
	int animals;
	int games;
	int donations;
public:
	int get_bonus();
}

class Growth {
private:
	int sun;
	int water;
	int coefficient;
	int bonus;
	int growth;
public: 
	int get_growth();
};

int Weather::get_sun(){
	int sun;
	sun = clowds * season;
	return sun;
}

int Weather::get_water(){
	int water;
	water = humidity + precipitation;
	return water;
}

int Level::get_coefficient(){
	int coefficient;
	coefficient = 
	return coefficient;
}

int Growth::get_growth(){
	sun = Weather::get_sun();
	water = Weather::get_water();
	coefficient = Level::get_coefficient();
	bonus = Bonus::get_bonus();
	
	growth = min(sun,water) * coefficient * (1 + bonus);
	return growth;
}

