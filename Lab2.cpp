// // Lab 2_1

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
//     char input;
//     int ascii;
//     cout << "Enter a character: ";
//     cin >> input;
//     ascii = int(input);
//     if (65 <= ascii && ascii <= 90)
//     {
//         cout << endl << "The character entered is a capital letter." << endl << endl;
//     }
//     else if (97 <= ascii && ascii <= 122)
//     {
//         cout << endl << "The character entered is a lowercase letter." << endl << endl;
//     }
//     else if (48 <= ascii && ascii <= 57)
//     {
//         cout << endl << "The character entered is a number." << endl << endl;
//     }
//     else {
//         cout << endl << "The character entered is a special symbol." << endl << endl;
//     }
    
//     return 0;
// }

// // Lab 2_2

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
//     int calls;
//     float bill = 200.0;
//     cout << "Enter total calls made : ";
//     cin >> calls;
//     if (calls <= 100)
//     {
//         cout << "Telephone Bill : Rs." << bill << endl << endl;
//     }
//     else if (100 < calls && calls <= 150)
//     {
//         float extra1 = calls - 100;
//         extra1 *= 0.60;
//         bill += extra1;
//         cout << "Telephone Bill : Rs." << bill << endl << endl;
//     }
//     else if (150 < calls && calls <= 200)
//     {
//         float extra2 = calls - 150;
//         extra2 *= 0.50;
//         bill = bill + extra2 + (50 * 0.60);
//         cout << "Telephone Bill : Rs." << bill << endl << endl;
//     }
//     else
//     {
//         float extra3 = calls - 200;
//         extra3 *= 0.40;
//         bill = bill + extra3 + (50 * 0.60) + (50 * 0.50);
//         cout << "Telephone Bill : Rs." << bill << endl << endl;
//     }
//     return 0;
// }

// // Lab 2_3

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
//     char password[100];
//     int length = 0;
//     bool eight_min = false;
//     bool upper = false;
//     bool lower = false;
//     bool digit = false;
//     bool special = false;
//     cout << "Enter password : ";
//     while (length != 100)
//     {
//         password[length] = getchar();
//         int ascii = int(password[length]);
//         if (65 <= ascii && ascii <= 90)
//         {
//             upper = true;
//         }
//         else if (97 <= ascii && ascii <= 122)
//         {
//             lower = true;
//         }
//         else if (48 <= ascii && ascii <= 57)
//         {
//             digit = true;
//         }
//         else if (ascii == 10)
//         {
//             break;
//         }
//         else {
//             special = true;
//         }
//         length += 1;
//     }
//     if (length >= 8)
//     {
//         eight_min = true;
//     }
//     if (eight_min && digit && lower && upper && special)
//     {
//         cout << "The password entered is Strong." << endl << endl;
//     }
//     else if (eight_min && digit && lower && upper && special != true)
//     {
//         cout << "The password entered is Weak. At least one special character is required." << endl << endl;
//     }
//     else if (eight_min && digit && lower && special && upper != true )
//     {
//         cout << "The password entered is Weak. At least one uppercase letter is required." << endl << endl;
//     }
//     else if (eight_min && digit && upper && special && lower != true )
//     {
//         cout << "The password entered is Weak. At least one lowercase letter is required." << endl << endl;
//     }
//     else if (eight_min && upper && lower && special && digit != true )
//     {
//         cout << "The password entered is Weak. At least one digit is required." << endl << endl;
//     }
//     else if (upper && digit && lower && special && eight_min != true )
//     {
//         cout << "The password entered is Weak. At least eight characters are required." << endl << endl;
//     }
//     else
//     {
//         cout << "The password entered is very Weak." << endl << endl;
//     }
//     return 0;
// }

// Lab 2_4

// #include <iostream>
// using namespace std;

// string encrypt(string plaintext, int shift) {
//     string ciphertext = "";
//     int length = plaintext.length();
//     for (int i = 0; i < length; i++)
//     {
//         char new_character;
//         int ascii = int(plaintext[i]);
//         ascii += shift;
//         new_character = ascii;
//         ciphertext += new_character;
//     }
//     return ciphertext;
// }

// string decrypt(string ciphertext, int shift) {
//     string plaintext = "";
//     int length = ciphertext.length();
//     for (int i = 0; i < length; i++)
//     {
//         char new_character;
//         int ascii = int(ciphertext[i]);
//         ascii -= shift;
//         new_character = ascii;
//         plaintext += new_character;
//     }
//     return plaintext;
// }

// int main() {
//     cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
//     string phrase, decrypted;
//     int key;
//     cout << "Enter string : ";
//     cin >> phrase;
//     cout << "Enter key : ";
//     cin >> key;
//     string encrypted = encrypt(phrase, key);
//     cout << endl << "Encrypted Text : " << encrypted << endl;
//     decrypted = decrypt(encrypted, key);
//     cout << "Decrypted Text : " << decrypted << endl << endl;
//     return 0;
// }

// // Lab 2_5

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
//     int number, multiple;
//     cout << "Enter the number to generate for : ";
//     cin >> number;
//     cout << "Enter the number till which to generate : ";
//     cin >> multiple;
//     cout << endl << "MULTIPLICATION TABLE FOR " << number << endl << endl;
//     for (int i = 1; i <= multiple; i++)
//     {
//         cout << number << " x " << i << " = " << number*i << endl;
//     }
//     cout << endl;
//     return 0;
// }

// // Lab 2_6

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
//     char operation;
//     float num1, num2, result;
//     cout << "Simple Menu-Driven Calculator" << endl << endl;
//     cout << "Enter first number: ";
//     cin >> num1;
//     cout << "Enter second number: ";
//     cin >> num2;
//     cout << endl << "1. Addition" << endl;
//     cout << "2. Subtraction" << endl;
//     cout << "3. Multiplication" << endl;
//     cout << "4. Division" << endl << endl;
//     cout << "Enter your choice (1-4): ";
//     cin >> operation;
//     switch (operation) {
//         case '1':
//             result = num1 + num2;
//             cout << "Sum : " << result << endl << endl;
//             break;
//         case '2':
//             result = num1 - num2;
//             cout << "Difference : " << result << endl << endl;
//             break;
//         case '3':
//             result = num1 * num2;
//             cout << "Product : " << result << endl << endl;
//             break;
//         case '4':
//             if (num2 != 0) {
//                 result = num1 / num2;
//                 cout << "Result: " << result << endl << endl;
//             } else {
//                 cout << "Error! Division by zero is not allowed." << endl << endl;
//             }
//             break;
//         default:
//             cout << "Invalid choice! Please enter a number between 1 and 4." << endl << endl;
//     }

//     return 0;
// }


// // Lab 2_7

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
//     int terms;
//     cout << "Enter number of terms : ";
//     cin >> terms;
//     cout << endl << "FIBONACCI SEQUENCE UPTO " << terms << " TERMS" << endl << endl;
//     int first = 0;
//     int second = 1;
//     int sum;
//     for (int i = 0; i < terms; i++)
//     {
//         cout << first << " ";
//         sum = first + second;
//         first = second;
//         second = sum;
//     }
//     cout << endl << endl;
//     return 0;
// }

// // Lab 2_8

// #include <iostream>
// #include <cstdlib>
// using namespace std;

// int main() {
//     cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
//     int number = rand() % 200 + 1;
//     int guess;
//     int attempts = 0;
//     cout << "NUMBER GUESSING GAME" << endl;
//     cout << "Guess the number between 1 to 200!" << endl << endl;
//     while (true){
//         cout << "Enter your guess: ";
//         cin >> guess;
//         attempts += 1;
//         if (guess == number){
//             cout << "Congratulations! You guessed correctly in " << attempts << " attempts! \n\n";
//             break;
//         }
//         if (abs(guess - number) < 10) {
//              cout << "So Close! Better Luck On Your Next Try!" << endl << endl;
//         } else {
//             if (guess > number) {
//                  cout << "Too High! Try Again!" << endl << endl;
//             } else {
//                  cout << "Too Low! Try Again!" << endl << endl;
//             }
//         }}
//     return 0;
// }

// // Lab 2_9

// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// using namespace std;

// int main() {
//     cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
//     srand(time(0)); 
//     int computer = rand() % 3 + 1; 
//     int user;

//     cout << "Let's play Rock, Paper, Scissors!\n\n";
//     cout << "1. Rock\t\t 2. Paper\t\t 3. Scissors\n\n";
//     cout << "Enter your choice (1-3): ";
//     cin >> user;
//     cout << endl;
//     switch (user) {
//         case 1:
//             cout << "You chose Rock.\n";
//             break;
//         case 2:
//             cout << "You chose Paper.\n";
//             break;
//         case 3:
//             cout << "You chose Scissors.\n";
//             break;
//         default:
//             cout << "Invalid choice! Please enter a number between 1 and 3.\n";
//             return 1;
//     }
//     cout << endl;
//     switch (computer) {
//         case 1:
//             cout << "Computer chose Rock.\n";
//             break;
//         case 2:
//             cout << "Computer chose Paper.\n";
//             break;
//         case 3:
//             cout << "Computer chose Scissors.\n";
//             break;
//     }
//     cout << endl;
//     if (user == computer) {
//         cout << "It's a tie!\n";
//     } else if ((user == 1 && computer == 3) || 
//                (user == 2 && computer == 1) || 
//                (user == 3 && computer == 2)) {
//         cout << "You win!\n";
//     } else {
//         cout << "Computer wins!\n";
//     }
//     cout << endl;
//     return 0;
// }


// // Lab 2_10

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
//     int dayNumber;
//     cout << "Enter the day number (1-7): ";
//     cin >> dayNumber;
//     cout << "The day is ";
//     switch (dayNumber) {
//         case 1:
//             cout << "Sunday." << endl;
//             break;
//         case 2:
//             cout << "Monday." << endl;
//             break;
//         case 3:
//             cout << "Tuesday." << endl;
//             break;
//         case 4:
//             cout << "Wednesday." << endl;
//             break;
//         case 5:
//             cout << "Thursday." << endl;
//             break;
//         case 6:
//             cout << "Friday." << endl;
//             break;
//         case 7:
//             cout << "Saturday." << endl;
//             break;
//         default:
//             cout << "Invalid day number! Please enter a number between 1 and 7." << endl;
//     }
//     cout << endl;
//     return 0;
// }


// // Lab 2_11_1

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
//     int rows = 9; 
//     int spaces = rows / 2;
//     int stars = 1; 
//     for (int i = 1; i <= rows / 2 + 1; i++) {
//         for (int j = 1; j <= spaces; j++) {
//             cout << " ";
//         }
//         for (int k = 1; k <= stars; k++) {
//             cout << "*";
//         }
//         cout << endl;
//         spaces--;
//         stars += 2;
//     }
//     spaces = 1;
//     stars = rows - 2;
//     for (int i = rows / 2; i >= 1; i--) {
//         for (int j = 1; j <= spaces; j++) {
//             cout << " ";
//         }
//         for (int k = 1; k <= stars; k++) {
//             cout << "*";
//         }
//         cout << endl;
//         spaces++;
//         stars -= 2;
//     }

//     cout << endl;
//     return 0;
// }


// // Lab 2_11_2

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
//     int rows = 5; 
//     int cols = 5;
//     for (int i = 1; i <= cols; i++) {
//         cout << "*";
//     }
//     cout << endl;
//     for (int i = 2; i <= rows - 1; i++) {
//         cout << "*";
//         for (int j = 2; j <= cols - 1; j++) {
//             cout << " ";
//         }
//         cout << "*" << endl;
//     }
//     for (int i = 1; i <= cols; i++) {
//         cout << "*";
//     }
//     cout << endl << endl;
//     return 0;
// }


// // Lab 2_11_3

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
//     int rows = 5; 
//     for (int i = 1; i <= rows; i++) {
//         for (int j = i; j < rows; j++) {
//             cout << " ";
//         }
//         for (int k = i; k >= 1; k--) {
//             cout << k;
//         }
//         for (int l = 2; l <= i; l++) {
//             cout << l;
//         }
//         cout << endl << endl;
//     }
//     cout << endl;
//     return 0;
// }


// // Lab 2_11_4

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
//     int rows = 5;
//     for (int i = 1; i <= rows; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     cout << endl;
//     return 0;
// }


// Lab 2_11_5

#include <iostream>
using namespace std;

int main() {
    cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
    int rows = 5; 
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int k = 1; k <= 2 * (rows - i); k++) {
            cout << " ";
        }
        for (int l = 1; l <= i; l++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int k = 1; k <= 2 * (rows - i); k++) {
            cout << " ";
        }
        for (int l = 1; l <= i; l++) {
            cout << "*";
        }
        cout << endl; }
    cout << endl;
    return 0;
}



