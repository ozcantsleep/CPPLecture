#pragma once
#include "Actor.h"
class AGoal :
    public AActor
{
public:
    AGoal();
    AGoal(int NewX, int NewY, char Shape = 'G');
    virtual ~AGoal();
};

