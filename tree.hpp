
#include "weather.hpp"

#include <vector>

using namespace std;

class Tree
{
  private:
    int height;     // in m.
    int points;
    Weather *curr_weather;
    Level *tree_level;
    int new_points();       //aka get_growth();
  public:
    Tree()
    {
        height=0;           ///should be "pull my height from server"
        points=0;           ///should be "pull my points from server"
        curr_weather=NULL;  ///should be "pull weather from server"
    }
    ~Tree()
    {
        ///push all my data onto server
    }
};
