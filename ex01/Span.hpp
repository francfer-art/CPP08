#ifndef SPAN__HPP
#define SPAN__HPP

#include <algorithm>
#include <iterator>
#include <vector>

class Span {
  private:
    unsigned int _size;
    std::vector<int> elements;
};

#endif