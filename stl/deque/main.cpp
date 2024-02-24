#include <deque>
#include <iostream>

int main() {
    std::deque<int> d = {2, 3, 4};
    d.push_front(1); // Adds 1 at the beginning
    d.push_back(5);  // Adds 5 at the end
    for (int i : d) {
        std::cout << i << " ";
    }
}

