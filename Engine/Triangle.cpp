#include "Triangle.h"


Triangle::State Triangle::setToUnvisitedGrid()
{
	return state = State::UnVisited;
}

Triangle::State Triangle::setToVisited()
{
	return state = State::Visited;
}

Triangle::State Triangle::setToStart()
{
	setBottomConnection();
	return state = State::Start;
}

Triangle::State Triangle::setToEnd()
{
	setBottomConnection();
	return state = State::End;
}

void Triangle::drawTriangle(Graphics & gfx, Vei2 pos)
{
	Vec2 scrPos;
	scrPos.x = pos.x * width * 0.5 + 350;
	scrPos.y = pos.y * height + 100;

	Vec2 p1 = { 0 + scrPos.x,-14 + scrPos.y };
	Vec2 p2 = { -12 + scrPos.x, 10 + scrPos.y };
	Vec2 p3 = { 12 + scrPos.x, 10 + scrPos.y };
	if (state == State::Visited || state == State::Start || state == State::End)
	{
		if (hasLeftConnection == false)
		{
			gfx.Drawline(p1, p2, Colors::White);
		}

		if (hasBottomConnection == false)
		{
			gfx.Drawline(p2, p3, Colors::White);
		}

		if (hasRightConnection == false)
		{
			gfx.Drawline(p3, p1, Colors::White);
		}
	}
}

bool Triangle::setLeftConnection()
{
	return hasLeftConnection = true;
}

bool Triangle::setRightConnection()
{
	return hasRightConnection = true;
}

bool Triangle::setBottomConnection()
{
	return hasBottomConnection = true;
}

bool Triangle::setTopConnection()
{
	return hasTopConnection = true;
}

bool Triangle::checkLeftConnection()
{
	return hasLeftConnection;
}

bool Triangle::checkRightConnection()
{
	return hasRightConnection;
}

bool Triangle::checkBottomConnection()
{
	return hasBottomConnection;
}

bool Triangle::checkTopConnection()
{
	return hasTopConnection;
}

