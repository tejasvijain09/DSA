#include<iostream>
#include<vector>
using namespace std;

// Function to merge two halves into a sorted array
void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    // Merging the two halves into temp
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy remaining elements from the left half, if any
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy remaining elements from the right half, if any
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy the sorted elements back into the original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

// Recursive function to implement merge sort
void mergeSort(vector<int>& arr, int left, int right) {
    if (left >= right)
        return; // Base case: when the array is of size 1

    int mid = (left + right) / 2;

    // Recursively sort the first half
    mergeSort(arr, left, mid);

    // Recursively sort the second half
    mergeSort(arr, mid + 1, right);

    // Merge the two sorted halves
    merge(arr, left, mid, right);
}

int main() {
vector<int> arr;

    // Adding elements using push_back
    arr.push_back(12);
    arr.push_back(11);
    arr.push_back(13);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);

    // Displaying the elements
    cout << "Array elements are: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Perform merge sort on the array
    mergeSort(arr, 0, arr.size() - 1);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
