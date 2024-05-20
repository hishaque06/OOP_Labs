// Lab 1_6

#include <iostream>
using namespace std;
int main()
{
    cout << "Name : Hafsa Ishaque Shaikh" << endl << "Roll No. : SE-072" << "\n\n";
    int number;
    bool isPrime = true;
    cout << "Enter number : ";
    cin >> number;
     if (number <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= number / 2; ++i) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
     if (isPrime) {
        cout << endl << number << " is a prime number.";
    } else {
        cout << endl << number << " is not a prime number.";
    }
    cout << endl << endl;
    return 0;
}