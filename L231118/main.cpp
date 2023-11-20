#include <iostream>
#include <vector>
#include "Parent.h"
#include "Child.h" // Parent Class "Parent.h"
#include "GrandChild.h" // Parent Class "Class.h"

using namespace std;

int main()
{
	//FParent* P = new FParent();
	//
	//cout << P << endl;


	vector<FParent*> Family;
	Family.push_back(new FChild());
	Family.push_back(new FGrandChild());
	
	for (int i = 0; i < Family.size(); i++)
	{
		FGrandChild* GrandChild = dynamic_cast<FGrandChild*>(Family[i]);
		if (GrandChild != nullptr)
		{
			GrandChild->Playground();
		}
	}
		
	for (int i = 0; i < Family.size(); i++)
	{
		delete Family[i];
	}




	return 0;
}
