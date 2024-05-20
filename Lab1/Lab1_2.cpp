// Lab 1_2

#include <iostream>
using namespace std;

int main(){
    cout << "Name : Hafsa Ishaque Shaikh" << endl << "Roll No. : SE-072" << "\n\n";
    int number;
    string result;
    cout << "Enter number : ";
    cin >> number;
    if (number%2 == 0)
    {
        result = "even.";
    } else
    {
        result = "odd.";
    }

    cout << endl << number << " is " << result << "\n\n";
    return 0;
}