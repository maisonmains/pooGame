#include "Circle.h"

Circle::Circle( float p_x, float p_y )
	:
	x( p_x ),
	y( p_y )
{
}

void Circle::DrawCircle( Graphics& gfx )
{
	gfx.DrawCircle( int( x ), int( y ), int( Dims ), c );
}
