#include <iostream>

void addOne(int *p) {
    (*p)++; // Increment the value pointed to by p
}

int main() {
    int num = 5;
    addOne(&num); // Pass the address of num

    std::cout << "num after incrementing: " << num << std::endl;

    return 0;
}

