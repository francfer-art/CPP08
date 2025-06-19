#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include "easyfind.hpp"

int main() {
    try {
        // Vector
        std::vector<int> vec;
        vec.push_back(10);
        vec.push_back(20);
        vec.push_back(30);
        vec.push_back(40);
        std::vector<int>::iterator itVec = EasyFind::easyfind(vec, 30);
        std::cout << "Found in vector: " << *itVec << std::endl;

        // List
        std::list<int> lst;
        lst.push_back(5);
        lst.push_back(15);
        lst.push_back(25);
        lst.push_back(35);
        std::list<int>::iterator itList = EasyFind::easyfind(lst, 25);
        std::cout << "Found in list: " << *itList << std::endl;

        // Deque
        std::deque<int> deq;
        deq.push_back(100);
        deq.push_back(200);
        deq.push_back(300);
        std::deque<int>::iterator itDeq = EasyFind::easyfind(deq, 100);
        std::cout << "Found in deque: " << *itDeq << std::endl;

        // Buscar un valor inexistente
        EasyFind::easyfind(vec, 99);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
