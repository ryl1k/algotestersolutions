#include <iostream>
#include <cmath>

using namespace std;

void quickSort(int arr[], int left, int right) 
{
    int i = left, j = right;
    int temp;
    int pivot = arr[(left + right) / 2];
 
    while (i <= j) {
        while (arr[i] < pivot)
        i++;
        while (arr[j] > pivot)
        j--;
        if (i <= j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
 
    if (left < j)
    {
    	quickSort(arr, left, j);
    }
    if (i < right)
    {
    	quickSort(arr, i, right);
    }
}

int main() 
{
	int N;
	cin >> N;

	int a[N];
	int b[N];
	int c[N];
	long sumA=0;
	long sumB=0;
	long sumC=0;
	long result=0;

	for(int i=0; i<N; i++)
	{
		cin >> a[i] >> b[i] >> c[i];
	}

	quickSort(a, 0, N-1);
	quickSort(b, 0, N-1);
	quickSort(c, 0, N-1);

	sumA = a[N/2];
	sumB = b[N/2];
	sumC = c[N/2];

	for(int i=0; i<N; i++)
	{
		result += abs(a[i]-sumA);
		result += abs(b[i]-sumB);
		result += abs(c[i]-sumC);
	}
	cout << result;
	return 0;
}
