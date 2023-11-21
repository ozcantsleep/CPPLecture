#pragma once
#include "Actor.h"
class AWall :
    public AActor
{
public:
    AWall();
    AWall(int NewX, int NewY, char NewShape = '*', int NewSortOrder = 1200)
    {
        Shape = NewShape;
        SetX(NewX);
        SetY(NewY);
        SortOrder = NewSortOrder;
    }
    virtual ~AWall();
};

