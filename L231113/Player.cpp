#include "Player.h"
#include <iostream>

using namespace std;

FPlayer::FPlayer()
{
	HP = 1000;
	//Inventory.clear();
	cout << "플레이어 생성됨" << endl;
}

FPlayer::~FPlayer()
{
	HP = 0;
	//Inventory.clear();
	cout << "플레이어 파괴됨" << endl;
}

void FPlayer::Move()
{
	cout << "플레이어 움직임" << endl;
}
