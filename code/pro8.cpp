#include <iostream>
#include <stdio.h>
using namespace std;
class student
{
public:
       char sname[20];
       int rollno;
       int english, maths, science;
       void inital();
       void dispaly();

       void inital()
       {
              char st[100];
              int n, i;
              cout << "\n How Many Students You Want to Enter? : ";
              cin >> n;
              for (i = 0; i <= n - 1; i++)
              {
                     cout << "\n Student Name :  ";
                     cin >> sname;
                     cout << "\n Roll Number  :  ";
                     cin >> rollno;
                     cout << "\n Marks of Three Subjects ";
                     //   console.log()
                     cout << "\n ---------------------";
                     cout << "\n English      :  ";
                     cin >> english;
                     cout << "\n Maths        :  ";
                     cin >> maths;
                     cout << "\n Science      :  ";
                     cin >> science;
                     cout << "\n ---------------------------------";
              }
       }
       void dispaly()
       {
              int n, i;
              char st[100];
              cout << "\n\n\t ********** Displaying Student's Details ********** \n\n"
                   << " ";
              cout << "\n\tStudent's Name"
                   << "\tRoll Number"
                   << "\tMarks of Three Subjects";
              cout << "\n\n\t\t\t\t\tEnglish  Maths  Science";
              for (int i = 0; i <= n - 1; i++)
              {
                     cout << "\n\t----------------------------------------------------------";
                     cout << "the subject" << sname << endl;
                     cout << "the subject" << rollno << endl;
                     cout << "the subject" << english << endl;
                     cout << "the subject" << maths << endl;
                     cout << "the subject" << science << endl;
              }
       }
};
int main()
{
       student p1;
       p1.inital();
       p1.dispaly();

       return 0;
}