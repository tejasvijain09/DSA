// Rotate array by one 
#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &arr) {
    if (arr.empty()) {
        return;
        } // Check if the array is empty

    int lastElement = arr.back(); // Use back() to get the last element

    // Shift all elements one position to the right
    for (int i = arr.size() - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = lastElement; // Place the last element at the start
}

int main() {
    vector<int> arr;

    // Add elements using push_back
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    
    rotate(arr);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
