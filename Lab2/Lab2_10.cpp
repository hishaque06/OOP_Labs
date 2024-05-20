// Lab 2_10

#include <iostream>
using namespace std;

int main() {
    cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
    int dayNumber;
    cout << "Enter the day number (1-7): ";
    cin >> dayNumber;
    cout << "The day is ";
    switch (dayNumber) {
        case 1:
            cout << "Sunday." << endl;
            break;
        case 2:
            cout << "Monday." << endl;
            break;
        case 3:
            cout << "Tuesday." << endl;
            break;
        case 4:
            cout << "Wednesday." << endl;
            break;
        case 5:
            cout << "Thursday." << endl;
            break;
        case 6:
            cout << "Friday." << endl;
            break;
        case 7:
            cout << "Saturday." << endl;
            break;
        default:
            cout << "Invalid day number! Please enter a number between 1 and 7." << endl;
    }
    cout << endl;
    return 0;
}