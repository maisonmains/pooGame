#include "Dude.h"
#include "Graphics.h"

void Dude::ClampToScreen()
{
	const float right = x + width;
	if( x < 0 )
	{
		x = 0;
	}
	else if( right >= Graphics::ScreenWidth )
	{
		x = float (Graphics::ScreenWidth - 1) - width;
	}

	const float bottom = y + height;
	if( y < 0 )
	{
		y = 0;
	}
	else if( bottom >= Graphics::ScreenHeight )
	{
		y = float (Graphics::ScreenHeight - 1) - height;
	}
}

void Dude::Update( const Keyboard & kbd )
{
	if( kbd.KeyIsPressed( VK_RIGHT ) )
	{
		x += speed;
	}
	if( kbd.KeyIsPressed( VK_LEFT ) )
	{
		x -= speed;
	}
	if( kbd.KeyIsPressed( VK_DOWN ) )
	{
		y += speed;
	}
	if( kbd.KeyIsPressed( VK_UP ) )
	{
		y -= speed;
	}
}

float Dude::GetX() const
{
	return x;
}

float Dude::GetY() const
{
	return y;
}

float Dude::GetWidth() const
{
	return width;
}

float Dude::GetHeight() const
{
	return height;
}

void Dude::Draw(Graphics& gfx) const
{
	int x_local = int(x);
	int y_local = int(y);
	gfx.PutPixel(7 + x_local, 0 + y_local, 0, 0, 0);
	gfx.PutPixel(8 + x_local, 0 + y_local, 0, 0, 0);
	gfx.PutPixel(9 + x_local, 0 + y_local, 0, 0, 0);
	gfx.PutPixel(10 + x_local, 0 + y_local, 0, 0, 0);
	gfx.PutPixel(11 + x_local, 0 + y_local, 0, 0, 0);
	gfx.PutPixel(12 + x_local, 0 + y_local, 0, 0, 0);
	gfx.PutPixel(5 + x_local, 1 + y_local, 0, 0, 0);
	gfx.PutPixel(6 + x_local, 1 + y_local, 0, 0, 0);
	gfx.PutPixel(7 + x_local, 1 + y_local, 254, 221, 88);
	gfx.PutPixel(8 + x_local, 1 + y_local, 254, 221, 88);
	gfx.PutPixel(9 + x_local, 1 + y_local, 254, 221, 88);
	gfx.PutPixel(10 + x_local, 1 + y_local, 254, 221, 88);
	gfx.PutPixel(11 + x_local, 1 + y_local, 254, 221, 88);
	gfx.PutPixel(12 + x_local, 1 + y_local, 254, 221, 88);
	gfx.PutPixel(13 + x_local, 1 + y_local, 0, 0, 0);
	gfx.PutPixel(14 + x_local, 1 + y_local, 0, 0, 0);
	gfx.PutPixel(3 + x_local, 2 + y_local, 0, 0, 0);
	gfx.PutPixel(4 + x_local, 2 + y_local, 0, 0, 0);
	gfx.PutPixel(5 + x_local, 2 + y_local, 254, 221, 88);
	gfx.PutPixel(6 + x_local, 2 + y_local, 254, 221, 88);
	gfx.PutPixel(7 + x_local, 2 + y_local, 254, 221, 88);
	gfx.PutPixel(8 + x_local, 2 + y_local, 254, 221, 88);
	gfx.PutPixel(9 + x_local, 2 + y_local, 254, 221, 88);
	gfx.PutPixel(10 + x_local, 2 + y_local, 254, 221, 88);
	gfx.PutPixel(11 + x_local, 2 + y_local, 254, 221, 88);
	gfx.PutPixel(12 + x_local, 2 + y_local, 254, 221, 88);
	gfx.PutPixel(13 + x_local, 2 + y_local, 254, 221, 88);
	gfx.PutPixel(14 + x_local, 2 + y_local, 254, 221, 88);
	gfx.PutPixel(15 + x_local, 2 + y_local, 0, 0, 0);
	gfx.PutPixel(16 + x_local, 2 + y_local, 0, 0, 0);
	gfx.PutPixel(2 + x_local, 3 + y_local, 0, 0, 0);
	gfx.PutPixel(3 + x_local, 3 + y_local, 254, 221, 88);
	gfx.PutPixel(4 + x_local, 3 + y_local, 254, 221, 88);
	gfx.PutPixel(5 + x_local, 3 + y_local, 254, 221, 88);
	gfx.PutPixel(6 + x_local, 3 + y_local, 254, 221, 88);
	gfx.PutPixel(7 + x_local, 3 + y_local, 254, 221, 88);
	gfx.PutPixel(8 + x_local, 3 + y_local, 254, 221, 88);
	gfx.PutPixel(9 + x_local, 3 + y_local, 254, 221, 88);
	gfx.PutPixel(10 + x_local, 3 + y_local, 254, 221, 88);
	gfx.PutPixel(11 + x_local, 3 + y_local, 254, 221, 88);
	gfx.PutPixel(12 + x_local, 3 + y_local, 254, 221, 88);
	gfx.PutPixel(13 + x_local, 3 + y_local, 254, 221, 88);
	gfx.PutPixel(14 + x_local, 3 + y_local, 254, 221, 88);
	gfx.PutPixel(15 + x_local, 3 + y_local, 254, 221, 88);
	gfx.PutPixel(16 + x_local, 3 + y_local, 254, 221, 88);
	gfx.PutPixel(17 + x_local, 3 + y_local, 0, 0, 0);
	gfx.PutPixel(2 + x_local, 4 + y_local, 0, 0, 0);
	gfx.PutPixel(3 + x_local, 4 + y_local, 254, 221, 88);
	gfx.PutPixel(4 + x_local, 4 + y_local, 254, 221, 88);
	gfx.PutPixel(5 + x_local, 4 + y_local, 254, 221, 88);
	gfx.PutPixel(6 + x_local, 4 + y_local, 254, 221, 88);
	gfx.PutPixel(7 + x_local, 4 + y_local, 254, 221, 88);
	gfx.PutPixel(8 + x_local, 4 + y_local, 254, 221, 88);
	gfx.PutPixel(9 + x_local, 4 + y_local, 254, 221, 88);
	gfx.PutPixel(10 + x_local, 4 + y_local, 254, 221, 88);
	gfx.PutPixel(11 + x_local, 4 + y_local, 254, 221, 88);
	gfx.PutPixel(12 + x_local, 4 + y_local, 254, 221, 88);
	gfx.PutPixel(13 + x_local, 4 + y_local, 254, 221, 88);
	gfx.PutPixel(14 + x_local, 4 + y_local, 254, 221, 88);
	gfx.PutPixel(15 + x_local, 4 + y_local, 254, 221, 88);
	gfx.PutPixel(16 + x_local, 4 + y_local, 254, 221, 88);
	gfx.PutPixel(17 + x_local, 4 + y_local, 0, 0, 0);
	gfx.PutPixel(1 + x_local, 5 + y_local, 0, 0, 0);
	gfx.PutPixel(2 + x_local, 5 + y_local, 254, 221, 88);
	gfx.PutPixel(3 + x_local, 5 + y_local, 0, 0, 0);
	gfx.PutPixel(4 + x_local, 5 + y_local, 0, 0, 0);
	gfx.PutPixel(5 + x_local, 5 + y_local, 254, 221, 88);
	gfx.PutPixel(6 + x_local, 5 + y_local, 254, 221, 88);
	gfx.PutPixel(7 + x_local, 5 + y_local, 254, 221, 88);
	gfx.PutPixel(8 + x_local, 5 + y_local, 254, 221, 88);
	gfx.PutPixel(9 + x_local, 5 + y_local, 254, 221, 88);
	gfx.PutPixel(10 + x_local, 5 + y_local, 254, 221, 88);
	gfx.PutPixel(11 + x_local, 5 + y_local, 0, 0, 0);
	gfx.PutPixel(12 + x_local, 5 + y_local, 0, 0, 0);
	gfx.PutPixel(13 + x_local, 5 + y_local, 0, 0, 0);
	gfx.PutPixel(14 + x_local, 5 + y_local, 0, 0, 0);
	gfx.PutPixel(15 + x_local, 5 + y_local, 254, 221, 88);
	gfx.PutPixel(16 + x_local, 5 + y_local, 254, 221, 88);
	gfx.PutPixel(17 + x_local, 5 + y_local, 254, 221, 88);
	gfx.PutPixel(18 + x_local, 5 + y_local, 0, 0, 0);
	gfx.PutPixel(1 + x_local, 6 + y_local, 0, 0, 0);
	gfx.PutPixel(2 + x_local, 6 + y_local, 0, 0, 0);
	gfx.PutPixel(3 + x_local, 6 + y_local, 255, 255, 255);
	gfx.PutPixel(4 + x_local, 6 + y_local, 0, 0, 0);
	gfx.PutPixel(5 + x_local, 6 + y_local, 0, 0, 0);
	gfx.PutPixel(6 + x_local, 6 + y_local, 254, 221, 88);
	gfx.PutPixel(7 + x_local, 6 + y_local, 254, 221, 88);
	gfx.PutPixel(8 + x_local, 6 + y_local, 254, 221, 88);
	gfx.PutPixel(9 + x_local, 6 + y_local, 254, 221, 88);
	gfx.PutPixel(10 + x_local, 6 + y_local, 0, 0, 0);
	gfx.PutPixel(11 + x_local, 6 + y_local, 255, 255, 255);
	gfx.PutPixel(12 + x_local, 6 + y_local, 255, 255, 255);
	gfx.PutPixel(13 + x_local, 6 + y_local, 0, 0, 0);
	gfx.PutPixel(14 + x_local, 6 + y_local, 0, 0, 0);
	gfx.PutPixel(15 + x_local, 6 + y_local, 0, 0, 0);
	gfx.PutPixel(16 + x_local, 6 + y_local, 254, 221, 88);
	gfx.PutPixel(17 + x_local, 6 + y_local, 254, 221, 88);
	gfx.PutPixel(18 + x_local, 6 + y_local, 0, 0, 0);
	gfx.PutPixel(0 + x_local, 7 + y_local, 0, 0, 0);
	gfx.PutPixel(1 + x_local, 7 + y_local, 0, 0, 0);
	gfx.PutPixel(2 + x_local, 7 + y_local, 255, 255, 255);
	gfx.PutPixel(3 + x_local, 7 + y_local, 255, 255, 255);
	gfx.PutPixel(4 + x_local, 7 + y_local, 0, 0, 0);
	gfx.PutPixel(5 + x_local, 7 + y_local, 0, 0, 0);
	gfx.PutPixel(6 + x_local, 7 + y_local, 254, 221, 88);
	gfx.PutPixel(7 + x_local, 7 + y_local, 254, 221, 88);
	gfx.PutPixel(8 + x_local, 7 + y_local, 254, 221, 88);
	gfx.PutPixel(9 + x_local, 7 + y_local, 254, 221, 88);
	gfx.PutPixel(10 + x_local, 7 + y_local, 0, 0, 0);
	gfx.PutPixel(11 + x_local, 7 + y_local, 255, 255, 255);
	gfx.PutPixel(12 + x_local, 7 + y_local, 255, 255, 255);
	gfx.PutPixel(13 + x_local, 7 + y_local, 0, 0, 0);
	gfx.PutPixel(14 + x_local, 7 + y_local, 0, 0, 0);
	gfx.PutPixel(15 + x_local, 7 + y_local, 0, 0, 0);
	gfx.PutPixel(16 + x_local, 7 + y_local, 254, 221, 88);
	gfx.PutPixel(17 + x_local, 7 + y_local, 254, 221, 88);
	gfx.PutPixel(18 + x_local, 7 + y_local, 254, 221, 88);
	gfx.PutPixel(19 + x_local, 7 + y_local, 0, 0, 0);
	gfx.PutPixel(0 + x_local, 8 + y_local, 0, 0, 0);
	gfx.PutPixel(1 + x_local, 8 + y_local, 0, 0, 0);
	gfx.PutPixel(2 + x_local, 8 + y_local, 255, 255, 255);
	gfx.PutPixel(3 + x_local, 8 + y_local, 255, 255, 255);
	gfx.PutPixel(4 + x_local, 8 + y_local, 255, 255, 255);
	gfx.PutPixel(5 + x_local, 8 + y_local, 0, 0, 0);
	gfx.PutPixel(6 + x_local, 8 + y_local, 254, 221, 88);
	gfx.PutPixel(7 + x_local, 8 + y_local, 254, 221, 88);
	gfx.PutPixel(8 + x_local, 8 + y_local, 254, 221, 88);
	gfx.PutPixel(9 + x_local, 8 + y_local, 254, 221, 88);
	gfx.PutPixel(10 + x_local, 8 + y_local, 0, 0, 0);
	gfx.PutPixel(11 + x_local, 8 + y_local, 255, 255, 255);
	gfx.PutPixel(12 + x_local, 8 + y_local, 255, 255, 255);
	gfx.PutPixel(13 + x_local, 8 + y_local, 255, 255, 255);
	gfx.PutPixel(14 + x_local, 8 + y_local, 255, 255, 255);
	gfx.PutPixel(15 + x_local, 8 + y_local, 0, 0, 0);
	gfx.PutPixel(16 + x_local, 8 + y_local, 254, 221, 88);
	gfx.PutPixel(17 + x_local, 8 + y_local, 254, 221, 88);
	gfx.PutPixel(18 + x_local, 8 + y_local, 254, 221, 88);
	gfx.PutPixel(19 + x_local, 8 + y_local, 0, 0, 0);
	gfx.PutPixel(0 + x_local, 9 + y_local, 0, 0, 0);
	gfx.PutPixel(1 + x_local, 9 + y_local, 254, 221, 88);
	gfx.PutPixel(2 + x_local, 9 + y_local, 0, 0, 0);
	gfx.PutPixel(3 + x_local, 9 + y_local, 0, 0, 0);
	gfx.PutPixel(4 + x_local, 9 + y_local, 0, 0, 0);
	gfx.PutPixel(5 + x_local, 9 + y_local, 0, 0, 0);
	gfx.PutPixel(6 + x_local, 9 + y_local, 254, 221, 88);
	gfx.PutPixel(7 + x_local, 9 + y_local, 254, 221, 88);
	gfx.PutPixel(8 + x_local, 9 + y_local, 254, 221, 88);
	gfx.PutPixel(9 + x_local, 9 + y_local, 254, 221, 88);
	gfx.PutPixel(10 + x_local, 9 + y_local, 254, 221, 88);
	gfx.PutPixel(11 + x_local, 9 + y_local, 0, 0, 0);
	gfx.PutPixel(12 + x_local, 9 + y_local, 0, 0, 0);
	gfx.PutPixel(13 + x_local, 9 + y_local, 0, 0, 0);
	gfx.PutPixel(14 + x_local, 9 + y_local, 0, 0, 0);
	gfx.PutPixel(15 + x_local, 9 + y_local, 254, 221, 88);
	gfx.PutPixel(16 + x_local, 9 + y_local, 254, 221, 88);
	gfx.PutPixel(17 + x_local, 9 + y_local, 254, 221, 88);
	gfx.PutPixel(18 + x_local, 9 + y_local, 254, 221, 88);
	gfx.PutPixel(19 + x_local, 9 + y_local, 0, 0, 0);
	gfx.PutPixel(0 + x_local, 10 + y_local, 0, 0, 0);
	gfx.PutPixel(1 + x_local, 10 + y_local, 254, 221, 88);
	gfx.PutPixel(2 + x_local, 10 + y_local, 254, 221, 88);
	gfx.PutPixel(3 + x_local, 10 + y_local, 254, 221, 88);
	gfx.PutPixel(4 + x_local, 10 + y_local, 254, 221, 88);
	gfx.PutPixel(5 + x_local, 10 + y_local, 254, 221, 88);
	gfx.PutPixel(6 + x_local, 10 + y_local, 254, 221, 88);
	gfx.PutPixel(7 + x_local, 10 + y_local, 254, 221, 88);
	gfx.PutPixel(8 + x_local, 10 + y_local, 254, 221, 88);
	gfx.PutPixel(9 + x_local, 10 + y_local, 254, 221, 88);
	gfx.PutPixel(10 + x_local, 10 + y_local, 254, 221, 88);
	gfx.PutPixel(11 + x_local, 10 + y_local, 254, 221, 88);
	gfx.PutPixel(12 + x_local, 10 + y_local, 254, 221, 88);
	gfx.PutPixel(13 + x_local, 10 + y_local, 254, 221, 88);
	gfx.PutPixel(14 + x_local, 10 + y_local, 254, 221, 88);
	gfx.PutPixel(15 + x_local, 10 + y_local, 254, 221, 88);
	gfx.PutPixel(16 + x_local, 10 + y_local, 254, 221, 88);
	gfx.PutPixel(17 + x_local, 10 + y_local, 254, 221, 88);
	gfx.PutPixel(18 + x_local, 10 + y_local, 254, 221, 88);
	gfx.PutPixel(19 + x_local, 10 + y_local, 0, 0, 0);
	gfx.PutPixel(0 + x_local, 11 + y_local, 0, 0, 0);
	gfx.PutPixel(1 + x_local, 11 + y_local, 254, 221, 88);
	gfx.PutPixel(2 + x_local, 11 + y_local, 254, 221, 88);
	gfx.PutPixel(3 + x_local, 11 + y_local, 254, 221, 88);
	gfx.PutPixel(4 + x_local, 11 + y_local, 254, 221, 88);
	gfx.PutPixel(5 + x_local, 11 + y_local, 254, 221, 88);
	gfx.PutPixel(6 + x_local, 11 + y_local, 254, 221, 88);
	gfx.PutPixel(7 + x_local, 11 + y_local, 20, 14, 18);
	gfx.PutPixel(8 + x_local, 11 + y_local, 18, 11, 14);
	gfx.PutPixel(9 + x_local, 11 + y_local, 18, 12, 14);
	gfx.PutPixel(10 + x_local, 11 + y_local, 18, 12, 14);
	gfx.PutPixel(11 + x_local, 11 + y_local, 21, 13, 16);
	gfx.PutPixel(12 + x_local, 11 + y_local, 24, 11, 15);
	gfx.PutPixel(13 + x_local, 11 + y_local, 0, 0, 0);
	gfx.PutPixel(14 + x_local, 11 + y_local, 254, 221, 88);
	gfx.PutPixel(15 + x_local, 11 + y_local, 254, 221, 88);
	gfx.PutPixel(16 + x_local, 11 + y_local, 254, 221, 88);
	gfx.PutPixel(17 + x_local, 11 + y_local, 254, 221, 88);
	gfx.PutPixel(18 + x_local, 11 + y_local, 254, 221, 88);
	gfx.PutPixel(19 + x_local, 11 + y_local, 0, 0, 0);
	gfx.PutPixel(0 + x_local, 12 + y_local, 0, 0, 0);
	gfx.PutPixel(1 + x_local, 12 + y_local, 254, 221, 88);
	gfx.PutPixel(2 + x_local, 12 + y_local, 254, 221, 88);
	gfx.PutPixel(3 + x_local, 12 + y_local, 254, 221, 88);
	gfx.PutPixel(4 + x_local, 12 + y_local, 254, 221, 88);
	gfx.PutPixel(5 + x_local, 12 + y_local, 254, 221, 88);
	gfx.PutPixel(6 + x_local, 12 + y_local, 23, 9, 23);
	gfx.PutPixel(7 + x_local, 12 + y_local, 135, 26, 68);
	gfx.PutPixel(8 + x_local, 12 + y_local, 135, 26, 68);
	gfx.PutPixel(9 + x_local, 12 + y_local, 135, 26, 68);
	gfx.PutPixel(10 + x_local, 12 + y_local, 135, 26, 68);
	gfx.PutPixel(11 + x_local, 12 + y_local, 135, 26, 68);
	gfx.PutPixel(12 + x_local, 12 + y_local, 135, 26, 68);
	gfx.PutPixel(13 + x_local, 12 + y_local, 135, 26, 68);
	gfx.PutPixel(14 + x_local, 12 + y_local, 0, 0, 0);
	gfx.PutPixel(15 + x_local, 12 + y_local, 254, 221, 88);
	gfx.PutPixel(16 + x_local, 12 + y_local, 254, 221, 88);
	gfx.PutPixel(17 + x_local, 12 + y_local, 254, 221, 88);
	gfx.PutPixel(18 + x_local, 12 + y_local, 254, 221, 88);
	gfx.PutPixel(19 + x_local, 12 + y_local, 0, 0, 0);
	gfx.PutPixel(1 + x_local, 13 + y_local, 0, 0, 0);
	gfx.PutPixel(2 + x_local, 13 + y_local, 254, 221, 88);
	gfx.PutPixel(3 + x_local, 13 + y_local, 254, 221, 88);
	gfx.PutPixel(4 + x_local, 13 + y_local, 254, 221, 88);
	gfx.PutPixel(5 + x_local, 13 + y_local, 0, 0, 0);
	gfx.PutPixel(6 + x_local, 13 + y_local, 135, 26, 68);
	gfx.PutPixel(7 + x_local, 13 + y_local, 135, 26, 68);
	gfx.PutPixel(8 + x_local, 13 + y_local, 135, 26, 68);
	gfx.PutPixel(9 + x_local, 13 + y_local, 135, 26, 68);
	gfx.PutPixel(10 + x_local, 13 + y_local, 135, 26, 68);
	gfx.PutPixel(11 + x_local, 13 + y_local, 135, 26, 68);
	gfx.PutPixel(12 + x_local, 13 + y_local, 135, 26, 68);
	gfx.PutPixel(13 + x_local, 13 + y_local, 135, 26, 68);
	gfx.PutPixel(14 + x_local, 13 + y_local, 135, 26, 68);
	gfx.PutPixel(15 + x_local, 13 + y_local, 0, 0, 0);
	gfx.PutPixel(16 + x_local, 13 + y_local, 254, 221, 88);
	gfx.PutPixel(17 + x_local, 13 + y_local, 254, 221, 88);
	gfx.PutPixel(18 + x_local, 13 + y_local, 0, 0, 0);
	gfx.PutPixel(1 + x_local, 14 + y_local, 0, 0, 0);
	gfx.PutPixel(2 + x_local, 14 + y_local, 254, 221, 88);
	gfx.PutPixel(3 + x_local, 14 + y_local, 254, 221, 88);
	gfx.PutPixel(4 + x_local, 14 + y_local, 0, 0, 0);
	gfx.PutPixel(5 + x_local, 14 + y_local, 135, 26, 68);
	gfx.PutPixel(6 + x_local, 14 + y_local, 135, 26, 68);
	gfx.PutPixel(7 + x_local, 14 + y_local, 135, 26, 68);
	gfx.PutPixel(8 + x_local, 14 + y_local, 135, 26, 68);
	gfx.PutPixel(9 + x_local, 14 + y_local, 251, 192, 224);
	gfx.PutPixel(10 + x_local, 14 + y_local, 251, 192, 224);
	gfx.PutPixel(11 + x_local, 14 + y_local, 251, 192, 224);
	gfx.PutPixel(12 + x_local, 14 + y_local, 251, 192, 224);
	gfx.PutPixel(13 + x_local, 14 + y_local, 135, 26, 68);
	gfx.PutPixel(14 + x_local, 14 + y_local, 135, 26, 68);
	gfx.PutPixel(15 + x_local, 14 + y_local, 0, 0, 0);
	gfx.PutPixel(16 + x_local, 14 + y_local, 254, 221, 88);
	gfx.PutPixel(17 + x_local, 14 + y_local, 254, 221, 88);
	gfx.PutPixel(18 + x_local, 14 + y_local, 0, 0, 0);
	gfx.PutPixel(2 + x_local, 15 + y_local, 0, 0, 0);
	gfx.PutPixel(3 + x_local, 15 + y_local, 254, 221, 88);
	gfx.PutPixel(4 + x_local, 15 + y_local, 0, 0, 0);
	gfx.PutPixel(5 + x_local, 15 + y_local, 135, 26, 68);
	gfx.PutPixel(6 + x_local, 15 + y_local, 135, 26, 68);
	gfx.PutPixel(7 + x_local, 15 + y_local, 135, 26, 68);
	gfx.PutPixel(8 + x_local, 15 + y_local, 251, 192, 224);
	gfx.PutPixel(9 + x_local, 15 + y_local, 251, 192, 224);
	gfx.PutPixel(10 + x_local, 15 + y_local, 251, 192, 224);
	gfx.PutPixel(11 + x_local, 15 + y_local, 251, 192, 224);
	gfx.PutPixel(12 + x_local, 15 + y_local, 251, 192, 224);
	gfx.PutPixel(13 + x_local, 15 + y_local, 251, 192, 224);
	gfx.PutPixel(14 + x_local, 15 + y_local, 135, 26, 68);
	gfx.PutPixel(15 + x_local, 15 + y_local, 0, 0, 0);
	gfx.PutPixel(16 + x_local, 15 + y_local, 254, 221, 88);
	gfx.PutPixel(17 + x_local, 15 + y_local, 0, 0, 0);
	gfx.PutPixel(2 + x_local, 16 + y_local, 0, 0, 0);
	gfx.PutPixel(3 + x_local, 16 + y_local, 254, 221, 88);
	gfx.PutPixel(4 + x_local, 16 + y_local, 0, 0, 0);
	gfx.PutPixel(5 + x_local, 16 + y_local, 135, 26, 68);
	gfx.PutPixel(6 + x_local, 16 + y_local, 135, 26, 68);
	gfx.PutPixel(7 + x_local, 16 + y_local, 135, 26, 68);
	gfx.PutPixel(8 + x_local, 16 + y_local, 251, 192, 224);
	gfx.PutPixel(9 + x_local, 16 + y_local, 251, 192, 224);
	gfx.PutPixel(10 + x_local, 16 + y_local, 251, 192, 224);
	gfx.PutPixel(11 + x_local, 16 + y_local, 251, 192, 224);
	gfx.PutPixel(12 + x_local, 16 + y_local, 251, 192, 224);
	gfx.PutPixel(13 + x_local, 16 + y_local, 251, 192, 224);
	gfx.PutPixel(14 + x_local, 16 + y_local, 135, 26, 68);
	gfx.PutPixel(15 + x_local, 16 + y_local, 0, 0, 0);
	gfx.PutPixel(16 + x_local, 16 + y_local, 254, 221, 88);
	gfx.PutPixel(17 + x_local, 16 + y_local, 0, 0, 0);
	gfx.PutPixel(3 + x_local, 17 + y_local, 0, 0, 0);
	gfx.PutPixel(4 + x_local, 17 + y_local, 0, 0, 0);
	gfx.PutPixel(5 + x_local, 17 + y_local, 0, 0, 0);
	gfx.PutPixel(6 + x_local, 17 + y_local, 0, 0, 0);
	gfx.PutPixel(7 + x_local, 17 + y_local, 0, 0, 0);
	gfx.PutPixel(8 + x_local, 17 + y_local, 0, 0, 0);
	gfx.PutPixel(9 + x_local, 17 + y_local, 0, 0, 0);
	gfx.PutPixel(10 + x_local, 17 + y_local, 0, 0, 0);
	gfx.PutPixel(11 + x_local, 17 + y_local, 0, 0, 0);
	gfx.PutPixel(12 + x_local, 17 + y_local, 0, 0, 0);
	gfx.PutPixel(13 + x_local, 17 + y_local, 0, 0, 0);
	gfx.PutPixel(14 + x_local, 17 + y_local, 0, 0, 0);
	gfx.PutPixel(15 + x_local, 17 + y_local, 0, 0, 0);
	gfx.PutPixel(16 + x_local, 17 + y_local, 0, 0, 0);
	gfx.PutPixel(5 + x_local, 18 + y_local, 0, 0, 0);
	gfx.PutPixel(6 + x_local, 18 + y_local, 0, 0, 0);
	gfx.PutPixel(7 + x_local, 18 + y_local, 254, 221, 88);
	gfx.PutPixel(8 + x_local, 18 + y_local, 254, 221, 88);
	gfx.PutPixel(9 + x_local, 18 + y_local, 254, 221, 88);
	gfx.PutPixel(10 + x_local, 18 + y_local, 254, 221, 88);
	gfx.PutPixel(11 + x_local, 18 + y_local, 254, 221, 88);
	gfx.PutPixel(12 + x_local, 18 + y_local, 254, 221, 88);
	gfx.PutPixel(13 + x_local, 18 + y_local, 0, 0, 0);
	gfx.PutPixel(14 + x_local, 18 + y_local, 0, 0, 0);
	gfx.PutPixel(7 + x_local, 19 + y_local, 0, 0, 0);
	gfx.PutPixel(8 + x_local, 19 + y_local, 0, 0, 0);
	gfx.PutPixel(9 + x_local, 19 + y_local, 0, 0, 0);
	gfx.PutPixel(10 + x_local, 19 + y_local, 0, 0, 0);
	gfx.PutPixel(11 + x_local, 19 + y_local, 0, 0, 0);
	gfx.PutPixel(12 + x_local, 19 + y_local, 0, 0, 0);
}