#pragma once
#include "Actor.h"
class AGoal :
    public AActor
{
public:
    AGoal();
    AGoal(int NewX, int NewY, char NewShape = 'G', int NewSortOrder = 1300, SDL_Color NewColor = SDL_Color{ 100, 0, 150, 0 });
    virtual ~AGoal();
};

