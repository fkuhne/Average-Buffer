#ifndef __AVERAGE_BUFFER__
#define __AVERAGE_BUFFER__

#include <vector>

class AverageBuffer {

  public:
    AverageBuffer(const unsigned bufferSize);
    double update(const double &newValue);
    void printBuffer(void);
    double getCurrentAverage(void);
    void clear(void);

  private:
    unsigned _bufferSize;
    unsigned _currentIndex;
    double _currentAverage;
    std::vector<double> _buffer;
};


#endif /* __AVERAGE_BUFFER__ */
