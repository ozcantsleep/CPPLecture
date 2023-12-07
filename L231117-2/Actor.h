#pragma once
#include "SDL.h"
#include <iostream>

class AActor
{
public:
	AActor();
	AActor(int NewX, int NewY);
	virtual ~AActor();

	virtual void BeginPlay();
	virtual void Tick();
	virtual void Render();
	inline int GetX()  const
	{
		return X;
	}
	inline int GetY()  const
	{
		return Y;
	}
	inline void SetX(int NewX)
	{
		X = NewX;
	}
	inline void SetY(int NewY)
	{
		Y = NewY;
	}

	inline bool operator<(const AActor& RHS) const
	{
		return this->SortOrder < RHS.SortOrder;
	}

	inline bool operator>(const AActor& RHS) const
	{
		return this->SortOrder > RHS.SortOrder;
	}

	SDL_Color Color;

	int SortOrder;
	bool bCollide;

	Uint16 Size;

	SDL_Surface* MySurface;
	SDL_Texture* MyTexture;

	bool bIsSprite;
	int SpriteSizeX;
	int SpriteSizeY;
	int Direction;

	virtual void LoadBMP(std::string Filename, SDL_Color ColorKey = SDL_Color {255, 255, 255, 0});


protected:
	int X;
	int Y;
	char Shape;
};

