#include "Wall.h"
#include <iostream>

using namespace std;

AWall::AWall()
{
	X = 0;
	Y = 0;
	Shape = '*';
}

AWall::AWall(int NewX, int NewY, char NewShape)
{
	Shape = NewShape;
	SetX(NewX);
	SetY(NewY);
}

AWall::~AWall()
{
}
