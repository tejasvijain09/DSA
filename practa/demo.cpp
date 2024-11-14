#include <iostream>
#include <vector>

int main() {
    // Initialize a vector with some values
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Loop through the vector and print each element
    for (int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << " ";
    }

    return 0;
}
