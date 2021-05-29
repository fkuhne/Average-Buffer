#include "AverageBuffer.h"
#include <iostream>

using namespace std;

AverageBuffer b1(3);

int main()
{
  unsigned count = 0;
  double newValue = 0;
  while(count < 20)
  {
    if(count == 10) {b1.clear(); newValue=0;}
    else if(count>10) newValue = 5;

    double currentAverage = b1.update(newValue);

    cout << "(";
    b1.printBuffer();
    cout << ") --> Current average = " << currentAverage << endl;
    cout << endl;

    count++;
    newValue+=0.3;
  }
}
