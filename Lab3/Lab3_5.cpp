// Lab 3_5

#include <iostream>
using namespace std;
int main()
{
    cout << "Name : Hafsa Ishaque Shaikh" << endl;
    cout << "Roll No. : SE-072" << "\n\n";
    struct Employee
    {
        int employeeID;
        string name;
        string dept;
        int salary;
    };
    Employee employees[5];
    int sumSalary = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "For Employee " << i+1 << endl;
        cout << "Enter ID : ";
        cin >> employees[i].employeeID;
        cout << "Enter Name : ";
        cin >> employees[i].name;
        cout << "Enter Department : ";
        cin >> employees[i].dept;
        cout << "Enter Salary : ";
        cin >> employees[i].salary;
        cout << endl;

        sumSalary += employees[i].salary;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "Details of Employee " << i+1 << endl;
        cout << "ID : " << employees[i].employeeID << endl;
        cout << "Name : " << employees[i].name << endl;
        cout << "DEpartment : " << employees[i].dept << endl;
        cout << "Salary : " << employees[i].salary << endl << endl;
    }
    float average = sumSalary / 5;
    cout << "Average Salary : " << average;
    cout << endl << endl;
    return 0;
}