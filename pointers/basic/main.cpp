#include <iostream>

int main() {
    int x = 10;
    int *ptr = &x; // Pointer to x

    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Address of x: " << &x << std::endl;
    std::cout << "Value of ptr: " << ptr << std::endl;
    std::cout << "Value pointed to by ptr: " << *ptr << std::endl;

    return 0;
}

