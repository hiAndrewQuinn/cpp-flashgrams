#include <set>
#include <iostream>

int main() {
    std::set<int> s = {3, 1, 4, 1, 2, 5};
    for (int i : s) {
        std::cout << i << " "; // Outputs 1 2 3 4 5 (no duplicates, sorted)
    }
}

