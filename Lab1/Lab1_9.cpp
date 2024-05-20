// Lab 1_9

#include <iostream>
using namespace std;

int main() {
    cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl << endl;
    } else {
        cout << year << " is not a leap year." << endl << endl;
    }

    return 0;
}