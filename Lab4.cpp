// // Lab 4_1

// #include <iostream>
// using namespace std;

// void swap (int *ptr1, int *ptr2) {
//     cout << "Before Swapping" << endl;
//     cout << "A is " << *ptr1 << endl;
//     cout << "B is " << *ptr2 << "\n\n";
//     int temp = *ptr2;
//     *ptr2 = *ptr1;
//     *ptr1 = temp;
//     cout << "After Swapping" << endl;
//     cout << "A is " << *ptr1 << endl;
//     cout << "B is " << *ptr2 << endl;

// }

// int main()
// {
//     cout << "Name : Hafsa Ishaque Shaikh" << endl;
//     cout << "Roll No. : SE-072" << "\n\n";
//     int a = 10;
//     int b = 20;
//     int *ptra = &a;
//     int *ptrb = &b;
//     swap(ptra, ptrb);
//     cout << endl;
//     return 0;
// }

// // Lab 4_2

// #include <iostream>
// using namespace std;

// void reverseArray (int arr[], int size) {
//     cout << "Original Array : ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl << endl;

//     int *ptr = arr;
//     for (int i = 0; i < size-1; i++)
//     {
//         ptr++;
//     }

//     int revarr[size];
//     for (int i = 0; i < size; i++)
//     {
//         revarr[i] = *ptr;
//         ptr--;
//     }
    
//     cout << "Reversed Array : ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << revarr[i] << " ";
//     }
// }

// int main()
// {
//     cout << "Name : Hafsa Ishaque Shaikh" << endl;
//     cout << "Roll No. : SE-072" << "\n\n";

//     int array[] = {1, 3, 5, 7, 9, 11};
//     int arraySize = sizeof(array) / sizeof(int);

//     reverseArray(array, arraySize);

//     cout << endl << endl;
//     return 0;
// }

// // Lab 4_3

// #include <iostream>
// using namespace std;

// int findMax (int arr[], int size) {
//     int max = arr[0];
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }
//     int *maxptr = &max;
//     cout << "Address of Max Element : " << maxptr;
//     cout << endl;
//     cout << "Max Element : " << *maxptr;
// }

// int main()
// {
//     cout << "Name : Hafsa Ishaque Shaikh" << endl;
//     cout << "Roll No. : SE-072" << "\n\n";

//     int array[] = {10, 43, 55, 27, 9, 11};
//     int arraySize = sizeof(array) / sizeof(int);

//     findMax(array, arraySize);
    
//     cout << endl << endl;
//     return 0;
// }

// // Lab 4_4

// #include <iostream>
// using namespace std;

// void removeDuplicates(int arr[], int size) {
//     cout << "Original Array : ";
//     for (int i = 0; i < size; i++) {
//         cout << *(arr + i) << " ";
//     }
//     cout << endl << endl;

//     int temparr[size];
//     int elements = 0;
//     for (int i = 0; i < size; i++) {
//         int temp = *(arr + i);
//         bool duplicate = false;
//         for (int j = 0; j < i; j++) {
//             if (temparr[j] == temp) {
//                 duplicate = true;
//                 break;
//             }
//         }

//         if (!duplicate) {
//             temparr[elements] = temp;
//             elements++;
//         }
//     }

//     int newarr[elements];
//     for (int i = 0; i < elements; i++) {
//         *(newarr + i) = temparr[i];
//     }

//     cout << "Altered Array : ";
//     for (int i = 0; i < elements; i++) {
//         cout << *(newarr + i) << " ";
//     }
// }

// int main() {
//     cout << "Name : Hafsa Ishaque Shaikh" << endl;
//     cout << "Roll No. : SE-072" << "\n\n";

//     int array[] = {1, 3, 25, 27, 29, 11, 29, 34, 27};
//     int arraySize = sizeof(array) / sizeof(int);

//     removeDuplicates(array, arraySize);

//     cout << endl << endl;
//     return 0;
// }


// // Lab 4_5

// #include <iostream>
// #include <cstring>
// using namespace std;

// bool isPalindrome(const char* phrase) {
//     int length = strlen(phrase);
//     const char* start = phrase;
//     const char* end = phrase + length - 1;

//     while (start < end) {
//         while (!isalnum(*start)) {
//             start++;
//         }
//         while (!isalnum(*end)) {
//             end--;
//         }
//         if (tolower(*start) != tolower(*end)) {
//             return false;
//         }
//         start++;
//         end--;
//     }

//     return true;
// }

// int main() {
//     cout << "Name : Hafsa Ishaque Shaikh" << endl;
//     cout << "Roll No. : SE-072" << "\n\n";

//     cout << "Enter a string: ";
//     string input;
//     getline(cin, input);
//     const char* convertedString = input.c_str();

//     if (isPalindrome(convertedString)) {
//         cout << "The input string is a palindrome." << endl;
//     } else {
//         cout << "The input string is not a palindrome." << endl;
//     }
//     cout << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int TwoSum() 
{
    int size;
    cout << "Enter number of elements of array (2 or more): ";
    cin >> size;
    int nums[size], target;
    cout << "Enter target number : ";
    cin >> target;
    cout << "\n\nEntering Array Elements\n";
    int index1 = 0;
    int index2 = 0;
    for (int i = 0; i < size; i++)
    {
        int element;
        cout << "Enter element " << i+1 << " : ";
        cin >> nums[i];
    }
    return 0;
}