#include <iostream>
#define RED 10 // 디파인은 앞 문자를 변환해준다(대문자만 되는듯), 고로 RED는 10

using namespace std;

int main() // entry point
{
	//Week01
	int a = 65;
	char b = 65;
	char c = 'A';
	int MyMoney = 0; // 0은 초기화고 오류를 피하기 위해 꼭 쓴다
	int Multiply = 2;
	//Week02
	int AppleColor = 0; // 사과의 색 Red=0, Green=1, Blue=2
	int AppleShape = 1; // 사과의 모양 Rectengle=0, Circle=1, Triangle=2
	float Pie = 3.141592; // float은 소수 다섯번째까지만 나온다
	int Korean1 = 99;
	int English1 = 207;
	int French1 = 302;
	int Total = (Korean1 + English1) + French1; // 수학과 같이 괄호를 쓰면 괄호를 먼저 계산한다
	float Average = (float)Total / 3.0f; // float을 쓰고 싶으면 (float)과 숫자 뒤 f를 붙여주면 된다, f 안쓰면 double 씀
	
	//Week02(조건문)
	int UserID[4] = { 0,1,2,3 }; // []는 배열(Array)이고 여러개를 쓸수 있게 저장해준다.
	for (int i = 0; i < 4; i++) // i를 몇까지 쓸지 정한다, 0-3이므로 4로 지정
		{
			UserID[i] = 10;
		}

	//Week01
	MyMoney = -10000; // 위에 0을 지정했더라도 이후에 숫자를 적으면 위에 숫자를 무시하고 새로 덮어쓴다, 고로 cout에 -10000

	//Week01(cout)
	cout << "Hello, World!" << endl;
	cout << 1 << endl; // 숫자는 "" 필요 없음
	cout << a << endl; // int는 정수형, 65가 그대로 나온다
	cout << b << endl; // char는 자료형, 아스키 코드를 쓰므로 65는 A가 나온다
	cout << c << endl; // ''를 쓰면 번역된 아스키 코드를 적어놓는 것이기 때문에 A가 그대로 나온다
	cout << MyMoney << endl; // 언리얼에서는 파스칼 케이싱을 이용해 오브젝트가 명확히 무엇을 표현할지 적는다
	cout << MyMoney * Multiply << endl;
	//Week02(cout)
	cout << Pie << endl; // 고로 cout을 하면 소수 다섯째까지만 나온다
	cout << &Pie << endl; // Pie가 저장된 메모리 위치가 나온다
	cout << Average << endl;
	cout << (int)(Average + 0.5f) << endl; // (int)를 쓰면 반올림을 해준다, 여기도 오류를 최소화하기 위해 'Average + 0.5f'에 괄호를 했다
	cout << UserID[0] << endl;

	return 0;
}