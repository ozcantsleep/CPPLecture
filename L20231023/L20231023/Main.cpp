#include <iostream>

using namespace std;

/*int main()
{
	int A = 0;
	float F = 0;
	char C = 0;

	// �� ������ + - * / %�� ������ڷ� ��� ������ ���� �����Ѵ�

	return 0;
}*/

int main()
{
	int PlayerX;
	int PlayerY;
	char PlayerShape = 'P';

	int Map[10][10] = { 0, };

	/*for (int i = 0; i < 10; ++i)
		{
			cout << Map[0][i]; // Map[0][i]�� 0�� �ٲ㼭 10���� ����� ���� �ڷᰡ ��µȴ�
		}
	cout << endl;*/

	for (int j = 0; j < 10; ++j)
	{
		for (int i = 0; i < 10; ++i)
		{
			cout << Map[j][i];
		}
		cout << endl;
	}

	return 0;
}