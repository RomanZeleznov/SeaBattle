#pragma once
#include <vector>
#include <memory>
#include "Vector.hpp"
#include "Cell.hpp"
#include "Ship.hpp"
class Field
{
private:
	int m_size;
	bool m_isGot;
	std::vector<std::shared_ptr<Cell>> m_cells;
	std::vector<std::shared_ptr<Ship>> m_ships;
	int m_aliveShipCount;
	std::shared_ptr<Ship> m_selectedShip;

public:
	Field(int size);
	Field(const Field& field);
	int GetSize();
	bool GetIsGot();
	std::vector<std::shared_ptr<Cell>> GetCells();
	void AddShip(Ship& ship);
	void AddShip(Vector position, Vector direction, int length);
	void MoveSelectedShip(Vector position);
	void RotateSelectedShip();
	void Shot(Vector position);
	std::shared_ptr<Ship> GetShipOnPosition(Vector position);
	std::shared_ptr<Ship> GetShipOnPosition(int x, int y);
	Cell& GetCellOnPosition(Vector position);
	Cell& GetCellOnPosition(int x, int y);
	void SetSelectedShip(Ship& ship);
	void RemoveSelectedShip();
	bool IsAllShipDestroyed();
	bool IsCorrectShipsPositions();
	friend std::shared_ptr<Ship> GetSelectedShip(Field& field);
private:
	bool IsCellInsideShip(Cell& cell, Ship& ship);
	bool IsCellNearShip(Cell& cell, Ship& ship);
	bool IsCorrectShipPosition(Ship& ship);
	void CompileCells();

};
