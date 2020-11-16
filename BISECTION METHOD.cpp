#include <iostream>
#include <math.h>
using namespace std;
static double function(double x);
int main() {
  double intervalBegin;
  double intervalEnd;
  double middle;
  double precision;
  cout << "Enter begining of interval: ";
  cin >> intervalBegin;
  cout << "Enter end of interval: ";
  cin >> intervalEnd;
  cout << "Enter precision of method: ";
  cin >> precision;
  if (function(intervalBegin) * function(intervalEnd) > 0.0f)
  {
    cout << "Function has same signs at ends of interval";
    return -1;
  }
  while (abs(intervalBegin - intervalEnd) > precision)
  {
    middle = (intervalBegin + intervalEnd) / 2.0f;
    cout << "X: " << middle << endl;
    if (function(intervalBegin) * function(middle) < 0.0f)
    {
      intervalEnd = middle;
    }
    else
    {
      intervalBegin = middle;
    }
  }
  int a;
  cin >> a; //Wait before exiting
  return 0;
}
static double function(double x)
{ //x^2 + 2x -1
  return x*x*x*x*x*x - x - 1;
}
