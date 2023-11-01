#include <iostream>
#include <vector>

using namespace std;

class Pixel
{
public:
	int X[3] = {1, 2, 3};
	int Y;
	int R;
	int G;
	int B;

	void PutPixel();
	void GetPixel();
};


int main()
{
	int N = 20000;

	vector<Pixel*> Image;

	for (int i = 0; i < N; i++)
	{
		Image.push_back(new Pixel);
	}

	return 0;
}