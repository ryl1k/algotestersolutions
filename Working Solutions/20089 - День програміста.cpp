#include <iostream>
#include <set>

using namespace std;

int main() 
{
    int N;
    int M;
    cin >> N >> M;
    
    string temp;
    set <string> alcogol;
    for(int i=0; i<N+M; i++)
    {
        cin >> temp;
        alcogol.insert(temp);
    }

    cout << alcogol.size();
    return 0;
}
