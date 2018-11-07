#include "actor.hpp"

enum
{
	null = 0,
	right = 1,
	up = 2,
	left = 3,
	down = 4,
};

actor::actor()
{
	x = 0;
	y = 0;
	direction = null;
	texture.loadFromFile("sprites/timmy.png");
	sprite.setTexture(texture);
}

void actor::draw()
{
	root.draw(sprite);
}

void actor::get_direction()
{
	if (Keyboard::isKeyPressed(Keyboard::D))
		direction = right;
	else if (Keyboard::isKeyPressed(Keyboard::W))
		direction = up;
	else if (Keyboard::isKeyPressed(Keyboard::A))
		direction = left;
	else if (Keyboard::isKeyPressed(Keyboard::S))
		direction = down;
	else
		direction = null;
}

void actor::move()
{
	switch (direction)
	{
	case right:
		sprite.move(0.1, 0);
		break;
	case up:
		sprite.move(0, -0.1);
		break;
	case left:
		sprite.move(-0.1, 0);
		break;
	case down:
		sprite.move(0, 0.1);
		break;
	}
	
}


