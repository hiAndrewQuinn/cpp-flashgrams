#include <iostream>
#include <utility> // For std::pair
#include <string>

int main() {
    // Creating pairs
    std::pair<int, char> p1(10, 'a');
    std::pair<std::string, double> p2("Example", 3.14);

    // Accessing elements
    std::cout << "p1: " << p1.first << ", " << p1.second << std::endl;

    // Using pair with auto
    auto p3 = std::make_pair(20, 'b');

    // Modifying pair elements
    p3.first = 30;
    p3.second = 'c';

    // Printing the modified pair
    std::cout << "p3: " << p3.first << ", " << p3.second << std::endl;

    // Using pairs in more complex structures
    std::pair<std::string, std::pair<int, char>> p4("Nested", std::make_pair(50, 'd'));

    // Accessing nested pair elements
    std::cout << "p4: " << p4.first << ", (" << p4.second.first << ", " << p4.second.second << ")" << std::endl;

    return 0;
}

