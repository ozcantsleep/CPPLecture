#pragma once
#include "Actor.h"
class AGoal :
    public AActor
{
public:
    AGoal();
    AGoal(int NewX, int NewY, char NewShape = 'G', int NewSortOrder = 1300)
    {
        Shape = NewShape;
        SetX(NewX);
        SetY(NewY);
        SortOrder = NewSortOrder;
    }
    virtual ~AGoal();
};

