#include <iostream>

using namespace std;

int A(int A)
{
	A = 10;

	return A;
}

int main()
{
	int A();
	int A = 23;

	cout << A() << endl;
	cout << A << endl;

	return 0;
}