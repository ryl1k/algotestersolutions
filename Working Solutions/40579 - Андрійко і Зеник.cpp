#include <iostream>

using namespace std;

int main() 
{
	int N;
	cin >> N;

	int command;
	int counter1=0;
	int counter2=0;
	for(int i=0; i<N; i++)
	{
		cin >> command;
		if(command==1)
		{
			counter1++;
		}
		if(command==2 && counter1==0)
		{
			counter2++;
		}
		if(command==2 && counter1 > 0)
		{
			counter1--;
		}
	}
	cout << counter2;
	getchar();
	getchar();
	return 0;
}
