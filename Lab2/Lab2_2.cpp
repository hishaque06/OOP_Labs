// Lab 2_2

#include <iostream>
using namespace std;

int main() {
    cout << "Name: Hafsa Ishaque Shaikh" << endl << "Roll No.: SE-072" << "\n\n";
    int calls;
    float bill = 200.0;
    cout << "Enter total calls made : ";
    cin >> calls;
    if (calls <= 100)
    {
        cout << "Telephone Bill : Rs." << bill << endl << endl;
    }
    else if (100 < calls && calls <= 150)
    {
        float extra1 = calls - 100;
        extra1 *= 0.60;
        bill += extra1;
        cout << "Telephone Bill : Rs." << bill << endl << endl;
    }
    else if (150 < calls && calls <= 200)
    {
        float extra2 = calls - 150;
        extra2 *= 0.50;
        bill = bill + extra2 + (50 * 0.60);
        cout << "Telephone Bill : Rs." << bill << endl << endl;
    }
    else
    {
        float extra3 = calls - 200;
        extra3 *= 0.40;
        bill = bill + extra3 + (50 * 0.60) + (50 * 0.50);
        cout << "Telephone Bill : Rs." << bill << endl << endl;
    }
    return 0;
}