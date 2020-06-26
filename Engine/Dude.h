#pragma once

#include "Graphics.h"
#include "Keyboard.h"
#include "SpritesSection.h"

class Dude
{
public:
	void ClampToScreen();
	void Draw( Graphics& gfx ) const;
	void Update( const Keyboard& kbd );
	float GetX() const;
	float GetY() const;
	float GetWidth() const;
	float GetHeight() const;
private:
	float x = 400;
	float y = 300;
	static constexpr float speed = 1.5;
	static constexpr float width = 20;
	static constexpr float height = 20;
	
};