#include "lander.h"
#include "velocity.h"
#include "point.h"
#include "uiDraw.h"


/***************************************
* Function: Default Constructor
* Purpuse:  set value to the default
*           condition
**************************************/
Lander :: Lander()
{
  alive = true;
  landed = false;
}


/*****************************************
* Function: setFuel
* Purpuse:  change the from value to the one
*          that is decided by the user
******************************************/
void Lander :: setFuel(int fuel) 
{
  if(fuel < 0)
  {
   this-> fuel = 0;
  }
  else
  {
   this-> fuel = fuel;
  } 
   
}


/****************************************
* Function: getPoint
* Purpuse: access to the value from Point
******************************************/
Point Lander :: getPoint() const
{
   return point;
}


/*******************************************
* Function: getVelocity
* Purpuse: access to the value from Velocity
*********************************************/
Velocity Lander :: getVelocity() const
{
    return velocity;
}

/***************************************
* Function: isAlive()
* Purpuse:  access to the value alive      
**************************************/
bool Lander:: isAlive()
{
  return alive;
}

/***************************************
* Function: isLanded()
* Purpuse: access to the value landed
**************************************/
bool Lander :: isLanded()
{
  return landed;
}


/***************************************
* Function: getFuel()
* Purpuse:  access to the value fuel
***************************************/
int Lander :: getFuel()
{
  return fuel;
}

bool Lander :: canThrust()
{
  if (landed == true)
      {
       return false;
      } 
  else if(fuel <= 0)
      { 
      fuel = 0;
      return false;
      }
  else  
      return alive;
}


/***************************************
* Function: setLanded()
* Purpuse:  change the variable landed 
*      from the design by the user
**************************************/
void Lander :: setLanded(bool landed)
{
  this-> landed = landed;
}

void Lander :: setAlive(bool alive)
{
  this-> alive = alive;
}


/******************************************
* Function: applyGravity
* Purpuse: apply the gravity to the velocity 
********************************************/
// 這個我覺我不太可能自己想出來
void Lander :: applyGravity(float gravity)
{
  velocity.setDy(velocity.getDy() - gravity); 
}

/******************************************
* Function: applyThrustLeft
* Purpuse: the function assits the lander to 
*          thrust left and change the velocity
*********************************************/
void Lander :: applyThrustLeft()
{
  if (fuel > 0)
  {
    velocity.setDx(velocity.getDx()+ 0.1);
    setFuel(fuel - 1);
  }
 /* if(canThrust == true)
  {

  }
  else
  {

  }*/
}


//為什麼往左右的速度要+-0.1
/***************************************
* Function: applyThrustRight
* Purpuse: the function assits the lander to 
*          thrust right and change the velocity
**************************************/
void Lander :: applyThrustRight()
{
  if(fuel > 0) 
  {
    velocity.setDx(velocity.getDx()- 0.1);
    setFuel(fuel - 1);
  }

}



/*************************************************************
* Function: applyThrustBottom
* Purpuse: Make the lander thrust with the down arrow key and
*          the flame will thrust downwards and push up the lander 
**************************************************************/
void Lander :: applyThrustBottom()
{

  if (fuel > 0)
  {
    velocity.setDy(velocity.getDy() + 0.4);
    setFuel(fuel - 3); 
  }

}


/********************************************
* Function: advance()
* Purpuse: It will add the velocity to the point
***********************************************/
void Lander :: advance()
{
  point.setX(point.getX()+velocity.getDx());
  point.setY(point.getY()+velocity.getDy());
}


/***************************************
* Function: draw()
* Purpuse: This will draw the lander out
***************************************/
void Lander :: draw()
{
  drawLander(point);
}