// Lab 1_14

#include <iostream>
using namespace std;

int main() {
    cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
    float fahrenheit, celsius;
    cout << "Enter temperature in Fahrenheit : ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5 / 9;
    cout << "Temperature in Celsius : " << celsius << endl << endl;
    return 0;
}