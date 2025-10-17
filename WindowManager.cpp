#include "WindowManager.hpp"
#include <iostream>

void WindowManager::DrawField(Field& field)
{
	std::cout << "Поле отрисовано" << std::endl;
}
Vector WindowManager::GetClickPosition()
{
	return Vector(0, 0);
}

