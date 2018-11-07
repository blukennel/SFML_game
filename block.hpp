#pragma once
#include "pch.h"
using namespace sf;
extern RenderWindow root;

class block
{
	std::string type;
	int x;
	int y;
	bool solid;
	Sprite sprite;
	Texture texture;
public:
	block();
	void create(std::string itype, int ix, int iy);
	void draw();
};

