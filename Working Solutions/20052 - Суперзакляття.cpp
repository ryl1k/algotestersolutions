#include <iostream>

using namespace std;

int main()
{
	int k;
	int counter=0;
	cin >> k;
	string spell;
	cin >> spell;
	for(int i=0; i<k-1; i++)
	{
		if((spell[i]=='7')&&(spell[i+1]=='4'))
		{
			counter++;
		}
	}
	cout << counter;
}
