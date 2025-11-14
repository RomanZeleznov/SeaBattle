#pragma once
#include "Vector.hpp"
#include <vector>

class Cell
{
public:
	static const int NotClicked = 0;
	static const int Clicked = 1;
	static const int Ship = 2;
	static const int DestroyedShip = 3;
private:
	Vector m_position;
	int m_status;
	bool m_isCircled;
	std::vector<Vector> m_polygon;

public:
	Cell(Vector position);
	Vector GetPosition();
	int GetStatus();
	void SetStatus(int status);
	bool GetIsCircled();
	void SetIsCircled(bool isCircled);
	void SetPolygonSquare();
	void SetPolygonTriangle(Vector direction);
	friend bool IsShootable(Cell& cell);
};
