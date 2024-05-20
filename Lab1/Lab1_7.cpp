// Lab 1_7

#include <iostream>
using namespace std;

int main() {
    cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
    int number;
    int factorial = 1;
    cout << "Enter a number: ";
    cin >> number;
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl << endl;
    } else if (number == 0 || number == 1) {
        cout << "Factorial of " << number << " is: 1" << "\n\n";
    } else {
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << number << " : " << factorial << "\n\n";
    }
    return 0;
}