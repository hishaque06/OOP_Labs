// Lab 2_7

#include <iostream>
using namespace std;

int main() {
    cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
    int terms;
    cout << "Enter number of terms : ";
    cin >> terms;
    cout << endl << "FIBONACCI SEQUENCE UPTO " << terms << " TERMS" << endl << endl;
    int first = 0;
    int second = 1;
    int sum;
    for (int i = 0; i < terms; i++)
    {
        cout << first << " ";
        sum = first + second;
        first = second;
        second = sum;
    }
    cout << endl << endl;
    return 0;
}