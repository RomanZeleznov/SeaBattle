#include "Cell.hpp"
#include <vector>
#include <iostream>

Cell::Cell(Vector position) : m_position(position), m_status(0), m_isCircled(false), m_polygon(0)
{
	std::cout << "Ячейка создана" << std::endl;
}

Vector Cell::GetPosition()
{
	return m_position;
}
int Cell::GetStatus()
{
	return m_status;
}
void Cell::SetStatus(int status)
{
	m_status = status;
}
bool Cell::GetIsCircled()
{
	return m_status;
}
void Cell::SetIsCircled(bool isCircled)
{
	m_isCircled = isCircled;
}
void Cell::SetPolygonSquare()
{
	std::cout << "Полигон сделан квадратом" << std::endl;
}
void Cell::SetPolygonTriangle(Vector direction)
{
	std::cout << "Полигон сделан треугольником" << std::endl;
}

