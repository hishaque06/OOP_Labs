// Lab 2_8

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
    int number = rand() % 200 + 1;
    int guess;
    int attempts = 0;
    cout << "NUMBER GUESSING GAME" << endl;
    cout << "Guess the number between 1 to 200!" << endl << endl;
    while (true){
        cout << "Enter your guess: ";
        cin >> guess;
        attempts += 1;
        if (guess == number){
            cout << "Congratulations! You guessed correctly in " << attempts << " attempts! \n\n";
            break;
        }
        if (abs(guess - number) < 10) {
             cout << "So Close! Better Luck On Your Next Try!" << endl << endl;
        } else {
            if (guess > number) {
                 cout << "Too High! Try Again!" << endl << endl;
            } else {
                 cout << "Too Low! Try Again!" << endl << endl;
            }
        }}
    return 0;
}