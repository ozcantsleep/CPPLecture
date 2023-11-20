#include "Child.h"
#include <iostream>

using namespace std;

FChild::FChild()
{
	cout << "FChild Constructor" << endl;
}

FChild::~FChild()
{
	cout << "FChild Destructor" << endl;
}

void FChild::WhoamI()
{
	cout << "Child" << endl;
}
