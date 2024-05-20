// Lab 2_9

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
    srand(time(0)); 
    int computer = rand() % 3 + 1; 
    int user;

    cout << "Let's play Rock, Paper, Scissors!\n\n";
    cout << "1. Rock\t\t 2. Paper\t\t 3. Scissors\n\n";
    cout << "Enter your choice (1-3): ";
    cin >> user;
    cout << endl;
    switch (user) {
        case 1:
            cout << "You chose Rock.\n";
            break;
        case 2:
            cout << "You chose Paper.\n";
            break;
        case 3:
            cout << "You chose Scissors.\n";
            break;
        default:
            cout << "Invalid choice! Please enter a number between 1 and 3.\n";
            return 1;
    }
    cout << endl;
    switch (computer) {
        case 1:
            cout << "Computer chose Rock.\n";
            break;
        case 2:
            cout << "Computer chose Paper.\n";
            break;
        case 3:
            cout << "Computer chose Scissors.\n";
            break;
    }
    cout << endl;
    if (user == computer) {
        cout << "It's a tie!\n";
    } else if ((user == 1 && computer == 3) || 
               (user == 2 && computer == 1) || 
               (user == 3 && computer == 2)) {
        cout << "You win!\n";
    } else {
        cout << "Computer wins!\n";
    }
    cout << endl;
    return 0;
}