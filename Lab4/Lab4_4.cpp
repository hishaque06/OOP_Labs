// Lab 4_4

#include <iostream>
using namespace std;

void removeDuplicates(int arr[], int size) {
    cout << "Original Array : ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl << endl;

    int temparr[size];
    int elements = 0;
    for (int i = 0; i < size; i++) {
        int temp = *(arr + i);
        bool duplicate = false;
        for (int j = 0; j < i; j++) {
            if (temparr[j] == temp) {
                duplicate = true;
                break;
            }
        }

        if (!duplicate) {
            temparr[elements] = temp;
            elements++;
        }
    }

    int newarr[elements];
    for (int i = 0; i < elements; i++) {
        *(newarr + i) = temparr[i];
    }

    cout << "Altered Array : ";
    for (int i = 0; i < elements; i++) {
        cout << *(newarr + i) << " ";
    }
}

int main() {
    cout << "Name : Hafsa Ishaque Shaikh" << endl;
    cout << "Roll No. : SE-072" << "\n\n";

    int array[] = {1, 3, 25, 27, 29, 11, 29, 34, 27};
    int arraySize = sizeof(array) / sizeof(int);

    removeDuplicates(array, arraySize);

    cout << endl << endl;
    return 0;
}