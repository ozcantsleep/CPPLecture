#include <iostream>
#define RED 10 // �������� �� ���ڸ� ��ȯ���ش�(�빮�ڸ� �Ǵµ�), ��� RED�� 10

using namespace std;

int main() // entry point
{
	//Week01
	int a = 65;
	char b = 65;
	char c = 'A';
	int MyMoney = 0; // 0�� �ʱ�ȭ�� ������ ���ϱ� ���� �� ����
	int Multiply = 2;
	//Week02
	int AppleColor = 0; // ����� �� Red=0, Green=1, Blue=2
	int AppleShape = 1; // ����� ��� Rectengle=0, Circle=1, Triangle=2
	float Pie = 3.141592; // float�� �Ҽ� �ټ���°������ ���´�
	int Korean1 = 99;
	int English1 = 207;
	int French1 = 302;
	int Total = (Korean1 + English1) + French1; // ���а� ���� ��ȣ�� ���� ��ȣ�� ���� ����Ѵ�
	float Average = (float)Total / 3.0f; // float�� ���� ������ (float)�� ���� �� f�� �ٿ��ָ� �ȴ�, f �Ⱦ��� double ��
	
	//Week02(���ǹ�)
	int UserID[4] = { 0,1,2,3 }; // []�� �迭(Array)�̰� �������� ���� �ְ� �������ش�.
	for (int i = 0; i < 4; i++) // i�� ����� ���� ���Ѵ�, 0-3�̹Ƿ� 4�� ����
		{
			UserID[i] = 10;
		}

	//Week01
	MyMoney = -10000; // ���� 0�� �����ߴ��� ���Ŀ� ���ڸ� ������ ���� ���ڸ� �����ϰ� ���� �����, ��� cout�� -10000

	//Week01(cout)
	cout << "Hello, World!" << endl;
	cout << 1 << endl; // ���ڴ� "" �ʿ� ����
	cout << a << endl; // int�� ������, 65�� �״�� ���´�
	cout << b << endl; // char�� �ڷ���, �ƽ�Ű �ڵ带 ���Ƿ� 65�� A�� ���´�
	cout << c << endl; // ''�� ���� ������ �ƽ�Ű �ڵ带 ������� ���̱� ������ A�� �״�� ���´�
	cout << MyMoney << endl; // �𸮾󿡼��� �Ľ�Į ���̽��� �̿��� ������Ʈ�� ��Ȯ�� ������ ǥ������ ���´�
	cout << MyMoney * Multiply << endl;
	//Week02(cout)
	cout << Pie << endl; // ��� cout�� �ϸ� �Ҽ� �ټ�°������ ���´�
	cout << &Pie << endl; // Pie�� ����� �޸� ��ġ�� ���´�
	cout << Average << endl;
	cout << (int)(Average + 0.5f) << endl; // (int)�� ���� �ݿø��� ���ش�, ���⵵ ������ �ּ�ȭ�ϱ� ���� 'Average + 0.5f'�� ��ȣ�� �ߴ�
	cout << UserID[0] << endl;

	return 0;
}