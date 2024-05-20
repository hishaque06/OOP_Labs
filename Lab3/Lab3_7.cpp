// Lab 3_7

#include <iostream>
using namespace std;
int main()
{
    cout << "Name : Hafsa Ishaque Shaikh" << endl;
    cout << "Roll No. : SE-072" << "\n\n";
    struct Product
    {
        string productName;
        float price;
        int quantity;
    };
    Product Product1;
    cout << "Enter Product Name : ";
    cin >> Product1.productName;
    cout << "Enter Price : ";
    cin >> Product1.price;
    cout << "Enter Quantity : ";
    cin >> Product1.quantity;
    cout << endl << endl;
    cout << "Total Cost : Rs.";
    cout << Product1.price * Product1.quantity;
    cout << endl << endl;
    return 0;
}