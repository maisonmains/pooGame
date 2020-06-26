#include "Poo.h"
#include "Graphics.h"
#include <assert.h>

void Poo::Init( float in_x,float in_y,float in_vx,float in_vy )
{
	assert( initialized == false );
	x = in_x;
	y = in_y;
	vx = in_vx;
	vy = in_vy;
	initialized = true;
}

void Poo::Update()
{
	assert( initialized == true );
	x += vx;
	y += vy;

	const float right = x + width;
	if( x < 0 )
	{
		x = 0;
		vx = -vx;
	}
	else if( right >= Graphics::ScreenWidth )
	{
		x = (Graphics::ScreenWidth - 1) - width;
		vx = -vx;
	}

	const float bottom = y + height;
	if( y < 0 )
	{
		y = 0;
		vy = -vy;
	}
	else if( bottom >= Graphics::ScreenHeight )
	{
		y = (Graphics::ScreenHeight - 1) - height;
		vy = -vy;
	}
}

bool Poo::TestCollision( const Dude& dude ) const
{
	assert( initialized == true );
	const float duderight = dude.GetX() + float(dude.GetWidth());
	const float dudebottom = dude.GetY() + float(dude.GetHeight());
	const float pooright = x + width;
	const float poobottom = y + height;

	return
		duderight >= x &&
		dude.GetX() <= pooright &&
		dudebottom >= y &&
		dude.GetY() <= poobottom;
}

void Poo::Draw( Graphics& gfx ) const
{
	assert( initialized == true );
	int x_local = int(x);
	int y_local = int(y);
	gfx.PutPixel( 14 + x_local,0 + y_local,138,77,0 );
	gfx.PutPixel( 7 + x_local,1 + y_local,138,77,0 );
	gfx.PutPixel( 13 + x_local,1 + y_local,138,77,0 );
	gfx.PutPixel( 20 + x_local,1 + y_local,138,77,0 );
	gfx.PutPixel( 6 + x_local,2 + y_local,138,77,0 );
	gfx.PutPixel( 13 + x_local,2 + y_local,138,77,0 );
	gfx.PutPixel( 20 + x_local,2 + y_local,138,77,0 );
	gfx.PutPixel( 6 + x_local,3 + y_local,138,77,0 );
	gfx.PutPixel( 6 + x_local,4 + y_local,138,77,0 );
	gfx.PutPixel( 14 + x_local,4 + y_local,138,77,0 );
	gfx.PutPixel( 21 + x_local,4 + y_local,138,77,0 );
	gfx.PutPixel( 7 + x_local,5 + y_local,138,77,0 );
	gfx.PutPixel( 13 + x_local,5 + y_local,138,77,0 );
	gfx.PutPixel( 21 + x_local,5 + y_local,138,77,0 );
	gfx.PutPixel( 7 + x_local,6 + y_local,138,77,0 );
	gfx.PutPixel( 20 + x_local,6 + y_local,138,77,0 );
	gfx.PutPixel( 6 + x_local,7 + y_local,138,77,0 );
	gfx.PutPixel( 14 + x_local,7 + y_local,51,28,0 );
	gfx.PutPixel( 15 + x_local,7 + y_local,51,28,0 );
	gfx.PutPixel( 20 + x_local,7 + y_local,138,77,0 );
	gfx.PutPixel( 12 + x_local,8 + y_local,51,28,0 );
	gfx.PutPixel( 13 + x_local,8 + y_local,51,28,0 );
	gfx.PutPixel( 14 + x_local,8 + y_local,51,28,0 );
	gfx.PutPixel( 7 + x_local,9 + y_local,138,77,0 );
	gfx.PutPixel( 11 + x_local,9 + y_local,51,28,0 );
	gfx.PutPixel( 12 + x_local,9 + y_local,102,57,0 );
	gfx.PutPixel( 13 + x_local,9 + y_local,138,77,0 );
	gfx.PutPixel( 14 + x_local,9 + y_local,138,77,0 );
	gfx.PutPixel( 15 + x_local,9 + y_local,51,28,0 );
	gfx.PutPixel( 21 + x_local,9 + y_local,138,77,0 );
	gfx.PutPixel( 10 + x_local,10 + y_local,51,28,0 );
	gfx.PutPixel( 11 + x_local,10 + y_local,51,28,0 );
	gfx.PutPixel( 12 + x_local,10 + y_local,102,57,0 );
	gfx.PutPixel( 13 + x_local,10 + y_local,138,77,0 );
	gfx.PutPixel( 14 + x_local,10 + y_local,138,77,0 );
	gfx.PutPixel( 15 + x_local,10 + y_local,51,28,0 );
	gfx.PutPixel( 20 + x_local,10 + y_local,138,77,0 );
	gfx.PutPixel( 9 + x_local,11 + y_local,51,28,0 );
	gfx.PutPixel( 10 + x_local,11 + y_local,138,77,0 );
	gfx.PutPixel( 11 + x_local,11 + y_local,138,77,0 );
	gfx.PutPixel( 12 + x_local,11 + y_local,51,28,0 );
	gfx.PutPixel( 13 + x_local,11 + y_local,51,28,0 );
	gfx.PutPixel( 14 + x_local,11 + y_local,51,28,0 );
	gfx.PutPixel( 15 + x_local,11 + y_local,51,28,0 );
	gfx.PutPixel( 16 + x_local,11 + y_local,51,28,0 );
	gfx.PutPixel( 9 + x_local,12 + y_local,51,28,0 );
	gfx.PutPixel( 10 + x_local,12 + y_local,138,77,0 );
	gfx.PutPixel( 11 + x_local,12 + y_local,138,77,0 );
	gfx.PutPixel( 12 + x_local,12 + y_local,111,62,0 );
	gfx.PutPixel( 13 + x_local,12 + y_local,102,57,0 );
	gfx.PutPixel( 14 + x_local,12 + y_local,102,57,0 );
	gfx.PutPixel( 15 + x_local,12 + y_local,102,57,0 );
	gfx.PutPixel( 16 + x_local,12 + y_local,51,28,0 );
	gfx.PutPixel( 9 + x_local,13 + y_local,51,28,0 );
	gfx.PutPixel( 10 + x_local,13 + y_local,109,61,0 );
	gfx.PutPixel( 11 + x_local,13 + y_local,138,77,0 );
	gfx.PutPixel( 12 + x_local,13 + y_local,138,77,0 );
	gfx.PutPixel( 13 + x_local,13 + y_local,138,77,0 );
	gfx.PutPixel( 14 + x_local,13 + y_local,138,77,0 );
	gfx.PutPixel( 15 + x_local,13 + y_local,138,77,0 );
	gfx.PutPixel( 16 + x_local,13 + y_local,51,28,0 );
	gfx.PutPixel( 5 + x_local,14 + y_local,51,28,0 );
	gfx.PutPixel( 7 + x_local,14 + y_local,51,28,0 );
	gfx.PutPixel( 8 + x_local,14 + y_local,51,28,0 );
	gfx.PutPixel( 9 + x_local,14 + y_local,51,28,0 );
	gfx.PutPixel( 10 + x_local,14 + y_local,51,28,0 );
	gfx.PutPixel( 11 + x_local,14 + y_local,138,77,0 );
	gfx.PutPixel( 12 + x_local,14 + y_local,138,77,0 );
	gfx.PutPixel( 13 + x_local,14 + y_local,138,77,0 );
	gfx.PutPixel( 14 + x_local,14 + y_local,138,77,0 );
	gfx.PutPixel( 15 + x_local,14 + y_local,138,77,0 );
	gfx.PutPixel( 16 + x_local,14 + y_local,51,28,0 );
	gfx.PutPixel( 4 + x_local,15 + y_local,51,28,0 );
	gfx.PutPixel( 5 + x_local,15 + y_local,138,77,0 );
	gfx.PutPixel( 6 + x_local,15 + y_local,51,28,0 );
	gfx.PutPixel( 7 + x_local,15 + y_local,116,65,0 );
	gfx.PutPixel( 8 + x_local,15 + y_local,138,77,0 );
	gfx.PutPixel( 9 + x_local,15 + y_local,138,77,0 );
	gfx.PutPixel( 10 + x_local,15 + y_local,138,77,0 );
	gfx.PutPixel( 11 + x_local,15 + y_local,51,28,0 );
	gfx.PutPixel( 12 + x_local,15 + y_local,51,28,0 );
	gfx.PutPixel( 13 + x_local,15 + y_local,51,28,0 );
	gfx.PutPixel( 14 + x_local,15 + y_local,51,28,0 );
	gfx.PutPixel( 15 + x_local,15 + y_local,51,28,0 );
	gfx.PutPixel( 16 + x_local,15 + y_local,51,28,0 );
	gfx.PutPixel( 17 + x_local,15 + y_local,51,28,0 );
	gfx.PutPixel( 18 + x_local,15 + y_local,51,28,0 );
	gfx.PutPixel( 1 + x_local,16 + y_local,51,28,0 );
	gfx.PutPixel( 2 + x_local,16 + y_local,51,28,0 );
	gfx.PutPixel( 3 + x_local,16 + y_local,51,28,0 );
	gfx.PutPixel( 4 + x_local,16 + y_local,51,28,0 );
	gfx.PutPixel( 5 + x_local,16 + y_local,138,77,0 );
	gfx.PutPixel( 6 + x_local,16 + y_local,51,28,0 );
	gfx.PutPixel( 7 + x_local,16 + y_local,116,65,0 );
	gfx.PutPixel( 8 + x_local,16 + y_local,138,77,0 );
	gfx.PutPixel( 9 + x_local,16 + y_local,138,77,0 );
	gfx.PutPixel( 10 + x_local,16 + y_local,138,77,0 );
	gfx.PutPixel( 11 + x_local,16 + y_local,138,77,0 );
	gfx.PutPixel( 12 + x_local,16 + y_local,138,77,0 );
	gfx.PutPixel( 13 + x_local,16 + y_local,109,61,0 );
	gfx.PutPixel( 14 + x_local,16 + y_local,51,28,0 );
	gfx.PutPixel( 15 + x_local,16 + y_local,138,77,0 );
	gfx.PutPixel( 16 + x_local,16 + y_local,138,77,0 );
	gfx.PutPixel( 17 + x_local,16 + y_local,138,77,0 );
	gfx.PutPixel( 18 + x_local,16 + y_local,123,69,0 );
	gfx.PutPixel( 19 + x_local,16 + y_local,51,28,0 );
	gfx.PutPixel( 0 + x_local,17 + y_local,51,28,0 );
	gfx.PutPixel( 1 + x_local,17 + y_local,87,49,0 );
	gfx.PutPixel( 2 + x_local,17 + y_local,87,49,0 );
	gfx.PutPixel( 3 + x_local,17 + y_local,87,49,0 );
	gfx.PutPixel( 4 + x_local,17 + y_local,87,49,0 );
	gfx.PutPixel( 5 + x_local,17 + y_local,51,28,0 );
	gfx.PutPixel( 6 + x_local,17 + y_local,51,28,0 );
	gfx.PutPixel( 7 + x_local,17 + y_local,43,24,0 );
	gfx.PutPixel( 8 + x_local,17 + y_local,51,28,0 );
	gfx.PutPixel( 9 + x_local,17 + y_local,51,28,0 );
	gfx.PutPixel( 10 + x_local,17 + y_local,51,28,0 );
	gfx.PutPixel( 11 + x_local,17 + y_local,51,28,0 );
	gfx.PutPixel( 12 + x_local,17 + y_local,51,28,0 );
	gfx.PutPixel( 13 + x_local,17 + y_local,40,22,0 );
	gfx.PutPixel( 14 + x_local,17 + y_local,51,28,0 );
	gfx.PutPixel( 15 + x_local,17 + y_local,138,77,0 );
	gfx.PutPixel( 16 + x_local,17 + y_local,138,77,0 );
	gfx.PutPixel( 17 + x_local,17 + y_local,138,77,0 );
	gfx.PutPixel( 18 + x_local,17 + y_local,123,69,0 );
	gfx.PutPixel( 19 + x_local,17 + y_local,51,28,0 );
	gfx.PutPixel( 0 + x_local,18 + y_local,51,28,0 );
	gfx.PutPixel( 1 + x_local,18 + y_local,138,77,0 );
	gfx.PutPixel( 2 + x_local,18 + y_local,138,77,0 );
	gfx.PutPixel( 3 + x_local,18 + y_local,138,77,0 );
	gfx.PutPixel( 4 + x_local,18 + y_local,138,77,0 );
	gfx.PutPixel( 5 + x_local,18 + y_local,51,28,0 );
	gfx.PutPixel( 6 + x_local,18 + y_local,51,28,0 );
	gfx.PutPixel( 7 + x_local,18 + y_local,51,28,0 );
	gfx.PutPixel( 8 + x_local,18 + y_local,51,28,0 );
	gfx.PutPixel( 9 + x_local,18 + y_local,51,28,0 );
	gfx.PutPixel( 10 + x_local,18 + y_local,51,28,0 );
	gfx.PutPixel( 11 + x_local,18 + y_local,51,28,0 );
	gfx.PutPixel( 12 + x_local,18 + y_local,51,28,0 );
	gfx.PutPixel( 13 + x_local,18 + y_local,51,28,0 );
	gfx.PutPixel( 14 + x_local,18 + y_local,51,28,0 );
	gfx.PutPixel( 15 + x_local,18 + y_local,138,77,0 );
	gfx.PutPixel( 16 + x_local,18 + y_local,138,77,0 );
	gfx.PutPixel( 17 + x_local,18 + y_local,138,77,0 );
	gfx.PutPixel( 18 + x_local,18 + y_local,123,69,0 );
	gfx.PutPixel( 19 + x_local,18 + y_local,51,28,0 );
	gfx.PutPixel( 20 + x_local,18 + y_local,51,28,0 );
	gfx.PutPixel( 21 + x_local,18 + y_local,51,28,0 );
	gfx.PutPixel( 22 + x_local,18 + y_local,51,28,0 );
	gfx.PutPixel( 0 + x_local,19 + y_local,51,28,0 );
	gfx.PutPixel( 1 + x_local,19 + y_local,138,77,0 );
	gfx.PutPixel( 2 + x_local,19 + y_local,138,77,0 );
	gfx.PutPixel( 3 + x_local,19 + y_local,138,77,0 );
	gfx.PutPixel( 4 + x_local,19 + y_local,138,77,0 );
	gfx.PutPixel( 5 + x_local,19 + y_local,51,28,0 );
	gfx.PutPixel( 6 + x_local,19 + y_local,138,77,0 );
	gfx.PutPixel( 7 + x_local,19 + y_local,138,77,0 );
	gfx.PutPixel( 8 + x_local,19 + y_local,138,77,0 );
	gfx.PutPixel( 9 + x_local,19 + y_local,138,77,0 );
	gfx.PutPixel( 10 + x_local,19 + y_local,138,77,0 );
	gfx.PutPixel( 11 + x_local,19 + y_local,138,77,0 );
	gfx.PutPixel( 12 + x_local,19 + y_local,138,77,0 );
	gfx.PutPixel( 13 + x_local,19 + y_local,138,77,0 );
	gfx.PutPixel( 14 + x_local,19 + y_local,138,77,0 );
	gfx.PutPixel( 15 + x_local,19 + y_local,138,77,0 );
	gfx.PutPixel( 16 + x_local,19 + y_local,138,77,0 );
	gfx.PutPixel( 17 + x_local,19 + y_local,138,77,0 );
	gfx.PutPixel( 18 + x_local,19 + y_local,123,69,0 );
	gfx.PutPixel( 19 + x_local,19 + y_local,51,28,0 );
	gfx.PutPixel( 20 + x_local,19 + y_local,138,77,0 );
	gfx.PutPixel( 21 + x_local,19 + y_local,138,77,0 );
	gfx.PutPixel( 22 + x_local,19 + y_local,65,36,0 );
	gfx.PutPixel( 23 + x_local,19 + y_local,51,28,0 );
	gfx.PutPixel( 1 + x_local,20 + y_local,51,28,0 );
	gfx.PutPixel( 2 + x_local,20 + y_local,51,28,0 );
	gfx.PutPixel( 3 + x_local,20 + y_local,51,28,0 );
	gfx.PutPixel( 4 + x_local,20 + y_local,51,28,0 );
	gfx.PutPixel( 5 + x_local,20 + y_local,51,28,0 );
	gfx.PutPixel( 6 + x_local,20 + y_local,138,77,0 );
	gfx.PutPixel( 7 + x_local,20 + y_local,138,77,0 );
	gfx.PutPixel( 8 + x_local,20 + y_local,138,77,0 );
	gfx.PutPixel( 9 + x_local,20 + y_local,138,77,0 );
	gfx.PutPixel( 10 + x_local,20 + y_local,138,77,0 );
	gfx.PutPixel( 11 + x_local,20 + y_local,138,77,0 );
	gfx.PutPixel( 12 + x_local,20 + y_local,138,77,0 );
	gfx.PutPixel( 13 + x_local,20 + y_local,138,77,0 );
	gfx.PutPixel( 14 + x_local,20 + y_local,138,77,0 );
	gfx.PutPixel( 15 + x_local,20 + y_local,138,77,0 );
	gfx.PutPixel( 16 + x_local,20 + y_local,138,77,0 );
	gfx.PutPixel( 17 + x_local,20 + y_local,138,77,0 );
	gfx.PutPixel( 18 + x_local,20 + y_local,123,69,0 );
	gfx.PutPixel( 19 + x_local,20 + y_local,51,28,0 );
	gfx.PutPixel( 20 + x_local,20 + y_local,138,77,0 );
	gfx.PutPixel( 21 + x_local,20 + y_local,138,77,0 );
	gfx.PutPixel( 22 + x_local,20 + y_local,65,36,0 );
	gfx.PutPixel( 23 + x_local,20 + y_local,51,28,0 );
	gfx.PutPixel( 0 + x_local,21 + y_local,51,28,0 );
	gfx.PutPixel( 1 + x_local,21 + y_local,138,77,0 );
	gfx.PutPixel( 2 + x_local,21 + y_local,138,77,0 );
	gfx.PutPixel( 3 + x_local,21 + y_local,138,77,0 );
	gfx.PutPixel( 4 + x_local,21 + y_local,138,77,0 );
	gfx.PutPixel( 5 + x_local,21 + y_local,138,77,0 );
	gfx.PutPixel( 6 + x_local,21 + y_local,51,28,0 );
	gfx.PutPixel( 7 + x_local,21 + y_local,51,28,0 );
	gfx.PutPixel( 8 + x_local,21 + y_local,51,28,0 );
	gfx.PutPixel( 9 + x_local,21 + y_local,51,28,0 );
	gfx.PutPixel( 10 + x_local,21 + y_local,51,28,0 );
	gfx.PutPixel( 11 + x_local,21 + y_local,51,28,0 );
	gfx.PutPixel( 12 + x_local,21 + y_local,51,28,0 );
	gfx.PutPixel( 13 + x_local,21 + y_local,51,28,0 );
	gfx.PutPixel( 14 + x_local,21 + y_local,51,28,0 );
	gfx.PutPixel( 15 + x_local,21 + y_local,51,28,0 );
	gfx.PutPixel( 16 + x_local,21 + y_local,51,28,0 );
	gfx.PutPixel( 17 + x_local,21 + y_local,51,28,0 );
	gfx.PutPixel( 18 + x_local,21 + y_local,51,28,0 );
	gfx.PutPixel( 20 + x_local,21 + y_local,51,28,0 );
	gfx.PutPixel( 21 + x_local,21 + y_local,51,28,0 );
	gfx.PutPixel( 22 + x_local,21 + y_local,51,28,0 );
	gfx.PutPixel( 0 + x_local,22 + y_local,51,28,0 );
	gfx.PutPixel( 1 + x_local,22 + y_local,65,36,0 );
	gfx.PutPixel( 2 + x_local,22 + y_local,65,36,0 );
	gfx.PutPixel( 3 + x_local,22 + y_local,65,36,0 );
	gfx.PutPixel( 4 + x_local,22 + y_local,65,36,0 );
	gfx.PutPixel( 5 + x_local,22 + y_local,65,36,0 );
	gfx.PutPixel( 6 + x_local,22 + y_local,51,28,0 );
	gfx.PutPixel( 1 + x_local,23 + y_local,51,28,0 );
	gfx.PutPixel( 2 + x_local,23 + y_local,51,28,0 );
	gfx.PutPixel( 3 + x_local,23 + y_local,51,28,0 );
	gfx.PutPixel( 4 + x_local,23 + y_local,51,28,0 );
	gfx.PutPixel( 5 + x_local,23 + y_local,51,28,0 );
	gfx.PutPixel( 6 + x_local,23 + y_local,51,28,0 );
}