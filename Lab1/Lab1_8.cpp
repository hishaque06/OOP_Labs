// Lab 1_8

#include <iostream>
using namespace std;

int main() {
    cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
    float Principal_Amount, Rate_Of_Interest, Time_Period, Simple_Interest;
    cout << "Enter principal amount: ";
    cin >> Principal_Amount;
    cout << "Enter rate of interest (in percentage): ";
    cin >> Rate_Of_Interest;
    cout << "Enter time period (in years): ";
    cin >> Time_Period;
    Simple_Interest = (Principal_Amount * Rate_Of_Interest * Time_Period) / 100;
    cout << "\nSimple Interest: " << Simple_Interest << endl << endl;
    return 0;
}