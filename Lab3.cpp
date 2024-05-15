// // // Lab 3_1

// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "Name : Hafsa Ishaque Shaikh" << endl << "Roll No. : SE-072" << "\n\n";
//     struct Person
//     {
//         string name;
//         int age;
//     };
//     Person Person1;
//     cout << "Enter name of Person1 : ";
//     cin >> Person1.name;
//     cout << "Enter age of Person1 : ";
//     cin >> Person1.age;    
//     cout << endl << "Details of Person1" << endl;
//     cout << endl << "Name : " << Person1.name;
//     cout << endl << "Age : " << Person1.age << endl;
//     cout << endl << endl;
//     return 0;
// }

// // Lab 3_2

// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "Name : Hafsa Ishaque Shaikh" << endl;
//     cout << "Roll No. : SE-072" << "\n\n";
//     struct Rectangle
//     {
//         float length;
//     ;
//     };
//     Rectangle Rect1;
//     cout << "Enter length of Rect1 : ";
//     cin >> Rect1.length;
//     cout  of Rect1 : ";
//     cin;  
//     cout << endl << "Area of Rect1 : " << Rect1.lengt << endl;
//     cout << endl << endl;
//     return 0;
// }

// // Lab 3_3

// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "Name : Hafsa Ishaque Shaikh" << endl;
//     cout << "Roll No. : SE-072" << "\n\n";
//     struct Number
//     {
//         float num;
//     };
//     Number n1, n2;
//     float temp;
//     cout << "Enter first number n1 : ";
//     cin >> n1.num;
//     cout << "Enter second number n2 : ";
//     cin >> n2.num; 
//     temp = n2.num;
//     n2.num = n1.num;
//     n1.num = temp;
//     cout << endl << "n1 After Swapping : " << n1.num << endl;
//     cout << endl << "n2 After Swapping : " << n2.num << endl;
//     cout << endl;
//     return 0;
// }

// // Lab 3_4

// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "Name : Hafsa Ishaque Shaikh" << endl;
//     cout << "Roll No. : SE-072" << "\n\n";
//     struct Student
//     {
//         int rollNumber;
//         string name;
//         int age;
//         int marks;
//     };
//     Student students[3];
//     string highest_name = students[0].name;
//     int highest_marks = students[0].marks;
//     for (int i = 0; i < 3; i++)
//     {
//         cout << "For Student " << i+1 << endl;
//         cout << "Enter Roll Number : ";
//         cin >> students[i].rollNumber;
//         cout << "Enter Name : ";
//         cin >> students[i].name;
//         cout << "Enter Age : ";
//         cin >> students[i].age;
//         cout << "Enter Marks : ";
//         cin >> students[i].marks;
//         cout << endl;

//         if (students[i].marks > highest_marks)
//         {
//             highest_marks = students[i].marks;
//             highest_name = students[i].name;
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         cout << "Details of Student " << i+1 << endl;
//         cout << "Roll No. : " << students[i].rollNumber << endl;
//         cout << "Name : " << students[i].name << endl;
//         cout << "Age : " << students[i].age << endl;
//         cout << "Marks : " << students[i].marks << endl << endl;
//     }
//     cout << "Highest Marks" << endl;
//     cout << "Student : " << highest_name << endl;
//     cout << "Marks : " << highest_marks;
//     cout << endl << endl;
//     return 0;
// }

// // Lab 3_5

// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "Name : Hafsa Ishaque Shaikh" << endl;
//     cout << "Roll No. : SE-072" << "\n\n";
//     struct Employee
//     {
//         int employeeID;
//         string name;
//         string dept;
//         int salary;
//     };
//     Employee employees[5];
//     int sumSalary = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << "For Employee " << i+1 << endl;
//         cout << "Enter ID : ";
//         cin >> employees[i].employeeID;
//         cout << "Enter Name : ";
//         cin >> employees[i].name;
//         cout << "Enter Department : ";
//         cin >> employees[i].dept;
//         cout << "Enter Salary : ";
//         cin >> employees[i].salary;
//         cout << endl;

//         sumSalary += employees[i].salary;
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         cout << "Details of Employee " << i+1 << endl;
//         cout << "ID : " << employees[i].employeeID << endl;
//         cout << "Name : " << employees[i].name << endl;
//         cout << "DEpartment : " << employees[i].dept << endl;
//         cout << "Salary : " << employees[i].salary << endl << endl;
//     }
//     float average = sumSalary / 5;
//     cout << "Average Salary : " << average;
//     cout << endl << endl;
//     return 0;
// }

// // Lab 3_6

// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "Name : Hafsa Ishaque Shaikh" << endl;
//     cout << "Roll No. : SE-072" << "\n\n";
//     struct Book
//     {
//         string title;
//         string author;
//         string genre;
//         int yPublication;
//     };
//     Book books[3];
//     int earliestYear = 2025;
//     string earliestBook;
//     for (int i = 0; i < 3; i++)
//     {
//         cout << "For Book " << i+1 << endl;
//         cout << "Enter Title : ";
//         cin >> books[i].title;
//         cout << "Enter Author : ";
//         cin >> books[i].author;
//         cout << "Enter Genre : ";
//         cin >> books[i].genre;
//         cout << "Enter Year Of Publication : ";
//         cin >> books[i].yPublication;
//         cout << endl;

//         if (earliestYear > books[i].yPublication)
//         {
//             earliestYear = books[i].yPublication;
//             earliestBook = books[i].title;
//         }
        
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         cout << "Details of Book " << i+1 << endl;
//         cout << "Title : " << books[i].title << endl;
//         cout << "Author : " << books[i].author << endl;
//         cout << "Genre : " << books[i].genre << endl;
//         cout << "Publication Year : " << books[i].yPublication;
//         cout << endl << endl;
//     }
//     cout << "Earliest Published : " << endl;
//     cout << "Title : " << earliestBook << endl;
//     cout << "Year : " << earliestYear;
//     cout << endl << endl;
//     return 0;
// }

// Lab 3_7

#include <iostream>
using namespace std;
int main()
{
    cout << "Name : Hafsa Ishaque Shaikh" << endl;
    cout << "Roll No. : SE-072" << "\n\n";
    struct Product
    {
        string productName;
        float price;
        int quantity;
    };
    Product Product1;
    cout << "Enter Product Name : ";
    cin >> Product1.productName;
    cout << "Enter Price : ";
    cin >> Product1.price;
    cout << "Enter Quantity : ";
    cin >> Product1.quantity;
    cout << endl << endl;
    cout << "Total Cost : Rs.";
    cout << Product1.price * Product1.quantity;
    cout << endl << endl;
    return 0;
}