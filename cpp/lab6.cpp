#include "GameManager.hpp"
#include "PlayerHuman.hpp"
#include "PlayerComputer.hpp"
#include "WindowManager.hpp"
#include "ArmoredShip.hpp"
#include "AmmunitionShip.hpp"
#include <iostream>

int main()
{
	
	std::cout << "Overloading a base class method:" << std::endl;

	ArmoredShip* armoredShip = new ArmoredShip(Vector(0, 0), Vector(0, 0), 2);
	armoredShip->TakeDamage(Ship::Explosive);

	Ship* s = armoredShip;
	s->TakeDamage(Ship::Explosive);
	
	AmmunitionShip* ammunitionShip = new AmmunitionShip(Vector(0, 0), Vector(0, 0), 2);
	ammunitionShip->TakeDamage(Ship::Explosive);

	std::cout << "\nVirtual functions:" << std::endl;
	
	ArmoredShip* armoredShip1 = new ArmoredShip(Vector(0, 0), Vector(0, 0), 3);
	armoredShip->TakeDamage(Ship::Explosive);
	
	Ship* ship = new Ship(Vector(0,0), Vector(0,0), 2);
	ship->SpecialAbility();

	ship = armoredShip;
	ship->SpecialAbility();
	
	std::cout << "\nClonning:" << std::endl;
	
	Field f1(2);
	f1.AddShip(*ship);
	
	Field f2{ f1, false };
	std::cout <<"Is f1 pointer equals f2 pointer? : " << (GetSelectedShip(f1) == GetSelectedShip(f2)) << std::endl;
	
	Field f3{ f1, true };
	std::cout << "Is f1 pointer equals f3 pointer? : " << (GetSelectedShip(f1) == GetSelectedShip(f3)) << std::endl;
	
	std::cout << "\nAbstract class:" << std::endl;
	
	std::vector<std::shared_ptr<Player>> players;

	std::string ph_name = std::string("player human");
	std::string pc_name = std::string("player computer");

	std::shared_ptr<Player> ph = std::make_shared<PlayerHuman>(PlayerHuman(f1, f2, ph_name));
	std::shared_ptr<Player> pc = std::make_shared<PlayerComputer>(PlayerComputer(f2, f1, pc_name));
	
	players.push_back(ph);
	players.push_back(pc);

	std::cout << "Players: " << players.at(0)->GetName() << ", " << players.at(1)->GetName() << std::endl;

	std::cout << "\nOverloading assigment operation:" << std::endl;
	Ship ship1(Vector(0, 0), Vector(0, 0), 1);
	AmmunitionShip am(Vector(0,0), Vector(0,0), 1); 
	am = ship1;
}
std::shared_ptr<Ship> GetSelectedShip(Field& field)
{
	return field.m_selectedShip;
}
bool IsShootable(Cell& cell)
{
	return !(cell.m_status == Cell::Clicked || cell.m_status == Cell::DestroyedShip);
}
