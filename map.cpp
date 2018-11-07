#include "map.hpp"

map::map()
{
	x_size = 0;
	y_size = 0;
	index = 0;
	
}

void map::load()
{
	int size;
	int x;
	int y;
	std::string type;
	std::string sx="000";
	std::string sy="000";
	std::fstream file;
	std::string data;
	file.open("maps/cave.map", std::ios::in);
	getline(file, data);
	size = stoi(data);

	for (int i = 0; i < size; i++)
	{
		getline(file, data);
		sx[0]=data[0];
		sx[1] = data[1];
		sx[2] = data[2];
		sy[0] = data[4];
		sy[1] = data[5];
		sy[2] = data[6];
		x = stoi(sx);
		y = stoi(sy);
		getline(file, type);
		box[index].create(type, x, y);
		index++;
	}
}

void map::draw()
{
	for(int i=0; i<100; i++)
		box[i].draw();
}


