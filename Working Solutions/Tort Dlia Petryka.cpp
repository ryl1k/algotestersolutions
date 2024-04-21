#include <iostream>
#include <cmath>
#define PI 3.141592

using namespace std;

int main() 
{
	int N;
	int R;
	cin >> N >> R;

	double pl = PI*R*R;
	pl/=N;
	double res;
	res = sqrt(pl/PI);
	cout << res;
	
	return 0;
}
