// Lab 1_4

#include <iostream>
using namespace std;
int main()
{
    cout << "Name : Hafsa Ishaque Shaikh" << endl << "Roll No. : SE-072" << "\n\n";
    int n1, n2, n3, max;
    cout << "Enter first number : ";
    cin >> n1;
    cout << "Enter second number : ";
    cin >> n2;
    cout << "Enter third number : ";
    cin >> n3;
    if (n1 >= n2) {
        if (n1 >= n3) {
            cout << "Greatest number is " << n1;
        }
        else {
            cout << "Greatest number is " << n3;
        }
    }
    else {
        if (n2 >= n3) {
            cout << "Greatest number is " << n2;
        }
        else {
            cout << "Greatest number is " << n3;
        }
    }
    cout << endl << endl;
    return 0;
}