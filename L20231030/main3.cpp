#include <iostream>

using namespace std;

// int main()
// {
// 	int Number = 42;
// 	int Number2 = 42;
// 	int* ptr = &Number;
// 	int* ptr2 = &Number2;
// 
// 	cout << ptr << endl;
// 	cout << ptr2 << endl;
// 
// 	return 0;
// }

class UTexture
{

};

int Change(int* PA)
{
	*PA = *PA + 1;

	return 0;
}

int main()
{
	int A = 23;
	int Z = 45;
	int* P = nullptr; // *�� �ּҰ��� �������ִ� ��, &�� �ּҰ��� ǥ���ϴ� ��.
	P = &A;
	char C = 'A';
	char* D = &C; // char�� ���ڿ��ε� ������ ȣȯ�� ���� �ʴ�. ������ string���� ����.
	float F = 10.1f;
	float* G = &F;

	float* pF = new float; // new float
	*pF = 20.2f;

	int Size = 100;
	int* Number = new int[Size];
	for (int i = 0; i < Size; i++)
	{
		Number[i] = i;
		cout << Number[i] << endl;
	}

	UTexture* Texture = new UTexture;

	Change(&Z);

	cout << endl;
	cout << A << endl;
	cout << P << endl;
	cout << &A << endl;
	cout << *P << endl;
	cout << endl;
	cout << C << endl;
	cout << D << endl;
	cout << &C << endl;
	cout << *D << endl;
	cout << endl;
	cout << F << endl;
	cout << G << endl;
	cout << &F << endl;
	cout << *G << endl;
	cout << *pF << endl;
	cout << endl;
	cout << Z << endl;

	delete pF;
	delete[] Number; // new�� ���� �� delete�� �������. Number�� for�� �迭�� ��������Ƿ� delete�� []�� �ٿ��ش�.


	return 0;
}