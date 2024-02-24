#include <iostream>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer to the first element of arr

    std::cout << "Elements of the array: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << *(ptr + i) << " "; // Accessing array elements with pointer arithmetic
    }

    return 0;
}

