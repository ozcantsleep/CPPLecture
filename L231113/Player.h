#pragma once
#include <vector>
#include "Character.h"

class FPlayer : public FCharacter
{
	//public�� �ٸ� �����ڵ� ����� ����� ���
public:
	FPlayer();
	~FPlayer();
	void Move() override;

	//private�� ���� ����� ����� ����� ���(ĸ��ȭ encapsulation)
//private:
//	int HP;
	//std::vector<int> Inventory;
};