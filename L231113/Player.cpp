#include "Player.h"
#include <iostream>

using namespace std;

FPlayer::FPlayer()
{
	HP = 1000;
	//Inventory.clear();
	cout << "�÷��̾� ������" << endl;
}

FPlayer::~FPlayer()
{
	HP = 0;
	//Inventory.clear();
	cout << "�÷��̾� �ı���" << endl;
}

void FPlayer::Move()
{
	cout << "�÷��̾� ������" << endl;
}
