#pragma once
class AActor
{
public:
	AActor();
	AActor(int NewX, int NewY);
	virtual ~AActor();

	virtual void BeginPlay();
	virtual void Tick(int KeyCode);
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

protected:
	int X;
	int Y;
	int SortOrder;
	char Shape;
};

