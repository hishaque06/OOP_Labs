// Lab 4_1

#include <iostream>
using namespace std;

void swap (int *ptr1, int *ptr2) {
    cout << "Before Swapping" << endl;
    cout << "A is " << *ptr1 << endl;
    cout << "B is " << *ptr2 << "\n\n";
    int temp = *ptr2;
    *ptr2 = *ptr1;
    *ptr1 = temp;
    cout << "After Swapping" << endl;
    cout << "A is " << *ptr1 << endl;
    cout << "B is " << *ptr2 << endl;
}

int main()
{
    cout << "Name : Hafsa Ishaque Shaikh" << endl;
    cout << "Roll No. : SE-072" << "\n\n";
    int a = 10;
    int b = 20;
    int *ptra = &a;
    int *ptrb = &b;
    swap(ptra, ptrb);
    cout << endl;
    return 0;
}