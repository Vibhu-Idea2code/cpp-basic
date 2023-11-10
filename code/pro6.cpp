#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class member
{
    char author[20], title[500], publisher[50];
    int price = 0;

public:
    void display()
    {
        cout << "Enter Author Name";
        cin >> author;
        cout << "Enter Title Of Book";
        cin >> title;
        cout << "Enter publisher";
        cin >> publisher;
        cout << "Enter price";
        cin >> price;
    }
    void logic()
    {
        // display();
        int d;
        if (price <= 1000)
        {

            d = (price * 2) / 100;
        }
        else if (price <= 3000)
        {
            d = (price * 10) / 100;
        }
        else
        {

            d = (price * 15) / 100;
        }
        price = price - d;
    }
    void inital()
    {
        cout << "Author Name" << author << endl;
        cout << "Title Of Book Name" << title << endl;
        cout << " publisher Name" << publisher << endl;
        cout << "price Name" << price << endl;
    }
};
int main()
{
    member b1;
    //  int ch;
    b1.display();
    b1.logic();
    b1.inital();
    return 0;
}
