#include <iostream>

using namespace std;

int main()
{
	long L;
	long W;
	long U;
	long D;
	cin >> L >> W >> U >> D;

	if(L > W || L > U+D)
		cout << "Forget about the cocktails, man!";
	else
		cout << "Three times Sex on the Beach, please!";
	
	return 0;
}
