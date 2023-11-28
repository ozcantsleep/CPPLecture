#pragma once
#include <vector>

using namespace std;

class AActor;

class UWorld
{
public:
	UWorld();
	virtual ~UWorld();

	void SpawnActor(AActor* NewActor);
	void Tick();
	void Render();

	void SortRenderOrder();

	const vector<AActor*>& GetAllActors()
	{
		return Actors;
	}

protected:
	std::vector<AActor*> Actors;
};

