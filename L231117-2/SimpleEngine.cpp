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
	SDL_Init(SDL_INIT_EVERYTHING);
	MyWindow = SDL_CreateWindow("Hello World", 100, 100, 800, 600, SDL_WINDOW_VULKAN);
	MyRenderer = SDL_CreateRenderer(MyWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_TARGETTEXTURE);
	Init();
}

SimpleEngine::~SimpleEngine()
{
	Term();
	SDL_DestroyRenderer(MyRenderer);
	SDL_DestroyWindow(MyWindow);
	SDL_Quit();
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
		DeltaSeconds = SDL_GetTicks64() - LastTime;
		LastTime = SDL_GetTicks64();
		//SDL_PollEvent(&MyEvent);
		
		Input();

		switch (MyEvent.type)
		{
		case SDL_QUIT:
			IsRunning = false;
			break;
		case SDL_KEYDOWN:
			if (MyEvent.key.keysym.sym == SDLK_ESCAPE)
			{
				IsRunning = false;
			}
			break;
		}
		Tick();
		//Clear Screen
		//system("cls");
		SDL_SetRenderDrawColor(GEngine->MyRenderer, 0, 0, 0, 0);
		SDL_RenderClear(GEngine->MyRenderer);
		Render();
		SDL_RenderPresent(GEngine->MyRenderer);
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
	Term();
	Init();

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
	GetWorld()->SpawnActor(GameMode);
	GameState = new AGameState();
	GetWorld()->SpawnActor(GameState);

}

void SimpleEngine::Input()
{
	//KeyCode = MyEvent.key.keysym.sym;
	SDL_PollEvent(&MyEvent);
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

//void SimpleEngine::SDL_RenderSetScale(float ScaleX, float ScaleY)
//{
//
//}