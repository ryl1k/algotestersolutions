#include <iostream>

using namespace std;

int main() 
{
	int N;
	int M;
	cin >> N >> M;

	N*=M;
	if(N%2 == 0)
		cout << "Dragon";
	else
		cout << "Imp";

	return 0;
}