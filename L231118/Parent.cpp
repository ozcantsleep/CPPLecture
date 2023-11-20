#include "Parent.h"
#include <iostream>

using namespace std;

FParent::FParent()
{
	cout << "FParent Constructor" << endl;
}

FParent::~FParent()
{

	cout << "FParent Destructor" << endl;
}

void FParent::Spend()
{
}

int FParent::GetMoney()
{
	return Money;
}

void FParent::WhoamI()
{
	cout << "Parent" << endl;
}
