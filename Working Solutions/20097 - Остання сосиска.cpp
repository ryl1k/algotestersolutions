#include <iostream>
#define PI 3.14159265

using namespace std;

int main()
{
	int R;
	int H;
	cin >> R >> H;

	H=H-2*R;
	double volumeCylinder = R*R*PI*H;
	double volumeBall = (R*R*R*PI*4)/3;
	double areaCylinder = 2*PI*R*H;
	double areaBall = 4*PI*R*R;
	
	printf("%.7f %.7f", volumeCylinder+volumeBall, areaCylinder+areaBall);
	return 0;
}
