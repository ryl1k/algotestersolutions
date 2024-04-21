#include <iostream>

#include <cmath>

using namespace std;

void quickSort(double distance[], int left, int right) 
{
    int i = left, j = right;
    double temp;
    double pivot = distance[(left + right) / 2];
 
    while (i <= j) 
    {
        while (distance[i] < pivot)
        i++;
        while (distance[j] > pivot)
        j--;
        if (i <= j) 
        {
            temp = distance[i];
            distance[i] = distance[j];
            distance[j] = temp;
            i++;
            j--;
        }
    }
 
    if (left < j)
    {
    	quickSort(distance, left, j);
    }
    if (i < right)
    {
   		quickSort(distance, i, right);
   	}
}

int main()
{
	long Xmain;
	long Ymain;
	cin >> Xmain >> Ymain;

	int N;
	int K;
	cin >> N >> K;

	long x[N];
	long y[N];
	double distance[N];
	for(int i=0; i<N; i++)
	{
		cin >> x[i] >> y[i];
	}

	for(int i=0; i<N; i++)
	{
		distance[i] = sqrt(pow(Xmain-x[i], 2) + pow(Ymain-y[i], 2));
	}

	quickSort(distance, 0, N-1);

	cout << distance[K-1];
	return 0;
}
