#include <iostream>

using namespace std;

int main() 
{
	int a;
	int b;
	bool flag;
	cin >> a >> b;
	(a>b)?(flag=true):(flag=false);
	
	while(a+b>0)
	{
		if(a==0)
		{
			cout << 'G';
			b--;
			continue;
		}
		if(b==0)
		{
			cout << 'Y';
			a--;
			continue;
		}
		if(flag)
		{
			cout << 'Y' << 'G';
			a--;
			b--;
		}
		else
		{
			cout << 'G' << 'Y';
			a--;
			b--;
		}
	}





	getchar();
	getchar();
	return 0;
}
