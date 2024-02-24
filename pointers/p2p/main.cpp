#include <iostream>

int main() {
    int value = 123;
    int *ptr = &value;
    int **ptrToPtr = &ptr;

    std::cout << "Value: " << value << std::endl;
    std::cout << "Value via ptr: " << *ptr << std::endl;
    std::cout << "Value via ptrToPtr: " << **ptrToPtr << std::endl;

    return 0;
}

