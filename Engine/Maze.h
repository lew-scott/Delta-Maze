#pragma once
#include "Vec2.h"
#include "Vei2.h"
#include "Triangle.h"
#include "Graphics.h"
#include <random>
#include <vector>

using namespace std;

class Maze
{
public:
	void initLayout();
	void createMaze();
	bool check_tiles_are_all_visited();
	void drawMaze(Graphics& gfx);
	Triangle& atTriangle(const Vei2 position);
	const Triangle& atTriangle(const Vei2& position) const;

private:
	
	static constexpr int height = 5;
	static constexpr int width = 9;
	Triangle points[width * height];
	Vei2 pos;
	Vei2 hm = { 1,0 }; // horizontal move
	Vei2 vm = { 0,1 }; // verticle move
	vector<int> AvailableMoves = { 0,0,0 };
	Vei2 newPos;
	vector<Vei2> moves;

};