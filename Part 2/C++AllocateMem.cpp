#include <iostream>

void allocateAndFree() {
    int* numbers = new int[5]{1, 2, 3, 4, 5}; // Manual allocation
    for (int i = 0; i < 5; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    delete[] numbers; // Manual deallocation
    numbers = nullptr; // Avoid dangling pointer
}

int main() {
    allocateAndFree();
    return 0;
}
