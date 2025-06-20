#include "Span.hpp"

Span::Span() {
    size = 0;
}

Span::Span(unsigned int n)
{
    size = n;
}

Span::~Span()
{
    // Destructor does not need to do anything special
}

Span::Span(const Span &other)
{
    size = other.size;
    elements = other.elements;
}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        size = other.size;
        elements = other.elements;
    }
    return *this;
}

void Span::addNumber(int number)
{
    if (elements.size() >= size)
    {
        throw std::out_of_range("Span is full");
    }
    elements.push_back(number);
}

int Span::shortestSpan() const
{
    if (elements.size() < 2) {
        throw std::logic_error("Not enough elements to find a span");
    }
    
    std::vector<int> sortedElements = elements;
    std::sort(sortedElements.begin(), sortedElements.end());
    
    int minSpan = std::numeric_limits<int>::max();
    for (size_t i = 1; i < sortedElements.size(); ++i) {
        int span = sortedElements[i] - sortedElements[i - 1];
        if (span < minSpan) {
            minSpan = span;
        }
    }
    
    return minSpan;
}

int Span::longestSpan() const {
    if (elements.size() < 2) {
        throw std::logic_error("Not enough elements to find a span");
    }
    int maxElement = *std::max_element(elements.begin(), elements.end());
    int minElement = *std::min_element(elements.begin(), elements.end());
    return maxElement - minElement;
}

void Span::test(size_t SIZE) {
    // This function can be used for testing purposes
    // I need to fill the elements vector with 100 random numbers
    Span sp(SIZE);
    std::cout << "Testing Span with " << SIZE << " elements." << std::endl;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, SIZE * 3); 
    for (size_t i = 0; i < SIZE; ++i) {
        int randNumber = distrib(gen);
        sp.addNumber(randNumber);
    }
    std::cout << "Shortest distance: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest distance: " << sp.longestSpan() << std::endl;
}