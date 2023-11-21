#include <iostream>
#include <algorithm>

using namespace std;

int Add(int A, int B)
{
	cout << A + B << endl;

	return A+B;
}

int Sub(int A, int B)
{
	cout << A - B << endl;

	return A - B;
}

int (*FunctionPointer)(int A, int B);

//callback
void Compute(int A, int B, int (*FunctionPointer)(int A, int B))
{
	FunctionPointer(A, B);
}

class StaticTest
{
public:
	StaticTest() 
	{
		Count++;
		PrintCount();
	}
	~StaticTest()
	{
		Count--;
		PrintCount();
	}

	static StaticTest* GetInstance()
	{
		if (Instance == nullptr)
		{
			Instance = new StaticTest();
		}

		return Instance;
	}

private:
	static void PrintCount()
	{
		cout << Count << endl;
	}

	static int Count;

	static StaticTest* Instance;
};

int StaticTest::Count = 0;
StaticTest* StaticTest::Instance = nullptr;


class ConstructSample
{
public:
	int Number;
	char* Name;

	ConstructSample(int NewNumber, char* NewName)
	{
		Number = NewNumber;
		Name = NewName;
	}
	//ConstructSample(const ConstructSample& Origin)
	//{
	//	cout << "Copy" << endl;
	//	Number = Origin.Number;
	//	Name = new char[1000];
	//	strcpy(Name, Origin.Name); //가리키는 곳을 지정해주는게 아니라 위치값을 복사를 한것.
	//	//Name = Origin.Name;
	//}
	virtual ~ConstructSample()
	{

	}
};

void Swap(int& A, int& B)
{
	int Temp = A;
	A = B;
	B = Temp;
}

int Descending(const void* PA, const void* PB)
{
	int A = *(int*)PA;
	int B = *(int*)PB;

	if (A < B)
	{
		return 1;
	}
	else if (A > B)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

int Ascending(const void* PA, const void* PB)
{
	int A = *(int*)PA;
	int B = *(int*)PB;

	if (A > B)
	{
		return -1;
	}
	else if (A < B)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int main()
{
	//1
	//StaticTest* P1 = StaticTest::GetInstance();
	//StaticTest* P2 = StaticTest::GetInstance();
	//
	//delete P1;
	//delete P2;

	//cout << StaticTest::Count << endl;

	//2
	//char Message[] = "JunAhn";
	//ConstructSample C1(300, Message);
	//ConstructSample C2 = C1; // ConstructSample C2 = ConstructSample(C1);
	////ConstructSample C3; 
	//
	//cout << &C1 << endl;
	//cout << &C2 << endl;
	//
	//cout << C1.Number << endl;
	//cout << C1.Name << endl;
	//C1.Number = 100; //메인에서 숫자를 지정하더라도 주소값이 바뀌지 않는다
	//Message[5] = 'Z';
	//cout << C2.Number << endl;
	//cout << C2.Name << endl;

	//3
	//int A = 10;
	//int B = 20;
	//Swap(A, B);
	//
	//cout << A << endl << B << endl;

	//4
	//Compute(10, 20, Add);
	//Compute(10, 20, Sub);
	//
	//int Number[10] = { 1, 10, 2, 3, 4, 5, 6, 7, 8, 9 };
	//qsort(Number, sizeof(Number), sizeof(int), Ascending);
	//
	//for (auto D : Number)
	//{
	//	cout << D << endl;
	//}

	//6
	FunctionPointer(10, 20);

	return 0;
}