// Lab 4_3

#include <iostream>
using namespace std;

int findMax (int arr[], int size) {
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    int *maxptr = &max;
    cout << "Address of Max Element : " << maxptr;
    cout << endl;
    cout << "Max Element : " << *maxptr;
}

int main()
{
    cout << "Name : Hafsa Ishaque Shaikh" << endl;
    cout << "Roll No. : SE-072" << "\n\n";

    int array[] = {10, 43, 55, 27, 9, 11};
    int arraySize = sizeof(array) / sizeof(int);

    findMax(array, arraySize);
    
    cout << endl << endl;
    return 0;
}