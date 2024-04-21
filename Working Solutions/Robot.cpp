#include <iostream>

using namespace std;

int main()
{
	string commands;
	cin >> commands;

	int sx;
	int sy;
	cin >> sx >> sy;

	int countX=0;
	int countY=0;
	for(int i=0; i<commands.size(); i++)
	{
		if(commands.at(i)=='R')
			countX++;
		else
			countY++;
	}
	if(countX >= sx && countY >=sy)
		cout << "YES";
	else 
		cout << "NO";
	
	return 0;
}