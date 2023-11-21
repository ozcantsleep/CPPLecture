#pragma once
#include "Actor.h"
class APlayer :
    public AActor
{
public:
    APlayer();
    APlayer(int NewX, int NewY, char NewShape = 'P', int NewSortOrder = 1500)
    {
        Shape = NewShape;
        SetX(NewX);
        SetY(NewY);
        SortOrder = NewSortOrder;
    }
    virtual ~APlayer();

    virtual void Tick(int KeyCode) override;
};

