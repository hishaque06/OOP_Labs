// Lab 4_2

#include <iostream>
using namespace std;

void reverseArray (int arr[], int size) {
    cout << "Original Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    int *ptr = arr;
    for (int i = 0; i < size-1; i++)
    {
        ptr++;
    }

    int revarr[size];
    for (int i = 0; i < size; i++)
    {
        revarr[i] = *ptr;
        ptr--;
    }
    
    cout << "Reversed Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << revarr[i] << " ";
    }
}

int main()
{
    cout << "Name : Hafsa Ishaque Shaikh" << endl;
    cout << "Roll No. : SE-072" << "\n\n";

    int array[] = {1, 3, 5, 7, 9, 11};
    int arraySize = sizeof(array) / sizeof(int);

    reverseArray(array, arraySize);

    cout << endl << endl;
    return 0;
}