// Lab 1_11

#include <iostream>
using namespace std;

int main() {
    cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
    float num1, num2, sum, average;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    sum = num1 + num2;
    average = sum / 2;
    cout << "The sum is " << sum << endl;
    cout << "The average is " << average << endl << endl;
    return 0;
}