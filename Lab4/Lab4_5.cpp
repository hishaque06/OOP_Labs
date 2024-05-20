// Lab 4_5

#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(const char* phrase) {
    int length = strlen(phrase);
    const char* start = phrase;
    const char* end = phrase + length - 1;

    while (start < end) {
        while (!isalnum(*start)) {
            start++;
        }
        while (!isalnum(*end)) {
            end--;
        }
        if (tolower(*start) != tolower(*end)) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main() {
    cout << "Name : Hafsa Ishaque Shaikh" << endl;
    cout << "Roll No. : SE-072" << "\n\n";

    cout << "Enter a string: ";
    string input;
    getline(cin, input);
    const char* convertedString = input.c_str();

    if (isPalindrome(convertedString)) {
        cout << "The input string is a palindrome." << endl;
    } else {
        cout << "The input string is not a palindrome." << endl;
    }
    cout << endl;
    return 0;
}