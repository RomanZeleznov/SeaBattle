#include "Cell.hpp"
#include <vector>
#include <iostream>

Cell::Cell(Vector position) : position(position), status(0), isCircled(false), m_polygon(0)
{
	std::cout << "Ячейка создана" << std::endl;
}

void Cell::SetPolygonSquare()
{
	std::cout << "Полигон сделан квадратом" << std::endl;
}
void Cell::SetPolygonTriangle(Vector direction)
{
	std::cout << "Полигон сделан треугольником" << std::endl;
}

