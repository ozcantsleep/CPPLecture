#include "Slime.h"
#include <iostream>

using namespace std;

void FSlime::Move()
{
	cout << "슬라임이 움직임" << endl;
}

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
