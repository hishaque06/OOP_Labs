// Lab 1_12

#include <iostream>
using namespace std;

int main() {
    cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
    int time, hours, minutes, seconds;
    cout << "Enter time in seconds: ";
    cin >> time;
    hours = time / 3600;
    seconds = time % 3600;
    minutes = seconds / 60;
    seconds %= 60;
    cout << "Hours in Time : " << hours << endl;
    cout << "Minutes in Time : " << minutes << endl; 
    cout << "Seconds in Time : " << seconds << endl << endl;
    return 0;
}