#include <iostream>

using namespace std;

int main() 
{
	int N;
	cin >> N;

	long cats[N];
	for(int i=0; i<N; i++)
	{
		cin >> cats[i];
	}

	long min = cats[0];
	long max = cats[0];
	for(int i=0; i<N; i++)
	{
		if(cats[i] < min)
		{
			min = cats[i];
		}
		if(cats[i] > max)
		{
			max = cats[i];
		}
	}

	cout << max-min;
	getchar();
	getchar();
	return 0;
}
