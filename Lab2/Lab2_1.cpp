// Lab 2_1

#include <iostream>
using namespace std;

int main() {
    cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
    char input;
    int ascii;
    cout << "Enter a character: ";
    cin >> input;
    ascii = int(input);
    if (65 <= ascii && ascii <= 90)
    {
        cout << endl << "The character entered is a capital letter." << endl << endl;
    }
    else if (97 <= ascii && ascii <= 122)
    {
        cout << endl << "The character entered is a lowercase letter." << endl << endl;
    }
    else if (48 <= ascii && ascii <= 57)
    {
        cout << endl << "The character entered is a number." << endl << endl;
    }
    else {
        cout << endl << "The character entered is a special symbol." << endl << endl;
    }
    
    return 0;
}