#include "AverageBuffer.h"
#include <iostream>

using namespace std;

AverageBuffer::AverageBuffer(const unsigned bufferSize)
{
  this->_bufferSize = bufferSize;
  this->_currentIndex = 0;
  this->_currentAverage = 0;
  this->_buffer.resize(this->_bufferSize, 0);
}

double AverageBuffer::update(const double &newValue)
{
  if(this->_currentIndex == this->_bufferSize)
    this->_currentIndex = 0;

  this->_buffer[this->_currentIndex++] = newValue;
  double currentAverage = 0;

  for(unsigned i=0; i<this->_bufferSize; i++)
    currentAverage += this->_buffer[i]/this->_bufferSize;

  this->_currentAverage = currentAverage;

  return currentAverage;
}

void AverageBuffer::printBuffer(void)
{
  for(auto it : this->_buffer)
    cout << it << " " << flush;
}

double AverageBuffer::getCurrentAverage(void)
{
  return this->_currentAverage;
}

void AverageBuffer::clear(void)
{
  this->_currentIndex = 0;
  this->_currentAverage = 0;
  for(auto &it : this->_buffer) it = 0;
}
