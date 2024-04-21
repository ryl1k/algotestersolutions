#include <iostream>

using namespace std;

int main() 
{
	long N;
	cin >> N;

	int arr[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
	int counter=0;
	
	for(int i=0; i<9; i++)
	{
		counter+=N/arr[i];
		N%=arr[i];
	}
	cout << counter;
	return 0;
}
