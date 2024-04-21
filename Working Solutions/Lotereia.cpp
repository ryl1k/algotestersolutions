#include <iostream>

using namespace std;

int main()
{
    int N;
    int M;
    cin >> N >> M;
    
    int arr[N][M];
    int helper[1001] = {0};
    
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            if(arr[i][j] > helper[j])
            {
                helper[j] = arr[i][j];
            }
        }
    }
    
    int min = helper[0];
    for(int i=0; i<M; ++i) 
    {
        if(helper[i] < min)
        {
            min = helper[i];    
        }    
    }
    cout << min;
    return 0;
}