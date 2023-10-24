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
	int PlayerY = 3;
	char PlayerShape = 'P';
	int Width = 11;
	int Height = 13;
	bool bIsRunning = true;

	

	while (bIsRunning)
	{
		int Key = _getch();

		system("cls");

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
			if (PlayerY < 3)
			{
				cout << "Can't Move" << endl;
				PlayerY = 3;
			}
		}
		else if (Key == 'd' || Key == 'D')
		{
			cout << "Right" << endl;
			PlayerX++;
			if (PlayerX > 13)
			{
				cout << "Can't Move" << endl;
				PlayerX = 13;
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