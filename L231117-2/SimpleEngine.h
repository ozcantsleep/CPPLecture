#pragma once
#include <string>
#include "SDL.h"

#pragma comment(lib, "SDL2")
#pragma comment(lib, "SDL2main")

class UWorld;
class AActor;
class AGameState;
class AGameMode;

class SimpleEngine
{
private:
	SimpleEngine();

public:
	virtual ~SimpleEngine();

	void Init();
	void Run();
	void Stop();
	void Term();
	void LoadLevel(std::string Filename);

	inline UWorld* GetWorld() const 
	{ 
		return World;
	}

	static SimpleEngine* GetInstance()
	{
		if (Instance == nullptr)
		{
			Instance = new SimpleEngine();
		}
		return Instance;
	}

	static SDL_Keycode KeyCode;
	
	static AGameState* GetGameState()
	{
		return GetInstance()->GameState;
	}

	static AGameMode* GetGameMode()
	{
		return GetInstance()->GameMode;
	}
	
	//void SDL_RenderSetScale(float ScaleX, float ScaleY);
	static Uint64 GetWorldDeltaSeconds()
	{
		return GetInstance()->DeltaSeconds;
	}
	

	SDL_Window* MyWindow;
	SDL_Renderer* MyRenderer;
	SDL_Event MyEvent;
	Uint64 DeltaSeconds;
	Uint64 LastTime;


protected:
	UWorld* World;
	
	bool IsRunning;
	void Input();
	void Tick();
	void Render();

	static SimpleEngine* Instance;

	AGameMode* GameMode;
	AGameState* GameState;

	void LoadActor(int NewX, int NewY, char Actor);
};
	

#define GEngine SimpleEngine::GetInstance()