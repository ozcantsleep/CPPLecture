#pragma once
#include "Actor.h"

class AMonster :
    public AActor
{
public:
    AMonster();
    AMonster(int NewX, int NewY, char Shape = 'M');
    virtual ~AMonster();
};

