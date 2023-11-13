#pragma once
#include <vector>
#include "Character.h"

class FPlayer : public FCharacter
{
	//public은 다른 개발자도 쓰라고 만드는 기능
public:
	FPlayer();
	~FPlayer();

	void Move();

	//private은 만든 사람만 쓰라고 만드는 기능(캡슐화 encapsulation)
//private:
//	int HP;
	//std::vector<int> Inventory;
};

