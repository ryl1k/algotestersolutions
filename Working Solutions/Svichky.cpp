#include <iostream>

using namespace std;

int main() 
{
    int N;
    int M;
	cin>>N>>M;

	double length_of_candle[M];
	for(int i=0; i<M; i++)
	{
		cin>>length_of_candle[i];
	}
    
	double low=0;
    double high=0;
    for(int i=0; i<M; i++)
    {
        if(length_of_candle[i] > high)
        {
            high = length_of_candle[i];
        }
    }
        
    double correctness=0.0000001;
    int counter;
    double result;    
    while(high - low >= correctness)
    {
    	counter=0;
        double center = (high+low)/2;
        for(int i=0; i<M; i++)
        {
            counter+=(length_of_candle[i]/center);
        }
        if(counter >= N)
        {
            low=center;
            result=center;
        }
        if(counter < N)
        {
            high=center;
        }
    }
    printf("%.7f\n", result);
}