#pragma once
#include "Vector.hpp"
#include <vector>
class Cell
{
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
};

