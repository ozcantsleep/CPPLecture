#include "Slime.h"
#include <iostream>

using namespace std;

FSlime::FSlime()
{
	HP = 5000;
	//Inventory.clear();
	cout << "슬라임 생성됨" << endl;
}

FSlime::~FSlime()
{
	HP = 0;
	//Inventory.clear();
	cout << "슬라임 파괴됨" << endl;
}

void FSlime::Move()
{
	//부모의 Move()를 가지고 오고 싶다면
	//FCharacter::Move();
	//를 적어주면 됨
	cout << "슬라임이 움직임" << endl;
}