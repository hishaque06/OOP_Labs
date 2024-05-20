// Lab 2_5

#include <iostream>
using namespace std;

int main() {
    cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
    int number, multiple;
    cout << "Enter the number to generate for : ";
    cin >> number;
    cout << "Enter the number till which to generate : ";
    cin >> multiple;
    cout << endl << "MULTIPLICATION TABLE FOR " << number << endl << endl;
    for (int i = 1; i <= multiple; i++)
    {
        cout << number << " x " << i << " = " << number*i << endl;
    }
    cout << endl;
    return 0;
}