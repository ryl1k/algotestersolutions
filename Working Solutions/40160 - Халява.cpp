#include <iostream>
#include <set>

using namespace std;

int main()
{
	int N;
	cin >> N;

	set <int> balls;
	int temp;
	for(int i=0; i<N; i++)
	{
		cin >> temp;
		balls.insert(temp);
	}

	cout << balls.size();
	return 0;
}
