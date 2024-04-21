#include <iostream>

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

int main(void)
{
	int N;
	int K;
	cin>> N >> K;

	int sweets[N];
	for(int i=0; i<N; i++)
	{
		cin>> sweets[i];
	}

	quickSort(sweets, 0, N-1);

	
	for(int i=0; i<N; i++)
	{
		int counter=0;
		int flag = sweets[i];
		for(int j=i; j<N; j++)
		{
			if(sweets[j]==flag)
			{
				counter++;
			}
			else
			{
				break;
			}
		}
		if(counter>=K)
		{
			for(int j=0; j<N; j++)
			{
				cout<<sweets[j];
				cout<<" ";
			}
			return 0;
		}
	}
	cout<<"Oh sh*t";
}
