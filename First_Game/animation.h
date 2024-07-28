#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
class animation
{
public:
	animation(Texture* texture, Vector2u imagecount , float switchtime);

	~animation();

	void update(int row, float deltatime, bool faceRight);

public:
	IntRect uvrect;
private: 
	Vector2u imagecount;
	Vector2u currentimage;

	float totaltime;
	float switchtime;
	

};

