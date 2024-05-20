// Lab 1_5

#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "Name : Hafsa Ishaque Shaikh" << endl << "Roll No. : SE-072" << "\n\n";
    string phrase;
    string reverse = "";
    cout << "Enter string : ";
    getline(cin, phrase);
    for (int i = phrase.length(); i > 0; i--)
    {
        reverse += phrase[i-1];
    }
    cout << "Reversed String : " << reverse;
    cout << endl << endl;
    return 0;
}