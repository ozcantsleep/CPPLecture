#include "Slime.h"
#include <iostream>

using namespace std;

FSlime::FSlime()
{
	HP = 5000;
	//Inventory.clear();
	cout << "������ ������" << endl;
}

FSlime::~FSlime()
{
	HP = 0;
	//Inventory.clear();
	cout << "������ �ı���" << endl;
}

void FSlime::Move()
{
	//�θ��� Move()�� ������ ���� �ʹٸ�
	//FCharacter::Move();
	//�� �����ָ� ��
	cout << "�������� ������" << endl;
}