#include <iostream>

using namespace std;

int main()
{
	int* PA = new int[10];

	for (int i = 0; i < 10; i++)
	{
		PA[i] - 0;
	}

	*PA = 1;
	*(PA + 1) = 2;
	PA[2] = 3;

	//new´Â delete
	//new[]´Â delete[]
	delete[] PA;

	cout << PA << endl;

	return 0;
}