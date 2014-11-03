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
	int temperature;
	int humidity;
	int precipitation;
	int wind_velocity;
	int wind_direction;
	int season;
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
public: 
	int GameTick();
};

int Growth::GameTick(){
	sun = get_sun();
	water = get_water();
	
	growth = min(sun,water) * coefficient * (1 + bonus);
}