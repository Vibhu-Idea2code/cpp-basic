#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class member
{
    char lecturer[20], subject[500], course[50];
    int lecturers;

public:
    void initial()
    {
        cout << "Name of the lecturer";
        cin >> lecturer;
        cout << "Name of the subject";
        cin >> subject;
        cout << "Name of course";
        cin >> course;
        cout << "Number of lecturers";
        cin >> lecturers;
    }

    void display()
    {
        cout << "the lecturer" << lecturer << endl;
        cout << "the subject" << subject << endl;
        cout << " course" << course << endl;
        cout << "lecturers" << lecturers << endl;
    }
};
int main()
{
    member b1;
    //  int ch;
    b1.initial();
    // b1.logic();
    b1.display();
    return 0;
}
