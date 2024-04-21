#include <iostream>

using namespace std;

int main()
{
	int N;
	int K;
	cin >> N >> K;

	if(N==0 || K==0)
	{
		cout << 0;
		return 0;
	}
	printf("%.6f", (1.0/N)*(1.0/K));
	return 0;
}