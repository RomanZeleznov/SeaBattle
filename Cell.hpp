#pragma once
#include "Vector.hpp"
#include <vector>
class Cell
{
	public:
		Vector position;
		int status;
		bool isCircled;

	private:
		std::vector<Vector> m_polygon;

	public:
		Cell(Vector position);
		
		void SetPolygonSquare();
		void SetPolygonTriangle(Vector direction);
};

