// Lab 2_6

#include <iostream>
using namespace std;

int main() {
    cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
    char operation;
    float num1, num2, result;
    cout << "Simple Menu-Driven Calculator" << endl << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << endl << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl << endl;
    cout << "Enter your choice (1-4): ";
    cin >> operation;
    switch (operation) {
        case '1':
            result = num1 + num2;
            cout << "Sum : " << result << endl << endl;
            break;
        case '2':
            result = num1 - num2;
            cout << "Difference : " << result << endl << endl;
            break;
        case '3':
            result = num1 * num2;
            cout << "Product : " << result << endl << endl;
            break;
        case '4':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl << endl;
            } else {
                cout << "Error! Division by zero is not allowed." << endl << endl;
            }
            break;
        default:
            cout << "Invalid choice! Please enter a number between 1 and 4." << endl << endl;
    }

    return 0;
}