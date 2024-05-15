// // Lab 1_1

// #include <iostream>
// using namespace std;

// int main(){
//     cout << "Name : Hafsa Ishaque Shaikh" << endl << "Roll No. : SE-072" << "\n\n";
//     float length, breadth, area;
//     cout << "Enter length of rectangle : ";
//     cin >> length;
//     cout << "Enter breadth of rectangle : ";
//     cin >> breadth;
//     area = length * breadth;
//     cout << endl << "Area of the rectangle : " << area << "\n\n";
//     return 0;
// }

// // Lab 1_2

// #include <iostream>
// using namespace std;

// int main(){
//     cout << "Name : Hafsa Ishaque Shaikh" << endl << "Roll No. : SE-072" << "\n\n";
//     int number;
//     string result;
//     cout << "Enter number : ";
//     cin >> number;
//     if (number%2 == 0)
//     {
//         result = "even.";
//     } else
//     {
//         result = "odd.";
//     }

//     cout << endl << number << " is " << result << "\n\n";
//     return 0;
// }

// // Lab 1_3

// #include <iostream>
// using namespace std;

// int main(){
//     cout << "Name : Hafsa Ishaque Shaikh" << endl << "Roll No. : SE-072" << "\n\n";
//     int terms;
//     int first = 0;
//     int second = 1;
//     int sum;
//     cout << "Enter number of terms : ";
//     cin >> terms;
//     cout << endl << "Fibonacci Series : ";
//     for (int i = 0; i < terms; i++)
//     {
//         sum = first + second;
//         cout << first << " ";
//         first = second;
//         second = sum;
//     }
//     cout << endl << endl;
//     return 0;
// }

// // Lab 1_4

// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "Name : Hafsa Ishaque Shaikh" << endl << "Roll No. : SE-072" << "\n\n";
//     int n1, n2, n3, max;
//     cout << "Enter first number : ";
//     cin >> n1;
//     cout << "Enter second number : ";
//     cin >> n2;
//     cout << "Enter third number : ";
//     cin >> n3;
//     if (n1 >= n2) {
//         if (n1 >= n3) {
//             cout << "Greatest number is " << n1;
//         }
//         else {
//             cout << "Greatest number is " << n3;
//         }
//     }
//     else {
//         if (n2 >= n3) {
//             cout << "Greatest number is " << n2;
//         }
//         else {
//             cout << "Greatest number is " << n3;
//         }
//     }
//     cout << endl << endl;
//     return 0;
// }

// // Lab 1_5

// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     cout << "Name : Hafsa Ishaque Shaikh" << endl << "Roll No. : SE-072" << "\n\n";
//     string phrase;
//     string reverse = "";
//     cout << "Enter string : ";
//     getline(cin, phrase);
//     for (int i = phrase.length(); i > 0; i--)
//     {
//         reverse += phrase[i-1];
//     }
//     cout << "Reversed String : " << reverse;
//     cout << endl << endl;
//     return 0;
// }

// // Lab 1_6

// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "Name : Hafsa Ishaque Shaikh" << endl << "Roll No. : SE-072" << "\n\n";
//     int number;
//     bool isPrime = true;
//     cout << "Enter number : ";
//     cin >> number;
//      if (number <= 1) {
//         isPrime = false;
//     } else {
//         for (int i = 2; i <= number / 2; ++i) {
//             if (number % i == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }
//     }
//      if (isPrime) {
//         cout << endl << number << " is a prime number.";
//     } else {
//         cout << endl << number << " is not a prime number.";
//     }
//     cout << endl << endl;
//     return 0;
// }

// // Lab 1_7

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
//     int number;
//     int factorial = 1;
//     cout << "Enter a number: ";
//     cin >> number;
//     if (number < 0) {
//         cout << "Factorial is not defined for negative numbers." << endl << endl;
//     } else if (number == 0 || number == 1) {
//         cout << "Factorial of " << number << " is: 1" << "\n\n";
//     } else {
//         for (int i = 1; i <= number; ++i) {
//             factorial *= i;
//         }
//         cout << "Factorial of " << number << " : " << factorial << "\n\n";
//     }
//     return 0;
// }

// // Lab 1_8

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
//     float Principal_Amount, Rate_Of_Interest, Time_Period, Simple_Interest;
//     cout << "Enter principal amount: ";
//     cin >> Principal_Amount;
//     cout << "Enter rate of interest (in percentage): ";
//     cin >> Rate_Of_Interest;
//     cout << "Enter time period (in years): ";
//     cin >> Time_Period;
//     Simple_Interest = (Principal_Amount * Rate_Of_Interest * Time_Period) / 100;
//     cout << "\nSimple Interest: " << Simple_Interest << endl << endl;
//     return 0;
// }

// // Lab 1_9

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
//     int year;
//     cout << "Enter a year: ";
//     cin >> year;
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         cout << year << " is a leap year." << endl << endl;
//     } else {
//         cout << year << " is not a leap year." << endl << endl;
//     }

//     return 0;
// }

// // Lab 1_10

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
//     int number, originalNumber, remainder, result = 0, digits = 0;
//     cout << "Enter number : ";
//     cin >> number;
//     originalNumber = number;
//     while (originalNumber != 0) {
//         originalNumber /= 10;
//         digits += 1;
//     }
//     originalNumber = number;
//     while (originalNumber != 0) {
//         remainder = originalNumber % 10;
//         result += pow(remainder, digits);
//         originalNumber /= 10;
//     }
//     if (result == number) {
//         cout << number << " is an Armstrong number." << endl << endl;
//     } else {
//         cout << number << " is not an Armstrong number." << endl << endl;
//     }

//     return 0;
// }

// // Lab 1_11

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
//     float num1, num2, sum, average;
//     cout << "Enter first number: ";
//     cin >> num1;
//     cout << "Enter second number: ";
//     cin >> num2;
//     sum = num1 + num2;
//     average = sum / 2;
//     cout << "The sum is " << sum << endl;
//     cout << "The average is " << average << endl << endl;
//     return 0;
// }

// // Lab 1_12

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
//     int time, hours, minutes, seconds;
//     cout << "Enter time in seconds: ";
//     cin >> time;
//     hours = time / 3600;
//     seconds = time % 3600;
//     minutes = seconds / 60;
//     seconds %= 60;
//     cout << "Hours in Time : " << hours << endl;
//     cout << "Minutes in Time : " << minutes << endl; 
//     cout << "Seconds in Time : " << seconds << endl << endl;
//     return 0;
// }

// // Lab 1_13

// #include <iostream>
// using namespace std;
// int main() {
//     cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
//     int amount, Remaining_Amount;
//     cout << "Enter the amount in Rupees: ";
//     cin >> amount;
//     cout << "Denominations:" << endl << endl;
//     int thousands = amount / 1000;
//     Remaining_Amount = amount % 1000;
//     cout << "1000s In Given Amount : " << thousands << endl;
//     int fiveHundreds = Remaining_Amount / 500;
//     Remaining_Amount %= 500;
//     cout << "500s In Given Amount : " << fiveHundreds << endl;
//     int hundreds = Remaining_Amount / 100;
//     Remaining_Amount %= 100;
//     cout << "100s In Given Amount : " << hundreds << endl;
//     int fifties = Remaining_Amount / 50;
//     Remaining_Amount %= 50;
//     cout << "50s In Given Amount : " << fifties << endl;
//     int tens = Remaining_Amount / 10;
//     Remaining_Amount %= 10;
//     cout << "10s In Given Amount : " << tens << endl;
//     int fives = Remaining_Amount / 5;
//     Remaining_Amount %= 5;
//     cout << "5s In Given Amount : " << fives << endl;
//     int twos = Remaining_Amount / 2;
//     Remaining_Amount %= 2;
//     cout << "2s In Given Amount : " << twos << endl;
//     cout << "1s In Given Amount : " << Remaining_Amount << endl << endl;
//     return 0;
// }

// // Lab 1_14

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
//     float fahrenheit, celsius;
//     cout << "Enter temperature in Fahrenheit : ";
//     cin >> fahrenheit;
//     celsius = (fahrenheit - 32) * 5 / 9;
//     cout << "Temperature in Celsius : " << celsius << endl << endl;
//     return 0;
// }

// Lab 1_15

#include <iostream>
using namespace std;

int main() {
    cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
    int number, reverse = 0;
    cout << "Enter a two-digit integer : ";
    cin >> number;
    reverse = (number % 10) * 10;
    reverse += (number / 10);
    cout << "Reversed number: " << reverse << endl << endl;
    return 0;
}

