#include <iostream>

using namespace std;

// Option 1
void SwapPointer(int* A, int* B)
{
	int Temp = *A;
	*A = *B;
	*B = Temp;
}

// Option 2
// void SwapAddress(int& A, int& B)
// {
// 	int Temp = A;
// 	A = B;
// 	B = Temp;
// }

int main()
{
	int A = 10;
	int B = 20;

	// opt1
	SwapPointer(&A, &B);
	
	// opt2
	//SwapAddress(A, B);

	cout << A << endl;
	cout << B << endl;

	return 0;
}