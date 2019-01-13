#include "ufo.h"
#include "uiDraw.h"

#define UFO_TOP_LIMIT 200
#define UFO_BOTTOM_LIMIT 150

// Default Constructor
// Create a UFO starting on the left hand side and some random height
// near the top of the game.  The speed of the UFO will vary allowing
// the object to initially move to the right and up.
UFO::UFO()
{
    point.setX(-200);
    point.setY(random(UFO_BOTTOM_LIMIT, UFO_TOP_LIMIT));
    velocity.setDx(random(5.0, 10.0));
    velocity.setDy(random(5.0, 10.0));
}

// Update the location of the UFO based on current velocity.  If the
// object gets to high then it will bounce back down.  If the object
// gets to low then it will bounce back up.
void UFO::advance()
{
    point.setX(point.getX() + velocity.getDx());
    point.setY(point.getY() + velocity.getDy());

    // Check to see if we are too high or too low
    if ((point.getY() > UFO_TOP_LIMIT) || (point.getY() < UFO_BOTTOM_LIMIT))
    {
        // Bounce!
        velocity.setDy(velocity.getDy() * -1);
    }
}

// The drawbird function will draw a start on the screen per the 
// current UFO location.
void UFO::draw()
{
    drawSacredBird(point,15);
}

