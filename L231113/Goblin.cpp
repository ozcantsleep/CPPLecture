#include "Goblin.h"
#include <iostream>

using namespace std;

FGoblin::FGoblin()
{
	HP = 250;
	//Inventory.clear();
	cout << "��� ������" << endl;
}

FGoblin::~FGoblin()
{
	HP = 0;
	//Inventory.clear();
	cout << "��� �ı���" << endl;
}