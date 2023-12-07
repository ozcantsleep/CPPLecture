#include "GameMode.h"
#include "Player.h"
#include "Goal.h"
#include "SimpleEngine.h"
#include "World.h"
#include <iostream>
#include "GameState.h"

using namespace std;

	

AGameMode::AGameMode()
{
	SortOrder = 1000;
}

AGameMode::~AGameMode()
{
}

void AGameMode::Tick()
{
	AActor::Tick();
	
	if (SimpleEngine::GetGameState()->IsNextLevel)
	{
		cout << "Complete" << endl;
		//GEngine->Stop();
		//GEngine->LoadLevel("Data/Level02.smap");
	}

	if (SimpleEngine::GetGameState()->IsGameOver)
	{
		cout << "GameOver" << endl;
		GEngine->Stop();
	}
}