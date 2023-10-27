#include <iostream>
#define MAXCOUNT	52

using namespace std;

int main()
{
	int Cards[MAXCOUNT]; // 0-51

	for (int i = 0; i < MAXCOUNT; i++)
	{
		Cards[i] = i + 1;
	}

	srand((unsigned int)time(nullptr));

	for (int j = 0; j < 10000; j++)
	{
		int First = rand() % MAXCOUNT;
		int Second = rand() % MAXCOUNT;
		int Temp = Cards[First];
		Cards[First] = Cards[Second];
		Cards[Second] = Temp;
	}

	for (int k = 0; k < 4; k++)
	{
		cout << Cards[k] << endl;
	}

	return 0;
}