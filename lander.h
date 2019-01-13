
#ifndef LANDER_H
#define LANDER_H

#include "lander.h"
#include "velocity.h"
#include "point.h"
#include "uiDraw.h"

class Lander
{

   private:
      int fuel;
      bool landed;
      bool alive;
      float gravity;
      Point point;
      Velocity velocity;


   public:
     

      Lander();
      Point getPoint() const;
      Velocity getVelocity() const;
      bool isAlive();
      bool isLanded();
      int getFuel() ;
      bool canThrust();
      void setLanded(bool landed);
      void setAlive(bool alive); 
      void setFuel(int fuel);
      void applyGravity(float gravity);
      void applyThrustLeft();
      void applyThrustRight();
      void applyThrustBottom();
      void advance();
      void draw();

};

#endif 