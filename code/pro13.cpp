#include <iostream>
#include<iostream>
using namespace std;
// C++ program to Addition, Subtraction, Division, Multiplication using

// declare a class
class Calucator {


  public:
    // parameterized constructor to initialize variables
    Calucator(int no1, int no2) {
       int ans=no1+no2;
       cout<<"your number is"<<ans;
    }
 Calucator(int n1, int n2) {
       int ans2=n1*n2;
       cout<<"your number is"<<ans2;
    }
 Calucator(int no1, int no2) {
       int ans=no1/no2;
       cout<<"your number is"<<ans;
    }

    // int calculateSum() {
    //   return n1+ n2;
    // }
    // int calculateSub() {
    //   return n1- n2;
    // }
    //   int calculateMult() {
    //   return n1*n2;
    // }
    //   int calculateDiv() {
    //   return n1*n2;
    // }
};

int main() {
  // create object and initialize data members
Calucator c1(30,40);
Calucator c2(50,90);
Calucator c3(55,10);
// Calucator c1(30,40);


//  c1.(30, 40);
    // Calucator Calucator3(60, 40);
    // Calucator Calucator4(20, 40);
    // Calucator Calucator5(40, 20);

//   cout << "\nArea of Wall 2: " << Calucator2.calculateSum();
// //    cout << "Area of Wall 1: " << Calucator1.calculateSum() << endl;
//   cout << "\nArea of Wall 3: " << Calucator3.calculateSub();
//   cout << "\nArea of Wall 4: " << Calucator5.calculateDiv();

  return 0;
}