// Lab 3_6

#include <iostream>
using namespace std;
int main()
{
    cout << "Name : Hafsa Ishaque Shaikh" << endl;
    cout << "Roll No. : SE-072" << "\n\n";
    struct Book
    {
        string title;
        string author;
        string genre;
        int yPublication;
    };
    Book books[3];
    int earliestYear = 2025;
    string earliestBook;
    for (int i = 0; i < 3; i++)
    {
        cout << "For Book " << i+1 << endl;
        cout << "Enter Title : ";
        cin >> books[i].title;
        cout << "Enter Author : ";
        cin >> books[i].author;
        cout << "Enter Genre : ";
        cin >> books[i].genre;
        cout << "Enter Year Of Publication : ";
        cin >> books[i].yPublication;
        cout << endl;

        if (earliestYear > books[i].yPublication)
        {
            earliestYear = books[i].yPublication;
            earliestBook = books[i].title;
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Details of Book " << i+1 << endl;
        cout << "Title : " << books[i].title << endl;
        cout << "Author : " << books[i].author << endl;
        cout << "Genre : " << books[i].genre << endl;
        cout << "Publication Year : " << books[i].yPublication;
        cout << endl << endl;
    }
    cout << "Earliest Published : " << endl;
    cout << "Title : " << earliestBook << endl;
    cout << "Year : " << earliestYear;
    cout << endl << endl;
    return 0;
}
