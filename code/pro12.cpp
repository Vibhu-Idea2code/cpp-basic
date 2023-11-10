#include <iostream>
#include<iostream>
using namespace std;
// C++ program to Addition, Subtraction, Division, Multiplication using

// Parameterized Constructor

// declare a class
class Calucator {
  private:
    // double length;
    // double height;
int n1,n2;
  public:
    // parameterized constructor to initialize variables
    Calucator(int no1, int no2) {
      n1 = no1;
      n2 = no2;
    }

    int calculateSum() {
      return n1+ n2;
    }
    int calculateSub() {
      return n1- n2;
    }
      int calculateMult() {
      return n1*n2;
    }
      int calculateDiv() {
      return n1*n2;
    }
};

int main() {
  // create object and initialize data members

  Calucator Calucator2(30, 40);
    Calucator Calucator3(60, 40);
    Calucator Calucator4(20, 40);
    Calucator Calucator5(40, 20);

  cout << "\nArea of Wall 2: " << Calucator2.calculateSum();
//    cout << "Area of Wall 1: " << Calucator1.calculateSum() << endl;
  cout << "\nArea of Wall 3: " << Calucator3.calculateSub();
  cout << "\nArea of Wall 4: " << Calucator5.calculateDiv();

  return 0;
}