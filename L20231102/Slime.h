#pragma once
class FSlime
{
public:
	FSlime();
	~FSlime();
	int HP = 1000;
	int MP = 500;

	void Attack();
	void Move();
};