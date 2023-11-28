#pragma once
#include "Actor.h"

class AMonster :
    public AActor
{
public:
    AMonster();
    AMonster(int NewX, int NewY, char NewShape = 'M', int NewSortOrder = 1400);
    virtual ~AMonster();

    virtual void Tick() override;
    bool IsCollide(int NewX, int NewY);
};

enum class EMonsterDirection
{
    Left = 0,
    Right = 1,
    Up = 2,
    Down = 3
};