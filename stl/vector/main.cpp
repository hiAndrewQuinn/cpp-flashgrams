#include <vector>
#include <iostream>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    v.push_back(6); // Adds 6 to the end
    for (int i : v) {
        std::cout << i << " ";
    }
}

