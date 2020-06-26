#pragma once

#include "Graphics.h"
#include "Keyboard.h"

class Dude
{
public:
	void ClampToScreen();
	void Draw( Graphics& gfx ) const;
	void Update( const Keyboard& kbd );
	float GetX() const;
	float GetY() const;
	int GetWidth() const;
	int GetHeight() const;
private:
	float x = 400;
	float y = 300;
	static constexpr float speed = 1;
	static constexpr int width = 20;
	static constexpr int height = 20;
};