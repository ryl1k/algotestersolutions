#include <iostream>

using namespace std;

int main()
{
	int N;
	int M;
	cin >> N >> M;

	int arr[N][M];
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<M; j++)
		{
			cin >> arr[i][j];
		}
	}

	int max[M];
	int maximum;
	long res=0;
	for(int i=0; i<M; i++)
	{
		maximum=0;
		for(int j=0; j<N; j++)
		{
			if(arr[j][i] > maximum)
				maximum = arr[j][i];
		}
		res+=maximum;
	}
	
	cout << res;
	return 0;
}
