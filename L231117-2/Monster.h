#pragma once
#include "Actor.h"

class AMonster :
    public AActor
{
public:
    AMonster();
    AMonster(int NewX, int NewY, char NewShape = 'M', int NewSortOrder = 1400)
    {
        Shape = NewShape;
        SetX(NewX);
        SetY(NewY);
        SortOrder = NewSortOrder;
    }
    virtual ~AMonster();
};

