#include "block.hpp"

block::block()
{
}

void block::create(std::string itype, int ix, int iy)
{
	type = itype;
	x = ix;
	y = iy;

	if (type == "floor")
	{
		solid = false;
		texture.loadFromFile("blocks/floor.png");
		sprite.setTexture(texture);
	}
	if (type == "wall")
	{
		solid = true;
		texture.loadFromFile("blocks/wall.png");
		sprite.setTexture(texture);
	}
	sprite.setPosition(x * 32, y * 32);
}


void block::draw()
{
	root.draw(sprite);
}

