#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string arr;
	cin >> arr;
	long counter=0;
	for(int i=0; i<arr.size()-1; i++)
		if(arr.at(i)==arr.at(i+1))
			counter++;
	cout << counter;
	return 0;
}