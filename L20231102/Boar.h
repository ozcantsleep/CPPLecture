#pragma once
class FBoar
{
public:
	FBoar();
	~FBoar();
	int HP = 10;
	int MP = 0;

	void Attack();
	void Move();
};