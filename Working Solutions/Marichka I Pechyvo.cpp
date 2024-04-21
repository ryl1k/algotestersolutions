#include <iostream>

using namespace std;

int main()
{
	long p; 
	long result = 0;
	cin >> p;
	
	long int array[p];
	for(int i=0; i<p; i++)
	{
		cin >> array[i];
		result+=array[i];
	}
	result-=p;
	cout << result;
}
