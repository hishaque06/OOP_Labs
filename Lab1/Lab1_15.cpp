// Lab 1_15

#include <iostream>
using namespace std;

int main() {
    cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
    int number, reverse = 0;
    cout << "Enter a two-digit integer : ";
    cin >> number;
    reverse = (number % 10) * 10;
    reverse += (number / 10);
    cout << "Reversed number: " << reverse << endl << endl;
    return 0;
}