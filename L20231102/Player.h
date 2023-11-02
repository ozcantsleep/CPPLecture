#pragma once


//define
class FPlayer
{
public:
	//생성자(클래스명과 같아야함), Constructor(FPlayer는 만들지 않아도 Default Constructor다.)
	FPlayer();
	//파괴자, Destructor
	~FPlayer();
	//member variable, property
	int HP = 100;
	int MP = 50;

	//member function, method
	void Attack();
	void Move();
};