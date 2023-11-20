#include "GrandChild.h"
#include <iostream>

using namespace std;

FGrandChild::FGrandChild()
{
	cout << "FGrandChild Constructor" << endl;
}

FGrandChild::~FGrandChild()
{
	cout << "FGrandChild Destructor" << endl;
}

void FGrandChild::WhoamI()
{
	cout << "GrandChild" << endl;
}

void FGrandChild::Playground()
{
}
