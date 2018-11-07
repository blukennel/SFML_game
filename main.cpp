#include "pch.h"
#include "block.hpp"
#include "actor.hpp"
#include "map.hpp"
using namespace sf;

RenderWindow root(VideoMode(800,600),"SFML_game");
Event event;

int main()
{
	actor player;
	map cave;//nazwa pliku w nawiasie konstruktor
	cave.load();
	while (root.isOpen())
	{//================================================= main loop start
		while (root.pollEvent(event))
		{//============================================= event loop start
			if (event.type == Event::Closed)
				root.close();
			if (event.type == Event::KeyPressed && 
				event.key.code == Keyboard::Escape)
				root.close();
			player.get_direction();
		}//============================================= event loop end
		player.move();
		root.clear();
		cave.draw();
		player.draw();
		root.display();
	}//================================================= main loop end
	return 0;
}