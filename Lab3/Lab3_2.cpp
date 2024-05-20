// Lab 3_2

#include <iostream>
using namespace std;
int main()
{
    cout << "Name : Hafsa Ishaque Shaikh" << endl;
    cout << "Roll No. : SE-072" << "\n\n";
    struct Rectangle
    {
        float length;
        float breadth;
    ;
    };
    Rectangle Rect1;
    cout << "Enter length of Rect1 : ";
    cin >> Rect1.length;
    cout <<  "Enter width of Rect1 : ";
    cin >> Rect1.breadth;  
    cout << endl << "Area of Rect1 : " << Rect1.length*Rect1.breadth << endl;
    cout << endl << endl;
    return 0;
}