
#include "tree.hpp"

int Tree::new_points()
{
    int sun,water,coefficient;
    sun = this->curr_weather->get_sun();
	water = this->curr_weather->get_water();
	coefficient = this->tree_level->get_coefficient();
	//bonus = Bonus::get_bonus();
                                        ///totally rethink bonus!!!

    //return points:
	return min(sun,water) * coefficient; // * (1 + bonus);
}
