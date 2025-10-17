#include "Field.hpp"
#include <iostream>

Field::Field(int size) :
	m_size(size), m_isGot(false), m_cells(0), m_ships(0), m_aliveShipCount(0), m_selectedShip()
{
	for (int y = 0; y < size; y++)
		for (int x = 0; x < size; x++)
			m_cells.push_back(new Cell(Vector(x, y)));
	std::cout << "\nField создан" << std::endl;
}

int Field::GetSize()
{
	return m_size;
}
bool Field::GetIsGot()
{
	return m_isGot;
}
std::vector<Cell*> Field::GetCells()
{
	return m_cells;
}
void Field::AddShip(Ship& ship)
{
	m_ships.push_back(&ship);
	std::cout << "Корабль добавлен" << std::endl;
}
void Field::MoveSelectedShip(Vector position)
{
	std::cout << "Выделенный корабль перемещен" << std::endl;
}
void Field::RotateSelectedShip()
{
	std::cout << "Выделенный корабль повернут" << std::endl;
}
void Field::Shot(Vector position)
{
	std::cout << "Произведен выстрел" << std::endl;
}
Ship* Field::GetShipOnPosition(Vector position)
{
	Cell c = GetCellOnPosition(position);
	std::cout << "Получен корабль по координатам" << std::endl;
	for (Ship* s : m_ships)
		if (c.GetPosition().x == s->GetPosition().x && c.GetPosition().y == s->GetPosition().y)
			return s;
	return nullptr;
}
Cell& Field::GetCellOnPosition(Vector position)
{
	std::cout << "Получена ячейка поля по координатам" << std::endl;
	return *(m_cells[position.y * m_size + position.x]);
}
void Field::SetSelectedShip(Ship& ship)
{
	m_selectedShip = &ship;
	std::cout << "Установлен выделенный корабль" << std::endl;
}
void Field::RemoveSelectedShip()
{
	std::cout << "Выделение снято" << std::endl;
	m_selectedShip = nullptr;
}
bool Field::IsAllShipDestroyed()
{
	std::cout << "Проверка на уничтожение всех кораблей" << std::endl;
	return m_aliveShipCount == 0;
}
bool Field::IsCorrectShipsPositions()
{
	std::cout << "Проверка на корректное расположение кораблей" << std::endl;
	return false;
}

bool Field::IsCellInsideShip(Cell& cell, Ship& ship)
{
	std::cout << "Проверка на нахождение ячейки внутри корабля" << std::endl;
	return false;
}
bool Field::IsCellNearShip(Cell& cell, Ship& ship)
{
	std::cout << "Проверка на нахождение ячейки рядом с кораблем" << std::endl;
	return false;
}
bool Field::IsCorrectShipPosition(Ship& ship)
{
	std::cout << "Проверка на корректное расположение корабля" << std::endl;
	return false;
}
void Field::CompileCells()
{
	std::cout << "Ячейки скомпилированы" << std::endl;
}
