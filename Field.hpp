#pragma once
#include "Vector.hpp"
#include "Cell.hpp"
#include "Ship.hpp"
#include <vector>
class Field
{
	public:
		int size;
		bool isGot;
		std::vector<Cell*> cells;
		std::vector<Ship*> ships;

	private:
		int m_aliveShipCount;
		Ship* m_selectedShip;

	public:
		Field(int size);

		void AddShip(Ship& ship);
		void MoveSelectedShip(Vector position);
		void RotateSelectedShip();
		void Shot(Vector position);
		Ship* GetShipOnPosition(Vector position);
		Cell& GetCellOnPosition(Vector position);
		void SetSelectedShip(Ship& ship);
		void RemoveSelectedShip();
		bool IsAllShipDestroyed();
		bool IsCorrectShipsPositions();

	private:
		bool IsCellInsideShip(Cell& cell, Ship& ship);
		bool IsCellNearShip(Cell& cell, Ship& ship);
		bool IsCorrectShipPosition(Ship& ship);
		void CompileCells();

};

