#include <iostream>

using namespace std;

int main() 
{
	long a;
	long b;
	cin >> a >> b;
	long res;
	res = (a>b)?(a-1):(b-1);
	if(res == a || res == b)
		cout << "-1";
	else
		cout << res;
	return 0;
}
