// Lab 1_13

#include <iostream>
using namespace std;
int main() {
    cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
    int amount, Remaining_Amount;
    cout << "Enter the amount in Rupees: ";
    cin >> amount;
    cout << "Denominations:" << endl << endl;
    int thousands = amount / 1000;
    Remaining_Amount = amount % 1000;
    cout << "1000s In Given Amount : " << thousands << endl;
    int fiveHundreds = Remaining_Amount / 500;
    Remaining_Amount %= 500;
    cout << "500s In Given Amount : " << fiveHundreds << endl;
    int hundreds = Remaining_Amount / 100;
    Remaining_Amount %= 100;
    cout << "100s In Given Amount : " << hundreds << endl;
    int fifties = Remaining_Amount / 50;
    Remaining_Amount %= 50;
    cout << "50s In Given Amount : " << fifties << endl;
    int tens = Remaining_Amount / 10;
    Remaining_Amount %= 10;
    cout << "10s In Given Amount : " << tens << endl;
    int fives = Remaining_Amount / 5;
    Remaining_Amount %= 5;
    cout << "5s In Given Amount : " << fives << endl;
    int twos = Remaining_Amount / 2;
    Remaining_Amount %= 2;
    cout << "2s In Given Amount : " << twos << endl;
    cout << "1s In Given Amount : " << Remaining_Amount << endl << endl;
    return 0;
}