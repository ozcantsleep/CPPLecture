#include <iostream>
#include <list>

using namespace std;


class PlayerInfo
{
public :
	int X = 0;
	int Y = 0;
	int HP = 0;
	int Attack = 0;
	int Movespeed = 0;
	int Defense = 0;
	float CriticalRate = 0;

private:
	void AttackMotion();
	void DefenseMotion();
	void Run();
};

   /*typedef struct _PlayerInfo*/
// struct PlayerInfo
// {
// 	int X = 0;
// 	int Y = 0;
// 	int HP = 0;
// 	int Attack = 0;
// 	int Movespeed = 0;
// 	int Defense = 0;
// 	float CriticalRate = 0;
// 
// 	void AttackMotion();
// 	void DefenseMotion();
// 	void Run();
// } /*PlayerInfo*/;

int main()
{
	/*list<PlayerInfo*> PlayerDatas;
	PlayerDatas.push_back(new PlayerInfo);*/
	PlayerInfo* PlayerData = new PlayerInfo[10];

	PlayerData[0].X = 100;
	PlayerData[0].X = 200;
	PlayerData[1].Y = 100;
	PlayerData[2].HP = 100;
	PlayerData[3].Attack = 10;
	PlayerData[4].Movespeed = 10;

	delete[] PlayerData;

	PlayerInfo* PlayerData = new PlayerInfo;

	PlayerData->X = 100;
	PlayerData->Y = 100;
	PlayerData->HP = 100;
	PlayerData->Attack = 10;
	PlayerData->Movespeed = 10;

	delete PlayerData;


	return 0;
}