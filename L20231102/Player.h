#pragma once


//define
class FPlayer
{
public:
	//������(Ŭ������� ���ƾ���), Constructor(FPlayer�� ������ �ʾƵ� Default Constructor��.)
	FPlayer();
	//�ı���, Destructor
	~FPlayer();
	//member variable, property
	int HP = 100;
	int MP = 50;

	//member function, method
	void Attack();
	void Move();
};