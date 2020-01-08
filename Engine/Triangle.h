#pragma once
#include "Vec2.h"
#include "Graphics.h"



class Triangle
{
public:
	void drawTriangle(Graphics& gfx, Vec2 position, bool lEdge, bool rEdge, bool bEdge);

private:
	Vec2 pos;


};