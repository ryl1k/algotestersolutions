#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	long arr1[N];
	long arr2[N];
	long max1=0;
	long max2=0;
	for(int i=0; i<N; i++)
	{
		cin >> arr1[i] >> arr2[i];
		if(arr1[i] > max1)
			max1=arr1[i];
		if(arr2[i] > max2)
			max2=arr2[i];
	}
	long res=0;
	for(int i=0; i<N; i++)
	{
		res+=max1-arr1[i];
		res+=max2-arr2[i];
	}

	cout << res;
	return 0;
}