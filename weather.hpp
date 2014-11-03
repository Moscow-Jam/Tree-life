#include <stdio.h>

class Weather{
private:
	int humidity; 		//amount of water in ground
	int precipitation; 	//amount of water from clouds
	double clouds; 		//percentage of light
	double season; 		//amount of light everyday
	int temperature;	//not used
	int wind_velocity; 	//not used
	int wind_direction; //not used
public:
	int get_sun();
	int get_water();
};

class Level{
private:
	int level_number;
public:
	int get_coefficient();
};

class Bonuses{
private:
	int animals;
	int games;
	int donations;
public:
	int get_bonus();
};


/*
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
*/
