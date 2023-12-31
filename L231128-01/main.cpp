#include <iostream>
#include "SDL.h"
#pragma comment(lib, "SDL2")
#pragma comment(lib, "SDL2main")

int SDL_main(int argc, char* argv[])
{
	srand((unsigned int)(time(nullptr))); // 랜덤

	SDL_Init(SDL_INIT_EVERYTHING); // 초기화

	SDL_Window* MyWindow = SDL_CreateWindow("HelloWorld", 400, 300, 800, 600, SDL_WINDOW_VULKAN); // 윈도우 만들기
	SDL_Renderer* MyRenderer = SDL_CreateRenderer(MyWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_TARGETTEXTURE); // 렌더러 만들기
	Uint64 DeltaSeconds = 0;
	Uint64 LastTime = 0;
	SDL_Event MyEvent;

	bool IsRunning = true;

	while (IsRunning) // messaage loop
	{
		DeltaSeconds = SDL_GetTicks64() - LastTime;
		LastTime = SDL_GetTicks64();
		SDL_PollEvent(&MyEvent);
		std::cout << DeltaSeconds << std::endl;

		switch (MyEvent.type)
		{
		case SDL_QUIT:
			IsRunning = false;
			break;
		case SDL_KEYDOWN:
			if (MyEvent.key.keysym.sym == SDLK_END)
			{
				IsRunning = false;
			}
			break;
		}

		SDL_SetRenderDrawColor(MyRenderer, 0xff, 0xff, 0xff, 0x00);
		SDL_RenderClear(MyRenderer);

		for (int i = 0; i < 100000; i++)
		{
			int X = rand() % 700;
			int Y = rand() % 500;
			int W = rand() % 90 + 10;
			int H = rand() % 90 + 10;
			int R = rand() % 256;
			int G = rand() % 256;
			int B = rand() % 256;
			int A = rand() % 256;
			SDL_Rect MyRect = { X, Y, W, H };
			SDL_SetRenderDrawColor(MyRenderer, R, G, B, A);
			SDL_RenderFillRect(MyRenderer, &MyRect);
		}

		SDL_RenderPresent(MyRenderer);
	}
	SDL_Quit();

	return 0;
}