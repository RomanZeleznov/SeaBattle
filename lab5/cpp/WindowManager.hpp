#pragma once
#include "Field.hpp"
#include "Vector.hpp"
class WindowManager
{
public:
	static void DrawField(Field& field);
	static Vector GetClickPosition();
};
