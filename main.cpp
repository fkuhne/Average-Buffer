#include "AverageBuffer.h"
#include <iostream>

using namespace std;

AverageBuffer b1(3);

int main()
{
  unsigned count = 0;
  double newValue = 0;
  while(count++ < 20)
  {
    if(count == 10) {b1.clear(); newValue=0;}
    else if(count>10) {newValue = 5;}
    else newValue+=0.3;

    b1.update(newValue);

    cout << "count = " << count << ", currentAverage = " << b1.getCurrentAverage() << " (" << flush;
    b1.printBuffer();
    cout << ")\n" << endl;
  }
}
