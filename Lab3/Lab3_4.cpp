// Lab 3_4

#include <iostream>
using namespace std;
int main()
{
    cout << "Name : Hafsa Ishaque Shaikh" << endl;
    cout << "Roll No. : SE-072" << "\n\n";
    struct Student
    {
        int rollNumber;
        string name;
        int age;
        int marks;
    };
    Student students[3];
    string highest_name = students[0].name;
    int highest_marks = students[0].marks;
    for (int i = 0; i < 3; i++)
    {
        cout << "For Student " << i+1 << endl;
        cout << "Enter Roll Number : ";
        cin >> students[i].rollNumber;
        cout << "Enter Name : ";
        cin >> students[i].name;
        cout << "Enter Age : ";
        cin >> students[i].age;
        cout << "Enter Marks : ";
        cin >> students[i].marks;
        cout << endl;

        if (students[i].marks > highest_marks)
        {
            highest_marks = students[i].marks;
            highest_name = students[i].name;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Details of Student " << i+1 << endl;
        cout << "Roll No. : " << students[i].rollNumber << endl;
        cout << "Name : " << students[i].name << endl;
        cout << "Age : " << students[i].age << endl;
        cout << "Marks : " << students[i].marks << endl << endl;
    }
    cout << "Highest Marks" << endl;
    cout << "Student : " << highest_name << endl;
    cout << "Marks : " << highest_marks;
    cout << endl << endl;
    return 0;
}