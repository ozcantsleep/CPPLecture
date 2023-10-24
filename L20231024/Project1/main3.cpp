#include <iostream>

using namespace std;

int main() 
{
	int Width = 11;
	int Height = 13;
	
	for (int i = 0; i <= Height; i++)
	{
		for (int j = 0; j <= Width; j++)
		{
			if (i == 0 || i == Height || j == 0 || j == Width)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}

	}
}