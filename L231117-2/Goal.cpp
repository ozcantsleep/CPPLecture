#include "Goal.h"

AGoal::AGoal()
{
	X = 0;
	Y = 0;
	Shape = 'G';
	SortOrder = 200;
}

AGoal::AGoal(int NewX, int NewY, char NewShape, int NewSortOrder, SDL_Color NewColor)
{
	Shape = NewShape;
	SetX(NewX);
	SetY(NewY);
	SortOrder = NewSortOrder;
	Color = NewColor;
	LoadBMP("Data/Goal.bmp");
}

AGoal::~AGoal()
{
}
