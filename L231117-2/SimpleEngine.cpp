#include "SimpleEngine.h"
#include "World.h"
#include <conio.h>
#include "Player.h"
#include "Wall.h"
#include <iostream>
#include "Monster.h"
#include "Goal.h"
#include "Floor.h"
#include "GameMode.h"
#include "GameState.h"
#include <fstream>

using namespace std;

SimpleEngine* SimpleEngine::Instance = nullptr;
int SimpleEngine::KeyCode = 0;

SimpleEngine::SimpleEngine()
{
	GameMode = nullptr;
	GameState = nullptr;
	Init();
}

SimpleEngine::~SimpleEngine()
{
	Term();
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
		Input();
		Tick();
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
	GameMode = nullptr;
	GameState = nullptr;
	IsRunning = false;
	delete World;
}

void SimpleEngine::LoadLevel(string Filename)
{
	//Save : Memory -> Disk SERIALIZE

	//Load : Disk -> Memory DESERIALIZE
	//GetWorld()->SpawnActor(new APlayer(1, 1));

	//string Map[10] =
	//{
	//	"**********",
	//	"*P       *",
	//	"*        *",
	//	"*        *",
	//	"*    M   *",
	//	"*        *",
	//	"*        *",
	//	"*        *",
	//	"*       G*",
	//	"**********",
	//};

	int Y = 0;

	string line;
	ifstream file("Data/level01.smap");
	if (file.is_open())
	{
		while (getline(file, line))
		{
			for (int X = 0; X < line.length(); X++)
			{
				LoadActor(X, Y, line[X]);
			}
			Y++;
		}
		file.close();
	}
	else
	{
		Stop();
	}

	

	GetWorld()->SortRenderOrder();

	GameMode = new AGameMode();
	GetWorld()->SpawnActor(new AGameMode());
	GameState = new AGameState();
	GetWorld()->SpawnActor(new AGameState());

}

int SimpleEngine::Input()
{
	KeyCode = _getch();
	return KeyCode;
}

void SimpleEngine::Tick()
{
	GetWorld()->Tick();
}

void SimpleEngine::Render()
{
	GetWorld()->Render();
}

void SimpleEngine::LoadActor(int NewX, int NewY, char Actor)
{
	if (Actor == '*')
	{
		//Wall
		GetWorld()->SpawnActor(new AWall(NewX, NewY));
	}
	else if (Actor == 'P')
	{
		//Player
		GetWorld()->SpawnActor(new APlayer(NewX, NewY));
	}
	else if (Actor == 'M')
	{
		//Monster
		GetWorld()->SpawnActor(new AMonster(NewX, NewY));
	}
	else if (Actor == 'G')
	{
		//Goal
		GetWorld()->SpawnActor(new AGoal(NewX, NewY));
	}
	else if (Actor == ' ')
	{
		//Floor
	}
	//Floor
	GetWorld()->SpawnActor(new AFloor(NewX, NewY));
}
