#pragma once
#include "pch.h"
#include "block.hpp"
using namespace sf;
extern RenderWindow root;
extern Event event;

class map
{
	int index;
	int x_size;
	int y_size;
	std::string tile[100];
	block box[100];
public:
	map();
	void load();
	void draw();
};

