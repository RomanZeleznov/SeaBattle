#include "GameManager.hpp"
#include "PlayerHuman.hpp"
#include "PlayerComputer.hpp"
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Rus");
	
	std::cout << "Статическая инициализация объектов:\n" << std::endl;
	Vector vector(0, 0);
	Cell cell(vector);

	std::cout << "----------------------------------------------------------" << std::endl;
	std::cout << "\nДинамическая инициализация объектов:\n" << std::endl;
	Vector* position = new Vector(0, 0);
	Vector* direction = new Vector(1, 0);
	Ship* ship = new Ship(*position, *direction, 1);
	
	delete position;
	delete direction;
	delete ship;

	std::cout << "----------------------------------------------------------" << std::endl;
	std::cout << "\nРабота по ссылке:\n" << std::endl;
	
	Vector v1(0, 0);
	Vector& v2 = v1;
	
	std::cout << "V1: X = " << v1.x << " Y = " << v1.y << std::endl;
	std::cout << "V2: X = " << v2.x << " Y = " << v2.y << std::endl;
	
	v2.x = 3;
	v2.y = 4; 
	std::cout << "Изменение v2:" << std::endl;
	std::cout << "V1: X = " << v1.x << " Y = " << v1.y << std::endl;
	std::cout << "V2: X = " << v2.x << " Y = " << v2.y << std::endl;

	v1.x = 0;
	v1.y = 0;
	
	std::cout << "Изменение v1:" << std::endl;
	std::cout << "V1: X = " << v1.x << " Y = " << v1.y << std::endl;
	std::cout << "V2: X = " << v2.x << " Y = " << v2.y << std::endl;


	std::cout << "----------------------------------------------------------" << std::endl;
	std::cout << "\nРабота по указателю:\n" << std::endl;
	Vector* vec1 = new Vector(2, 3);
	Vector* vec2 = vec1;

	std::cout << "Vec1: X = " << vec1->x << " Y = " << vec1->y << std::endl;
	std::cout << "Vec2: X = " << vec2->x << " Y = " << vec2->y << std::endl;
	
	vec2->x = 7;
	vec2->y = 1;

	std::cout << "Изменение vec1:" << std::endl;
	std::cout << "Vec1: X = " << vec1->x << " Y = " << vec1->y << std::endl;
	std::cout << "Vec2: X = " << vec2->x << " Y = " << vec2->y << std::endl;
	
	vec1->x = -1;
	vec1->y = -2;
	
	std::cout << "Изменение vec2:" << std::endl;
	std::cout << "Vec1: X = " << vec1->x << " Y = " << vec1->y << std::endl;
	std::cout << "Vec2: X = " << vec2->x << " Y = " << vec2->y << std::endl;


	std::cout << "----------------------------------------------------------" << std::endl;
	std::cout << "\nДинамический массив объектов класса:\n" << std::endl;
	Vector* vectors{ new Vector[3]};
	vectors[0].x = 0;
	vectors[0].y = 0;
	vectors[1].x = 1;
	vectors[1].y = 1;
	vectors[2].x = 2;
	vectors[2].y = 2;

	std::cout << "Vectors[0]: X = " << vectors[0].x << " Y = " << vectors[0].y << std::endl;
	std::cout << "Vectors[1]: X = " << vectors[1].x << " Y = " << vectors[1].y << std::endl;
	std::cout << "Vectors[2]: X = " << vectors[2].x << " Y = " << vectors[2].y << std::endl;

	delete[]vectors;


	std::cout << "----------------------------------------------------------" << std::endl;
	std::cout << "\nМассив динамических объектов класса:\n" << std::endl;
	Vector* vecPointers[] = { new Vector(1,2), new Vector(2,3), new Vector(3,4) };

	std::cout << "VecPointers[0]: X = " << vecPointers[0]->x << " Y = " << vecPointers[0]->y << std::endl;
	std::cout << "VecPointers[1]: X = " << vecPointers[1]->x << " Y = " << vecPointers[1]->y << std::endl;
	std::cout << "VecPointers[2]: X = " << vecPointers[2]->x << " Y = " << vecPointers[2]->y << std::endl;

	delete vecPointers[0];
	delete vecPointers[1];
	delete vecPointers[2];
	std::cout << "----------------------------------------------------------" << std::endl;
	
}

