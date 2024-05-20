// Lab 1_3

#include <iostream>
using namespace std;

int main(){
    cout << "Name : Hafsa Ishaque Shaikh" << endl << "Roll No. : SE-072" << "\n\n";
    int terms;
    int first = 0;
    int second = 1;
    int sum;
    cout << "Enter number of terms : ";
    cin >> terms;
    cout << endl << "Fibonacci Series : ";
    for (int i = 0; i < terms; i++)
    {
        sum = first + second;
        cout << first << " ";
        first = second;
        second = sum;
    }
    cout << endl << endl;
    return 0;
}