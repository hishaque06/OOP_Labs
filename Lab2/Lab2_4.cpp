// Lab 2_4

#include <iostream>
using namespace std;

string encrypt(string plaintext, int shift) {
    string ciphertext = "";
    int length = plaintext.length();
    for (int i = 0; i < length; i++)
    {
        char new_character;
        int ascii = int(plaintext[i]);
        ascii += shift;
        new_character = ascii;
        ciphertext += new_character;
    }
    return ciphertext;
}

string decrypt(string ciphertext, int shift) {
    string plaintext = "";
    int length = ciphertext.length();
    for (int i = 0; i < length; i++)
    {
        char new_character;
        int ascii = int(ciphertext[i]);
        ascii -= shift;
        new_character = ascii;
        plaintext += new_character;
    }
    return plaintext;
}

int main() {
    cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
    string phrase, decrypted;
    int key;
    cout << "Enter string : ";
    cin >> phrase;
    cout << "Enter key : ";
    cin >> key;
    string encrypted = encrypt(phrase, key);
    cout << endl << "Encrypted Text : " << encrypted << endl;
    decrypted = decrypt(encrypted, key);
    cout << "Decrypted Text : " << decrypted << endl << endl;
    return 0;
}