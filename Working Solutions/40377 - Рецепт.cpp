#include <iostream>
#include <stdio.h>

using namespace std;

void quickSort(double arr[], int left, int right) 
{
    int i = left, j = right;
    double temp;
    double pivot = arr[(left + right) / 2];
 
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
    	quickSort(arr, left, j);
    if (i < right)
    	quickSort(arr, i, right);
 }

int main()
{
	int N;
	cin >> N;
	double Array[N];
	for(int i=0; i<N; i++)
		cin >> Array[i];
	quickSort(Array, 0, N-1);
	for(int i=0; i<N-1; i++)
	{
		Array[i+1]=(Array[i]+Array[i+1])/2;
	}
	printf("%.8f", Array[N-1]);
	return 0;
}
