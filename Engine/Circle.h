#pragma once
#include "Graphics.h"
class Circle
{
public:
	Circle( float p_x, float p_y );
	void DrawCircle( Graphics& gfx );
private:
	float x;
	float y;
	float Dims = 20;
	Color c = Colors::Cyan;
};