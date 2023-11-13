#pragma once
class FCharacter
{
public:
	FCharacter();
	~FCharacter();

	void Move();

	int GetHP()
	{
		return HP;
	}

	void SetHP(int InNewHP)
	{
		if (HP >= 0)
		{
			HP = InNewHP;
		}
	}
protected:
	int HP;
};

/*
public: 상속가능 / 접근가능
protected: 상속불가 / 접근불가
private: 상속불가 / 접근불가
*/