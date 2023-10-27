#include <iostream>

using namespace std;

int main()
{
	int Cards[52]; // 0-51

	for (int i = 0; i < 52; i++)
	{
		Cards[i] = i + 1;
	}

	srand((unsigned int)time(nullptr));

	for (int j = 0; j < 10000; j++)
	{
		int First = rand() % 52;
		int Second = rand() % 52;
		int Temp = Cards[First];
		Cards[First] = Cards[Second];
		Cards[Second] = Temp;
	}

	int PickCards[4];
	
	for (int i = 0; i < 4; i++)
	{
		PickCards[i] = Cards[i];
	}

	int PlayerScore = 0;
	int COMScore = 0;

	for (int k = 0; k < 4; k++)
	{
		cout << Cards[k] << endl;
	}

	int CardType = Cards[1] / 13;
	for (int i = 0; i < 4; i++)
	{
		if (CardType == 0)
		{
			//Spade
			cout << "Spade ";
		}
		else if (CardType == 1)
		{
			//Clover
			cout << "Clover ";
		}
		else if (CardType == 2)
		{
			//Heart
			cout << "Heart ";
		}
		else
		{
			//Diamond
			cout << "Diamond ";
		}

		int CardNumber = Cards[0] % 13;
		if (CardNumber == 10)
		{
			//Jack
		}
		else if (CardNumber = 11)
		{
			//Queen
		}
		else if (CardNumber = 12)
		{
			//King
		}
		else if (CardNumber = 0)
		{
			//Ace
		}
		else
		{
			//Numbers
			cout << (CardNumber + 1) << endl;
		}

		if (i < 2)
		{
			//COM
			if (CardNumber >= 10)
			{
				COMScore += (CardNumber + 1);
			}
		}
		else
		{
			//Player
			if (CardNumber >= 10)
			{
				PlayerScore += (CardNumber + 1);
			}
		}
	}

	if (COMScore > 21)
	{
		cout << "Player Win!" << endl;
	}
	else if (PlayerScore > 21)
	{
		cout << "Computer Win!" << endl;
	}

	if (COMScore > PlayerScore)
	{
		cout << "Computer Win!" << endl;
	}
	else
	{
		cout << "Player Win!" << endl;
	}

	return 0;
}