#include <iostream>
#include <vector>
#include "Player.h"
#include "Boar.h"
#include "Goblin.h"
#include "Slime.h"

using namespace std;
//template<typename T1>
////template function, vector가 standard template library(stl)
//T1 Add(T1 Number1, T1 Number2)
//{
//	return Number1 + Number2
//}
//
//
//int main()
//{
//	int BoarCount = rand() % 5;
//	int GoblinCount = rand() % 5;
//	int SlimeCount = rand() % 5;
//
//	FPlayer* Player = new FPlayer();
//	FBoar* Boars = new FBoar[BoarCount];
//	FGoblin* Goblins = new FGoblin[GoblinCount];
//	FSlime* Slimes = new FSlime[SlimeCount];
//
//	cout << Player->HP << endl;
//	cout << Player->MP << endl;
//	Player->Move();
//	Player->Attack();
//
//	for (int i = 0; i < BoarCount; i++)
//	{
//		Boars[i].HP;
//		Boars[i].MP;
//		Boars[i].Move();
//		Boars[i].Attack();
//	}
//
//	for (int i = 0; i < GoblinCount; i++)
//	{
//		Goblins[i].HP;
//		Goblins[i].MP;
//		Goblins[i].Move();
//		Goblins[i].Attack();
//	}
//
//	for (int i = 0; i < SlimeCount; i++)
//	{
//		Slimes[i].HP;
//		Slimes[i].MP;
//		Slimes[i].Move();
//		Slimes[i].Attack();
//	}
//
//
//
//	delete Player;
//	delete[] Boars;
//	delete[] Goblins;
//	delete[] Slimes;
//
//	return 0;
//}

//int main()
//{
//	//동적배열
//	vector<int> IntArray;
//
//	IntArray.push_back(1);
//	IntArray.push_back(2);
//	IntArray.push_back(3);
//	IntArray.push_back(4);
//	IntArray.push_back(5);
//
//	sort(IntArray)
//
//	for (int i = 0; i < IntArray.size(); i++)
//	{
//		cout << IntArray[i] << endl;
//	}
// 
// return 0;
//}

int main()
{
	srand((unsigned int)(time(nullptr)));

	FGoblin();

	vector<FGoblin*> GoblinList;

	for (int i = 0; i < (rand() % 5) + 1; i++)
	{
		GoblinList.push_back(new FGoblin);
	}

	//cout << GoblinList.size() << endl;

	for (int i = 0; i < GoblinList.size(); i++)
	{
		cout << GoblinList[i]->HP << " / " << GoblinList[i]->MP << endl;
	}

	for (int i = 0; i < GoblinList.size(); i++)
	{
		delete GoblinList[i];
	}

	GoblinList.clear();

	return 0;
}