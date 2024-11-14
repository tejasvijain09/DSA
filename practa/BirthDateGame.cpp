#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Predefined sets based on powers of 2
    vector<int> v1 = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
    vector<int> v2 = {2, 3, 6, 7, 10, 11, 14, 15, 18, 19, 22, 23, 26, 27, 30, 31};
    vector<int> v3 = {4, 5, 6, 7, 12, 13, 14, 15, 20, 21, 22, 23, 28, 29, 30, 31};
    vector<int> v4 = {8, 9, 10, 11, 12, 13, 14, 15, 24, 25, 26, 27, 28, 29, 30, 31};
    vector<int> v5 = {16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};

    int birthDate = 0;  // This will store the calculated birth date

    // Loop through each predefined set
    vector<vector<int>> vectors = {v1, v2, v3, v4, v5};  // All sets in one vector

    // Ask the user if their birth date is in any of these sets
    for (int i = 0; i < vectors.size(); i++) {
        cout << "Is your birth date in this set? ";
        
        // Display the current set
        for (int num : vectors[i]) {
            cout << num << " ";
        }

        cout << endl;
        cout << "Enter 1 for YES or 0 for NO: ";
        int answer;
        cin >> answer;

        // If the user says YES, add the corresponding power of 2 to birthDate
        if (answer == 1) {
            birthDate += (1 << i);  // Add the corresponding power of 2 (2^i)
        }
    }

    cout << "Your birth date is: " << birthDate << endl;

    return 0;
}
