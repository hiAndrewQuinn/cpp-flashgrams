#include <list>
#include <iostream>

int main() {
    std::list<int> l = {1, 2, 3, 4, 5};
    l.push_front(0); // Adds 0 at the beginning
    for (int i : l) {
        std::cout << i << " ";
    }
}

