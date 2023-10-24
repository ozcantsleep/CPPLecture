#include <iostream>

using namespace std;

int main() 
{
	int Result = 0;
	int Count = 0;
	cin >> Count;
	
	for (int i = 1; i <= 100; i++)
	{
		Result = Result + i;
	}
	cout << Result << endl;

	Result = 0;

	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 != 0)
		{
			Result = Result + i;
		}
	}
	cout << Result << endl;

	Result = 0;

	for (int j = 1; j <= 100; j++)
	{
		if (j % 2 == 0)
		{
			Result = Result + j;
		}
	}
	cout << Result << endl;

	Result = 0;

	for (int k = 1; k <= 100; k++)
	{
		if (k % 3 == 0)
		{
			Result = Result + k;
		}
	}
	cout << Result << endl;

	Result = 0;

	for (int l = 1; l <= 100; l++)
	{
		if (l % 4 == 0)
		{
			Result = Result + l;
		}
	}
	cout << Result << endl;

	Result = 0;

	for (int m = 4; m <= 100; m = m + 4)
	{
			Result = Result + m;
	}
	cout << Result << endl;

	Result = 0;

	for (int n = 0; n < Count; n++)
	{
		for (int o = 0; o < Count; o++)
		{
			cout << '*';
		}
		cout << endl;
	}

	for (int p = 0; p <= Count; p++)
	{
		for (int q = 0; q < p; q++)
		{
			cout << '*';
		}
		cout << endl;
	}

	return 0;
}

