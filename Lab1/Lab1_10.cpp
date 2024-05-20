// Lab 1_10

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
    int number, originalNumber, remainder, result = 0, digits = 0;
    cout << "Enter number : ";
    cin >> number;
    originalNumber = number;
    while (originalNumber != 0) {
        originalNumber /= 10;
        digits += 1;
    }
    originalNumber = number;
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, digits);
        originalNumber /= 10;
    }
    if (result == number) {
        cout << number << " is an Armstrong number." << endl << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl << endl;
    }

    return 0;
}