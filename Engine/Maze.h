#pragma once
#include "Vec2.h"
#include "Vei2.h"
#include "Triangle.h"
#include "Graphics.h"
#include <vector>

using namespace std;

class Maze
{
public:
	void initLayout();
	void drawMaze(Graphics& gfx);
	Triangle& atTriangle(const Vei2 position);

private:
	
	static constexpr int height = 5;
	static constexpr int width = 9;
	Triangle points[width * height];
	Vei2 pos;
	vector<Vei2> moves;

};