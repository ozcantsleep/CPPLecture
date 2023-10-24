#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

/*int main()
{
	int A;
	cin >> A;

	if (A % 2 == 0)
	{
		cout << "Â¦¼ö" << endl;
	}
	else
	{
		cout << "È¦¼ö" << endl;
	}

	return 0;
}*/

int main()
{
	int PlayerX = 1;
	int PlayerY = 1;
	char PlayerShape = 'P';
	int Width = 12;
	int Height = 12;
	bool bIsRunning = true;

	while (bIsRunning)
	{
		int Key = _getch();

		system("cls");

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
			cout << endl;
		}

		if (Key == 'a' || Key == 'A')
		{
			cout << "Left" << endl;
			PlayerX--;
			if (PlayerX < 1)
			{
				cout << "Can't Move" << endl;
				PlayerX = 1;
			}
		}
		else if (Key == 'w' || Key == 'W')
		{
			cout << "Up" << endl;
			PlayerY--;
			if (PlayerY < 1)
			{
				cout << "Can't Move" << endl;
				PlayerY = 1;
			}
		}
		else if (Key == 'd' || Key == 'D')
		{
			cout << "Right" << endl;
			PlayerX++;
			if (PlayerX > 11)
			{
				cout << "Can't Move" << endl;
				PlayerX = 11;
			}
		}
		else if (Key == 's' || Key == 'S')
		{
			cout << "Down" << endl;
			PlayerY++;
			if (PlayerY > 11)
			{
				cout << "Can't Move" << endl;
				PlayerY = 11;
			}
		}
		else if (Key == 'q' || Key == 'Q')
		{
			cout << "Quit" << endl;
			bIsRunning = false;
		}

		cout << PlayerX << ", " << PlayerY << endl;

		//x, y ÁÂÇ¥ ¼³Á¤
		COORD pos = { PlayerX, PlayerY };
		//Ä¿¼­ ÀÌµ¿
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		cout << PlayerShape;
	}

	return 0;
}

/*int main()
{
	bool A = true;
	bool B = true;
	bool C = true;

	if (A && B && C)
	{
		cout << "Execute" << endl;
	}

	return 0;
}*/