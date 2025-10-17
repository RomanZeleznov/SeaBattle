#include "Vector.hpp"
#include <iostream>

Vector::Vector() : x(0), y(0)
{ }
Vector::Vector(int x, int y) : x(x), y(y)
{
	std::cout << "Vector создан" << std::endl;
}
Vector::~Vector()
{
	std::cout << "Vector уничтожен" << std::endl;
}

int Vector::SumOfSquares(Vector v1, Vector v2)
{
	std::cout << "Вычислена сумма квадратов" << std::endl;
	return 0;
}
Vector Vector::RotateAt90(Vector v)
{
	std::cout << "Вектор повернут на 90 градусов" << std::endl;
	return Vector(0, 0);
}

