#include "Actor.h"
#include <windows.h>
#include <iostream>

AActor::AActor() :
	X(0), Y(0), Shape(' ')
{
	//X = 0;
	//Y = 0;
}

AActor::AActor(int NewX, int NewY)
{
	SetX(NewX);
	SetY(NewY);
}

AActor::~AActor()
{
}

void AActor::BeginPlay()
{
}

void AActor::Tick(int KeyCode)
{
}

void AActor::Render()
{
	//현재 액터 위치에 모양 출력
	COORD Cur;
	Cur.X = X;
	Cur.Y = Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);

	std::cout << Shape;
}
