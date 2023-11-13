#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "Character.h"
#include "Player.h"
#include "Goblin.h"
#include "Boar.h"
#include "Slime.h"

using namespace std;

int main()
{
	vector<int> IntArray;

	IntArray.push_back(1);
	IntArray.push_back(2);
	IntArray.push_back(3);
	IntArray.erase(find(IntArray.begin(), IntArray.end(), 2));
	for (auto Value1 : IntArray)
	{
		cout << Value1 << endl;
	}

	list<int> IntList;
	IntList.push_back(1);
	IntList.push_back(2);
	IntList.push_back(3);
	for (auto Value2 : IntList)
	{
		cout << Value2 << endl;
	}

	//FPlayer Players[10];
	vector<FPlayer*> Players;

	//FPlayer* MyPlayer = new FPlayer();
	//MyPlayer->Move();
	//MyPlayer->SetHP(MyPlayer -> GetHP());
	//delete MyPlayer;
	//
	//vector<FGoblin*> = Goblins;
	//Goblins.push_back(new FGoblin());
	//Goblins.push_back(new FGoblin());
	//Goblins.push_back(new FGoblin());
	//
	//vector<FBoar*> = Boars;
	//Boars.push_back(new FBoar());
	//Boars.push_back(new FBoar());
	//Boars.push_back(new FBoar());
	//
	//vector<FSlime*> = Slimes;
	//Slimes.push_back(new FSlime());
	//Slimes.push_back(new FSlime());
	//Slimes.push_back(new FSlime());


	return 0;
}