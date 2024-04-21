#include <iostream>

using namespace std;

int main() 
{
	int N;
	cin >> N;
	long res=0;
	if(N==1)
	{
		cout << 1;
		return 0;
	}
	do
	{
		res+=N*N;
		N--;
	}
	while(N!=0);

	cout << res;
	return 0;
}
