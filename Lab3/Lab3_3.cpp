// Lab 3_3

#include <iostream>
using namespace std;
int main()
{
    cout << "Name : Hafsa Ishaque Shaikh" << endl;
    cout << "Roll No. : SE-072" << "\n\n";
    struct Number
    {
        float num;
    };
    Number n1, n2;
    float temp;
    cout << "Enter first number n1 : ";
    cin >> n1.num;
    cout << "Enter second number n2 : ";
    cin >> n2.num; 
    temp = n2.num;
    n2.num = n1.num;
    n1.num = temp;
    cout << endl << "n1 After Swapping : " << n1.num << endl;
    cout << endl << "n2 After Swapping : " << n2.num << endl;
    cout << endl;
    return 0;
}