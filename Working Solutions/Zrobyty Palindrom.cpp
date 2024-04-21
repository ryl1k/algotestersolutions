#include <iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;

	long arr[26]={0};
	for(long i=0; i<s.size(); i++)
		arr[s.at(i)%26]++;

	long counter=0;
	for(int i=0; i<26; i++)
		if(arr[i]%2==1)
			counter++;

	if(counter>1)
		cout << "NO";
	else
		cout << "YES";
	
	return 0;
}