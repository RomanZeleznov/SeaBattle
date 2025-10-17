#pragma once
#include "Vector.hpp"
#include "Cell.hpp"
#include "Ship.hpp"
#include <vector>
class Field
{
	private:
		int m_size;
		bool m_isGot;
		std::vector<Cell*> m_cells;
		std::vector<Ship*> m_ships;
		int m_aliveShipCount;
		Ship* m_selectedShip;

	public:
		Field(int size);
		int GetSize();
		bool GetIsGot();
		std::vector<Cell*> GetCells();
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

