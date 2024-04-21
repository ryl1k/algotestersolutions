#include <iostream>
#include <cmath>

using namespace std;

long long Simplification(long long a, long long b);

int main() 
{
  long long pointX1, pointY1, pointX2, pointY2, pointA1, pointB1, pointA2, pointB2,
            first_denominator, second_denominator;

  cin >> pointX1 >> pointY1;
  cin >> pointX2 >> pointY2;
  cin >> pointA1 >> pointB1;
  cin >> pointA2 >> pointB2;

  long long pointX21 = pointX2 - pointX1;
  long long pointY21 = pointY2 - pointY1;
  long long pointA21 = pointA2 - pointA1;
  long long pointB21 = pointB2 - pointB1;
  
  long long first_C = pointX1*pointY21 - pointY1*pointX21;
  long long second_C = pointA1*pointB21 - pointB1*pointA21;
  long long determinant = pointY21*(-pointA21) + pointX21*pointB21;
  long long coefficient = (determinant > 0) ? 1 : -1;
  long long main_X = first_C*(-pointA21) + second_C*pointX21;
  long long main_Y = pointY21*second_C - first_C*pointB21;
  long long c = Simplification(abs(main_X), abs(determinant));
  long long d = Simplification(abs(main_Y), abs(determinant));

  if(c!=0) first_denominator=c; else first_denominator=1;
  if(d!=0) second_denominator=d; else second_denominator=1;

  cout << (coefficient*(main_X / first_denominator)) << "/" << ((abs(determinant)) / first_denominator) << " ";
  cout << (coefficient*(main_Y / second_denominator)) << "/" << ((abs(determinant)) / second_denominator);
  return 0;
}

long long Simplification(long long a, long long b) {
  while ((a != 0) && (b != 0)) {
    if(a>b)
      a = a % b;
    else
      b = b % a;
  }
  return (a + b);
}