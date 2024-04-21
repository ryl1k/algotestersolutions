#include <iostream>

using namespace std;

int main()
{
	int a=0;
	int temp;
	for(int i=0; i<4; i++)
	{
		cin >> temp;
		a+=temp;
	}
	cout << a;
	return 0;
}
