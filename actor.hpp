#pragma once
#include "pch.h"
using namespace sf;
extern RenderWindow root;
extern Event event;

class actor
{
	int x;
	int y;
	int direction;
	float fx;
	float fy;
	Sprite sprite;
	Texture texture;
public:
	actor();
	void draw();
	void get_direction();
	void move();
};

