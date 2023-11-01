#include <iostream>

using namespace std;

int main()
{
	int A = 0; // 자동 변수, 자동으로 생성되고 자동으로 지워지기 때문.
	int* P = new int[100]; // new를 쓰면 heap으로.
	P = new int; // heap의 주소값


	if (P)
	{
		for (int i = 0; i < 100; i++)
		{
			*(P + i) = 0;
			P[i] = 0;
		}
		// *P = 0;
		// P[0] = 0;
		// *(P + 1) = 0;
		// P[1] = 0;
	}

	delete[] P; // heap에 만들어진 new를 지우고
	P = nullptr; // 지정된 곳을 해제하기 위해 nullptr.

	return 0;
}