#pragma once
#include<SFML/Graphics.hpp>;
using namespace sf;
class character

{
public:
	virtual void update(RenderWindow Window ) = 0;
	virtual void draw() = 0;

};

