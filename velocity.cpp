  
#include "velocity.h"
/************************************************
* Function: Default Constructor
* Purpose: Set the variable to 0 because it is in 
*          default condition
************************************************/
Velocity :: Velocity()
{
   dx = 0;
   dy = 0;
}

/**************************************
* Function: Non-Default Constructor
* Purpose: Set dx and dy to the one that 
* are input by the users
****************************************/
Velocity :: Velocity(float dx, float dy)
{
   this-> dx = dx;
   this-> dy = dy;

}
   
/*********************************
* Function:getDy
* Purpose: access to value form dx
***********************************/   
float Velocity :: getDx() const
{
   return dx;
}

/**************************
* Function: getDy
* Purpose: access to value form dy
***************************/  
float Velocity :: getDy() const
{
   return dy;
}

/**************************
* Function: setDx
* Purpose: Set dx to the one that 
* is input by the users
***************************/     
void Velocity :: setDx(float dx)
{
   this-> dx = dx;
}

/**************************
* Function: setDy()
* Purpose:Set dx to the one that 
* is input by the users
***************************/
void Velocity :: setDy(float dy)
{
   this-> dy= dy;
}