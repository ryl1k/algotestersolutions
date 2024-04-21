#include <iostream>
#include <string>

using namespace std;

int main() 
{
	long N;
	cin >> N;
	string arr;
	cin >> arr;

	long winK=0;
	long winV=0;

	int winsK=0;
	int winsV=0;

	for(int i=0; i<arr.size(); i++)
	{
		if(arr.at(i)=='K')
			winK++;
		else
			winV++;

		if(winK >= 11 || winV >= 11)
		{
			if(abs(winK-winV) < 2)
				continue;
			else
			{
				if(winK > winV)
					winsK++;
				else
					winsV++;
				winK=0;
				winV=0;
			}
		}
	}

	cout << winsK << ":" << winsV;
	
	if(winK != 0 || winV != 0)
	{
		cout << "\n" << winK << ":" << winV;
	}
	
	return 0;
}