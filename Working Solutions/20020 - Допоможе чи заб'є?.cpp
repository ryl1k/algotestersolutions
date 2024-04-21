#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int k;
    string toilet;
    cin >> k;
    cin >> toilet;
    
    int counter = 0;
    for(int i=0; i < toilet.length()-5; i++)
    {
        if(toilet[i]=='T' && toilet[i+1]=='O' &&
            toilet[i+2]=='I' && toilet[i+3]=='L' &&
            toilet[i+4]=='E' && toilet[i+5]=='T')
        {
            counter++;
            i+=5;
        }
    }

    if(counter>=k)
        cout<<"YES";
    else
        cout<<"NO";
    
    cin>>toilet;  
}
