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
	int* P = nullptr; // *은 주소값을 지정해주는 것, &은 주소값을 표현하는 것.
	P = &A;
	char C = 'A';
	char* D = &C; // char는 문자열인데 포인터 호환이 좋지 않다. 보통은 string으로 쓴다.
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
	delete[] Number; // new를 쓰면 꼭 delete를 해줘야함. Number는 for로 배열을 만들었으므로 delete에 []를 붙여준다.


	return 0;
}