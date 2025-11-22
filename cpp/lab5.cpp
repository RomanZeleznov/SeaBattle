#include "GameManager.hpp"
#include "PlayerHuman.hpp"
#include "PlayerComputer.hpp"
#include "WindowManager.hpp"
#include <iostream>

int main()
{
	Field field(2);

	std::cout << "Friendly function:" << std::endl;
	std::cout << "Is Shootable = " << IsShootable((Cell&)field.GetCells().at(0)) << std::endl;
	std::cout << "----------------" << std::endl;

	std::cout << "Strings:" << std::endl;
	std::string s1, s2;
	s1 = "first string ";
	s2 = "second string :) ";
	
	std::string concat = s1 + s2;
	std::cout << "Concatenation: " << concat << std::endl;
	int ind = concat.find("second");
	
	std::cout << "Search of 'second' : " << ind << std::endl;
	ind = concat.find(":)");
	std::cout << "Search of ':)' : " << ind << std::endl;
	s1.replace(6, 9, "smile: :)");
	s2.replace(7, 9, "smile: :(");
	
	std::cout << "Replace:" << std::endl;
	std::cout << "First string: " << s1 << std::endl;
	std::cout << "Second string: " << s2 << std::endl;
	std::cout << "----------------" << std::endl;

	Ship s( Vector(1, 1), Vector(1, 1), 1 );
	field.AddShip(s);
	field.SetSelectedShip(s);
	Field field2{ field };
	field.MoveSelectedShip(Vector(3, 3));
	Vector v1, v2;
	v1 = GetSelectedShip(field)->GetPosition();
	v2 = GetSelectedShip(field2)->GetPosition();
	std::cout << "Field 1:" << std::endl;
	std::cout << "X: " << v1.x << " Y: " << v1.y << std::endl;
	std::cout << "Field 2:" << std::endl;
	std::cout << "X: " << v2.x << " Y: " << v2.y << std::endl;
	std::cout << "----------------" << std::endl;

	std::cout << "Calling the base class constructor from a child class\n" << std::endl;
	PlayerHuman ph(field, field2, "human");
	std::cout << "----------------" << std::endl;

	std::cout << "Static field: " << std::endl;
	std::cout << "Not Clicked = " << Cell::NotClicked << std::endl;
	std::cout << "Clicked = " << Cell::Clicked << std::endl;
	std::cout << "Ship  = " << Cell::Ship << std::endl;
	std::cout << "Destroyed Ship = " << Cell::DestroyedShip << std::endl;
	std::cout << "----------------" << std::endl;

	std::cout << "Static field: " << std::endl;
	WindowManager::DrawField(field);
	std::cout << "----------------" << std::endl;

	std::cout << "Exception: " << std::endl;
	field.GetCellOnPosition(100, 100);
}
std::shared_ptr<Ship> GetSelectedShip(Field& field)
{
	return field.m_selectedShip;
}
bool IsShootable(Cell& cell)
{
	return !(cell.m_status == Cell::Clicked || cell.m_status == Cell::DestroyedShip);
}
