#include <iostream>

using namespace std;

int main()
{
	int A = 0; // �ڵ� ����, �ڵ����� �����ǰ� �ڵ����� �������� ����.
	int* P = new int[100]; // new�� ���� heap����.
	P = new int; // heap�� �ּҰ�


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

	delete[] P; // heap�� ������� new�� �����
	P = nullptr; // ������ ���� �����ϱ� ���� nullptr.

	return 0;
}