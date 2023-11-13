#include "Boar.h"
#include <iostream>

using namespace std;

FBoar::FBoar()
{
	HP = 500;
	//Inventory.clear();
	cout << "¸äµÅÁö »ý¼ºµÊ" << endl;
}

FBoar::~FBoar()
{
	HP = 0;
	//Inventory.clear();
	cout << "¸äµÅÁö ÆÄ±«µÊ" << endl;
}
