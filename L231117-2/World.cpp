#include "World.h"
#include "Actor.h"
#include "Wall.h"
#include <iostream>
#include <algorithm>

using namespace std;

UWorld::UWorld()
{
}

UWorld::~UWorld()
{
	for (auto Actor : Actors)
	{
		delete Actor;
	}
	Actors.clear();
}

void UWorld::SpawnActor(AActor* NewActor)
{
	if (NewActor)
	{
		Actors.push_back(NewActor);
	}
}

void UWorld::Tick()
{
	for (auto Actor : Actors)
	{
		Actor->Tick();
	}
}

void UWorld::Render()
{
	for (auto Actor : Actors)
	{
		Actor->Render();
	}
}

void UWorld::SortRenderOrder()
{
	sort(Actors.begin(), Actors.end(), [](const AActor* LHS, const AActor* RHS)
		{
			return LHS->SortOrder < RHS->SortOrder;
		});
}