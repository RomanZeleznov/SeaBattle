#include "Field.hpp"
#include <iostream>

Field::Field(int size) :
	m_size(size), m_isGot(false), m_cells(0), m_ships(0), m_aliveShipCount(0), m_selectedShip()
{
	try
	{
		for (int y = 0; y < size; y++)
			for (int x = 0; x < size; x++)
				m_cells.push_back(std::make_shared<Cell>(Cell(Vector(x, y))));
	}
	catch (...)
	{
		std::cout << "Intercepted error" << std::endl;
	}
}
Field::Field(Field& field, bool isDeep)
{
	m_size = field.m_size;
	m_isGot = field.m_isGot;
	m_aliveShipCount = field.m_aliveShipCount;

	if (!isDeep)
	{
		m_cells = field.m_cells;
		m_ships = field.m_ships;
		m_selectedShip = field.m_selectedShip;
		return;
	}
	m_cells = std::vector<std::shared_ptr<Cell>>(0);
	for (std::shared_ptr<Cell> c : field.m_cells)
	{
		if (c == nullptr)
			break;
		m_cells.push_back(std::make_shared<Cell>(Cell(c->GetPosition())));
	}

	m_ships = std::vector<std::shared_ptr<Ship>>(0);
	for (std::shared_ptr<Ship> s : field.m_ships)
	{
		if (s == nullptr)
			break;
		m_ships.push_back(std::make_shared<Ship>(Ship(s->GetPosition(), s->GetDirection(), s->GetLength())));
	}
	if (m_ships.size() == 0)
	{
		m_selectedShip = nullptr;
		return;
	}
	m_selectedShip = std::make_shared<Ship>(
		*field.m_ships.at(
			std::distance(field.m_ships.begin(),
				std::find(field.m_ships.begin(), field.m_ships.end(), field.m_selectedShip)) - 1));

}

int Field::GetSize()
{
	return m_size;
}
bool Field::GetIsGot()
{
	return m_isGot;
}
std::vector<std::shared_ptr<Cell>> Field::GetCells()
{
	return m_cells;
}
void Field::AddShip(Ship& ship)
{
	try
	{
		m_ships.push_back(std::make_shared<Ship>(ship));
	}
	catch (...)
	{
		std::cout << "Intercepted error" << std::endl;
	}
}
void Field::AddShip(Vector position, Vector direction, int length)
{
	try
	{
		m_ships.push_back(std::make_shared<Ship>(Ship(position, direction, length)));
	}
	catch (...)
	{
		std::cout << "Intercepted error" << std::endl;
	}
}
void Field::MoveSelectedShip(Vector position)
{
	m_selectedShip->SetPosition(position);
}
void Field::RotateSelectedShip()
{
}
void Field::Shot(Vector position)
{
}
std::shared_ptr<Ship> Field::GetShipOnPosition(Vector position)
{
	Cell c = GetCellOnPosition(position);
	for (std::shared_ptr<Ship> s : m_ships)
		if (c.GetPosition().x == s->GetPosition().x && c.GetPosition().y == s->GetPosition().y)
			return s;
	return nullptr;
}
std::shared_ptr<Ship> Field::GetShipOnPosition(int x, int y)
{
	Cell c = GetCellOnPosition(x, y);
	for (std::shared_ptr<Ship> s : m_ships)
		if (c.GetPosition().x == s->GetPosition().x && c.GetPosition().y == s->GetPosition().y)
			return s;
	return nullptr;
}
Cell& Field::GetCellOnPosition(Vector position)
{
	try
	{
		int ind = position.y * m_size + position.x;
		if (ind >= m_cells.size())
			throw "Out of vector";
		Cell& c = (Cell&)m_cells.at(ind);
		return c;
	}
	catch (...)
	{
		std::cout << "Intercepted error: out of vector" << std::endl;
	}
}
Cell& Field::GetCellOnPosition(int x, int y)
{
	try
	{
		int ind = y * m_size + x;
		if (ind >= m_cells.size())
			throw "Out of vector";
		Cell& c = (Cell&)m_cells.at(ind);
		return c;
	}
	catch (...)
	{
		std::cout << "Intercepted error: out of vector" << std::endl;
	}
}
void Field::SetSelectedShip(Ship& ship)
{
	m_selectedShip = std::make_shared<Ship>(ship);
}
void Field::RemoveSelectedShip()
{
	m_selectedShip = nullptr;
}
bool Field::IsAllShipDestroyed()
{
	return m_aliveShipCount == 0;
}
bool Field::IsCorrectShipsPositions()
{
	return false;
}

bool Field::IsCellInsideShip(Cell& cell, Ship& ship)
{
	return false;
}
bool Field::IsCellNearShip(Cell& cell, Ship& ship)
{
	return false;
}
bool Field::IsCorrectShipPosition(Ship& ship)
{
	return false;
}
void Field::CompileCells()
{
}