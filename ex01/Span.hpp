#ifndef SPAN__HPP
#define SPAN__HPP

#include <algorithm>
#include <iterator>
#include <iostream>
#include <vector>
#include <deque>
#include <random>

class Span {
  private:
    unsigned int size;
    std::vector<int> elements;
  public:
    Span();
    Span(unsigned int n);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();
    void addNumber(int number);
    int shortestSpan() const;
    int longestSpan() const;
    static void test(size_t n);
};

#endif