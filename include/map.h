#ifndef MAP_H
#define MAP_H

#include "entity.h"
#include "datastructures.h"

#include <allegro5/allegro.h>
#include <string>

class Map
{
    public:
        Map(std::string name);
        ~Map();
        void render(double cam_x, double cam_y);
    protected:
    private:
        ALLEGRO_BITMAP *background;
        COVERGUARD_BITMAP wallmask;
};

#endif // MAP_H
