#include "Span.hpp"

Span::Span(unsigned int n) {
    size = n;
}

Span::~Span() {
    // Destructor does not need to do anything special
}

Span::Span(const Span &other) {
    size = other.size;
    elements = other.elements;
}

Span &Span::operator=(const Span &other) {
    if (this != &other) 
    {
        size = other.size;
        elements = other.elements;
    }
    return *this;
}

void Span::addNumber(int number) {
    if (elements.size() >= size) {
        throw std::out_of_range("Span is full");
    }
    elements.push_back(number);
}

int Span::shortestSpan() const {
    if (elements.size() < 2) {
        throw std::logic_error("Not enoough elemeents to find a span")
    }
    std::vector<int> sortedElements = elements;
    std::sort(sortedElements.begin(), sortedElements.end());
    printf("Sorted elements: ");
    for (const auto &elem : sortedElements) {
        std::cout << elem << " ";
}