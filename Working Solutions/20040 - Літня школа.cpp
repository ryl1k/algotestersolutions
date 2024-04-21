#include <iostream>

using namespace std;

int main() 
{
	int N;
	int K;
	cin >> N >> K;

	if(N < K || N > 3*K)
	{
		cout << "Impossible";
		return 0;
	}

	int arr[K] = {0};
	for(int j=0; j<3; j++)
	{
		for(int i=0; i<K; i++)
		{
			arr[i]++;
			N--;
			if(N==0)
			{
				for(int k=0; k<K; k++)
				{
					cout << arr[k] << " ";
				}
				return 0;
			}
		}
	}

	return 0;
}
