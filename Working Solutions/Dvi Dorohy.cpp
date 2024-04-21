#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long N;
	cin >> N;
	long Array[N][4];
	for(long i=0; i<N; i++)
	{
		for(int j=0; j<4; j++)
		{
			cin >> Array[i][j];
		}
	}
	long sum = 0;
	for(long i=0; i<N; i++)
	{
		sum += sqrt(pow(abs(Array[i][2]-Array[i][0]), 2)+pow(abs(Array[i][3]-Array[i][1]), 2));
	}
	cout << sum;
	return 0;
}