#pragma once
#include "Vei2.h"
#include "Graphics.h"



class Triangle
{
public:

	enum class State
	{
		OutsideGrid,
		Visited,
		UnVisited,
		Start,
		End
	};

	State setToUnvisitedGrid();
	State setToVisited();
	State setToStart();
	State setToEnd();
	void drawTriangle(Graphics& gfx, Vei2 position);
	bool setLeftConnection();
	bool setRightConnection();
	bool setBottomConnection();
	bool setTopConnection();
	bool checkLeftConnection();
	bool checkRightConnection();
	bool checkBottomConnection();
	bool checkTopConnection();


private:
	State state = State::OutsideGrid;
	Vec2 pos;
	bool hasLeftConnection = false;
	bool hasRightConnection = false;
	bool hasBottomConnection = false;
	bool hasTopConnection = false;
	static constexpr int width = 24;
	static constexpr int height = 24;


};