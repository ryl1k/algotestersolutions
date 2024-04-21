#include <iostream>

using namespace std;

int main() 
{
	int N; 
	int M;
	cin >> N >> M;

	long arr[N];
	for(int i=0; i<N; i++)
	{
		cin >> arr[i];
	}

	double low = 0;
	double high = 0;
	for(int i=0; i<N; i++)
	{
		if(arr[i]>high)
		{
			high = arr[i];
		}
	}

	double correctness = 0.00001;
	int counter;
	double result=0;
	while(high-low >= correctness)
	{
		counter = 0;
		double center = (high+low)/2;
		for(int i=0; i<N; i++)
		{
			counter += arr[i]/center;
		}
		if(counter >= M)
		{
			low = center;
			result = center;
		}
		if(counter < M)
		{
			high=center;
		}
	};
	
	cout << result;
	return 0;
}
