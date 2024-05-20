// // Lab 3_1

#include <iostream>
using namespace std;
int main()
{
    cout << "Name : Hafsa Ishaque Shaikh" << endl << "Roll No. : SE-072" << "\n\n";
    struct Person
    {
        string name;
        int age;
    };
    Person Person1;
    cout << "Enter name of Person1 : ";
    cin >> Person1.name;
    cout << "Enter age of Person1 : ";
    cin >> Person1.age;    
    cout << endl << "Details of Person1" << endl;
    cout << endl << "Name : " << Person1.name;
    cout << endl << "Age : " << Person1.age << endl;
    cout << endl << endl;
    return 0;
}