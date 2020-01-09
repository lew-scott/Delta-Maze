#include "Maze.h"

void Maze::initLayout()
{
	Vei2 p = { 4,0 };
	int length = 1;
	for (int j = 0; j < height; j++)
	{
		for (int i = 1; i <= length; i++)
		{
			atTriangle(p).setToVisited();
			if (i != length)
			{
				p.x += 1;
			}
		}
		p.x = p.x - length;
		length += 2;

		p.y += 1;
	}

	p = { 0,height-1 };
	atTriangle(p).setToStart();
	p = { width-1,height-1 };
	atTriangle(p).setToEnd();
}

void Maze::drawMaze(Graphics & gfx)
{
	Vei2 p = { 0,0 };
	for (Vei2 gridpos = { 0,0 }; gridpos.y < height; gridpos.y++)
	{
		for (gridpos.x = 0; gridpos.x < width; gridpos.x+=1)
		{
			p.x = gridpos.x;
			p.y = gridpos.y;

			if (gridpos.x % 2 == 0 && gridpos.y % 2 == 0)
			{
				atTriangle(gridpos).drawTriangle(gfx, p);
			}
			else if(gridpos.x % 2 == 1 && gridpos.y % 2 == 1)
			{
				atTriangle(gridpos).drawTriangle(gfx, gridpos);
			}
		}
	}
}

Triangle& Maze::atTriangle(const Vei2 position)
{
	return points[position.y * width + position.x];
}
