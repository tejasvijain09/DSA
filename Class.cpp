#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    int year;

    // Function to display car details
    void displayDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }

    // Function to input car details from the user
    void inputDetails() {
        cout << "Enter brand: ";
        getline(cin, brand);  // Takes input for the brand

        cout << "Enter year: ";
        cin >> year;          // Takes input for the year
    }
};

int main() {
    Car myCar;

    // Input details for the car
    myCar.inputDetails();

    // Display the details of the car
    myCar.displayDetails();

    return 0;
}
