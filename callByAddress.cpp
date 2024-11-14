#include <iostream>

// Function that takes an integer pointer as a parameter
void modifyValue(int* ptr) {
    *ptr = 100; // Modify the value at the memory location pointed to by ptr
}

int main() {
    int num = 10;

    std::cout << "Before function call, num = " << num << std::endl;

    // Call the function by passing the address of num
    modifyValue(&num);

    std::cout << "After function call, num = " << num << std::endl;

    return 0;
}
