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
public: ��Ӱ��� / ���ٰ���
protected: ��ӺҰ� / ���ٺҰ�
private: ��ӺҰ� / ���ٺҰ�
*/