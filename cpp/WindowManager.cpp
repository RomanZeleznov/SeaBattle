#include "WindowManager.hpp"
#include <iostream>

void WindowManager::DrawField(Field& field)
{
	std::cout << "Field has been drawn" << std::endl;
}
Vector WindowManager::GetClickPosition()
{
	return Vector(0, 0);
}
