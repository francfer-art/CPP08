#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iterator>

class EasyFind {
  public:
    template <typename T>
    static typename T::iterator easyfind(T& container, int value) {
        typename T::iterator it = std::find(container.begin(), container.end(), value);
        if (it == container.end()) {
            throw std::runtime_error("Value not found in the container");
        }
        return it;
    }
};

#endif