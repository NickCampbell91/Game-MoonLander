#ifndef UFO_H
#define UFO_H

#include "point.h"
#include "velocity.h"

class UFO
{
    private:
        Point point;
        Velocity velocity;

    public:
        UFO();
        void advance();
        void draw();
        Point getPoint() const { return point; }

};

#endif
