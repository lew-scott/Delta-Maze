#include "Triangle.h"


void Triangle::drawTriangle(Graphics & gfx, Vec2 position, bool lEdge, bool rEdge, bool bEdge)
{
	Vec2 p1 = { 0,-14 };
	Vec2 p2 = { -12,10 };
	Vec2 p3 = { 12,10 };

	if (lEdge == true)
	{
		gfx.Drawline(p1 + position, p2 + position, Colors::White);
	}

	if (rEdge == true)
	{
		gfx.Drawline(p2 + position, p3 + position, Colors::White);
	}

	if (bEdge == true)
	{
		gfx.Drawline(p3 + position, p1 + position, Colors::White);
	}
}

