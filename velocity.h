/***********************************************************************
 * Header File:
 *    Point : The representation of a speed on the screen
 * Author:
 *    Liya Wang
 * Summary:
 *    Everything we need to know the moving object's speed
 ************************************************************************/

#ifndef VELOCITY_H
#define VELOCITY_H

#include "velocity.h"
class Velocity
{

 private:
   float dx;
   float dy;
 

 public:
   Velocity();
   Velocity(float dx, float dy);
   float getDx() const;
   float getDy() const;
   void setDx(float dx);
   void setDy(float dy);

};


#endif