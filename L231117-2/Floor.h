#pragma once
#include "Actor.h"
class AFloor :
    public AActor
{
public:
    AFloor();
    AFloor(int NewX, int NewY, char NewShape, int NewSortOrder)
    {
        Shape = NewShape;
        SetX(NewX);
        SetY(NewY);
        SortOrder = NewSortOrder;
    }
    virtual ~AFloor();
};

