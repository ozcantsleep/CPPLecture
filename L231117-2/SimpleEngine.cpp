#include "SimpleEngine.h"
#include "World.h"
#include <conio.h>
#include "Player.h"
#include "Wall.h"
#include <iostream>
#include "Monster.h"
#include "Goal.h"
#include "Floor.h"


using namespace std;

SimpleEngine::SimpleEngine()
{
	Init();
}

SimpleEngine::~SimpleEngine()
{
	Stop();
}

void SimpleEngine::Init()
{
	IsRunning = true;
	World = new UWorld();
}

void SimpleEngine::Run()
{
	while (IsRunning)
	{
		int KeyCode = Input();
		Tick(KeyCode);
		system("cls");
		Render();
	}
}

void SimpleEngine::Stop()
{
	IsRunning = false;
}

void SimpleEngine::Term()
{
	IsRunning = false;
	delete World;
}

void SimpleEngine::LoadLevel(std::string Filename)
{
	//Save : Memory -> Disk SERIALIZE

	//Load : Disk -> Memory DESERIALIZE
	GetWorld()->SpawnActor(new APlayer(1, 1));

	string Map[10] =
	{
		"**********",
		"*P       *",
		"*        *",
		"*        *",
		"*    M   *",
		"*        *",
		"*        *",
		"*        *",
		"*       G*",
		"**********",
	};
	for (int Y = 0; Y < 10; Y++)
	{
		for (int X = 0; X < 10; X++)
		{
			if (Map[Y][X] == '*')
			{
				//Wall
				GetWorld()->SpawnActor(new AWall(X, Y));
			}
			else if (Map[Y][X] == 'P')
			{
				//Player
				GetWorld()->SpawnActor(new APlayer(X, Y));
			}
			else if (Map[Y][X] == 'M')
			{
				//Monster
				GetWorld()->SpawnActor(new AMonster(X, Y));
			}
			else if (Map[Y][X] == 'G')
			{
				//Goal
				GetWorld()->SpawnActor(new AGoal(X, Y));
			}
			else if (Map[Y][X] == ' ')
			{
				//GetWorld()->SpawnActor(new AFloor(X, Y));
				//Floor
			}
			//Floor
		}
	}

}

int SimpleEngine::Input()
{
	int KeyCode = _getch();
	return KeyCode;
}

void SimpleEngine::Tick(int KeyCode)
{
	GetWorld()->Tick(KeyCode);
}

void SimpleEngine::Render()
{
	GetWorld()->Render();
}
