#include <iostream>

using namespace std;

int main() 
{
	long x;
	long y;
	long z;
	cin >> x >> y >> z;
	long max = x+y;
	long min = x-y;
	if(max>=z && z>=min)
		cout << z;
	else if(z < min)
		cout << "-1";
	else
		cout << max;
	return 0;
}
