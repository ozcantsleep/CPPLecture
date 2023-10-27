#include <iostream>

using namespace std;

//C++ 클래스 설계
class Image 
{

};

int Sum(int A, int B)
{
	return A + B;
}

int main()
{
	int A = 0;
	int B = 0;

	cin >> A;
	cin >> B;
	cout << Sum(A, B);

	return 0;
}