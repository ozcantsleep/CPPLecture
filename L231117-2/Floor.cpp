#include "Floor.h"

AFloor::AFloor()
{
	X = 0;
	Y = 0;
	Shape = ' ';
}

AFloor::AFloor(int NewX, int NewY, char NewShape)
{
	Shape = ' ';
	SetX(NewX);
	SetY(NewY);
}

AFloor::~AFloor()
{
}