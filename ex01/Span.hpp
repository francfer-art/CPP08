#ifndef SPAN__HPP
#define SPAN__HPP

#include <algorithm>
#include <iterator>
#include <vector>
#include <iostream>
#include <vector>
#include <list>
#include <deque>

class Span {
  private:
    unsigned int size;
    std::vector<int> elements;
  public:
    Span(unsigned int n);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();
    void addNumber(int number);
    int shortestSpan() const;
    int longestSpan() const;
};

#endif