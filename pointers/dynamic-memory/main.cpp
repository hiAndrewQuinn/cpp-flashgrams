#include <iostream>

int main() {
    int *ptr = new int(5); // Dynamically allocate an integer

    std::cout << "Value of dynamically allocated int: " << *ptr << std::endl;

    delete ptr; // Free the allocated memory

    return 0;
}

