#include <iostream>

using namespace std;

/*int main()
{
	int A = 0;
	float F = 0;
	char C = 0;

	// 위 세개와 + - * / %의 산술연자로 결과 도출을 가장 많이한다

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
			cout << Map[0][i]; // Map[0][i]의 0만 바꿔서 10개를 만들면 위의 자료가 출력된다
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