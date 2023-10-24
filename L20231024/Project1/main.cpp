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
	bool bIsRunning = true;

	while (bIsRunning)
	{
		int Key = _getch();

		system("cls");

		if (Key == 'a' || Key == 'A')
		{
			cout << "Left" << endl;
			PlayerX--;
		}
		else if (Key == 'w' || Key == 'W')
		{
			cout << "Up" << endl;
			PlayerY--;
		}
		else if (Key == 'd' || Key == 'D')
		{
			cout << "Right" << endl;
			PlayerX++;
		}
		else if (Key == 's' || Key == 'S')
		{
			cout << "Down" << endl;
			PlayerY++;
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