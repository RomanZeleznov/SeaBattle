#pragma once
class Vector
{
public:
	int x, y;

public:
	Vector();
	Vector(int x, int y);

	static int SumOfSquares(Vector v1, Vector v2);
	static Vector RotateAt90(Vector v);
};