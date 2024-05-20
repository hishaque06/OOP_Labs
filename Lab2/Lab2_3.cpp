// Lab 2_3

#include <iostream>
using namespace std;

int main() {
    cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
    char password[100];
    int length = 0;
    bool eight_min = false;
    bool upper = false;
    bool lower = false;
    bool digit = false;
    bool special = false;
    cout << "Enter password : ";
    while (length != 100)
    {
        password[length] = getchar();
        int ascii = int(password[length]);
        if (65 <= ascii && ascii <= 90)
        {
            upper = true;
        }
        else if (97 <= ascii && ascii <= 122)
        {
            lower = true;
        }
        else if (48 <= ascii && ascii <= 57)
        {
            digit = true;
        }
        else if (ascii == 10)
        {
            break;
        }
        else {
            special = true;
        }
        length += 1;
    }
    if (length >= 8)
    {
        eight_min = true;
    }
    if (eight_min && digit && lower && upper && special)
    {
        cout << "The password entered is Strong." << endl << endl;
    }
    else if (eight_min && digit && lower && upper && special != true)
    {
        cout << "The password entered is Weak. At least one special character is required." << endl << endl;
    }
    else if (eight_min && digit && lower && special && upper != true )
    {
        cout << "The password entered is Weak. At least one uppercase letter is required." << endl << endl;
    }
    else if (eight_min && digit && upper && special && lower != true )
    {
        cout << "The password entered is Weak. At least one lowercase letter is required." << endl << endl;
    }
    else if (eight_min && upper && lower && special && digit != true )
    {
        cout << "The password entered is Weak. At least one digit is required." << endl << endl;
    }
    else if (upper && digit && lower && special && eight_min != true )
    {
        cout << "The password entered is Weak. At least eight characters are required." << endl << endl;
    }
    else
    {
        cout << "The password entered is very Weak." << endl << endl;
    }
    return 0;
}