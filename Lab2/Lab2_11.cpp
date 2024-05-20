#include <iostream>
using namespace std;

int Task1() {
    cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
    int rows = 9; 
    int spaces = rows / 2;
    int stars = 1; 
    for (int i = 1; i <= rows / 2 + 1; i++) {
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        for (int k = 1; k <= stars; k++) {
            cout << "*";
        }
        cout << endl;
        spaces--;
        stars += 2;
    }
    spaces = 1;
    stars = rows - 2;
    for (int i = rows / 2; i >= 1; i--) {
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        for (int k = 1; k <= stars; k++) {
            cout << "*";
        }
        cout << endl;
        spaces++;
        stars -= 2;
    }

    cout << endl;
    return 0;
}

int Task2() {
    cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
    int rows = 5; 
    int cols = 5;
    for (int i = 1; i <= cols; i++) {
        cout << "*";
    }
    cout << endl;
    for (int i = 2; i <= rows - 1; i++) {
        cout << "*";
        for (int j = 2; j <= cols - 1; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }
    for (int i = 1; i <= cols; i++) {
        cout << "*";
    }
    cout << endl << endl;
    return 0;
}

int Task3() {
    cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
    int rows = 5; 
    for (int i = 1; i <= rows; i++) {
        for (int j = i; j < rows; j++) {
            cout << " ";
        }
        for (int k = i; k >= 1; k--) {
            cout << k;
        }
        for (int l = 2; l <= i; l++) {
            cout << l;
        }
        cout << endl << endl;
    }
    cout << endl;
    return 0;
}

int Task4() {
    cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

int Task5() {
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

int main() {
    cout << "Part 1 : " << endl; 
    Task1();
    cout << "Part 2 : " << endl; 
    Task2();
    cout << "Part 3 : " << endl; 
    Task3();
    cout << "Part 4 : " << endl; 
    Task4();
    cout << "Part 5 : " << endl; 
    Task5();
    return 0;
}