// Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two number using different parameters and Function
// Overloading

#include <iostream>
using namespace std;

int cal(int num1,int num2,int operation){
    operation=num1+num2;
    return operation;
}
int cal(int no1,int no2,int operation1){
   operation1= no1-no2;
    return operation1;
}
int cal(int a, int b,int operation2){
    operation2=a-b;
    return operation2;
}
int cal(int d,int f,int operation3){
    operation3= d/f;
    return operation3;
}
int main(){
    int num1,num2,no2,no1,a,b,d,f;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    if(int operation){

    }
    //  std::cout << "Enter the operation (+, -, *, /): ";
    // std::cin >> operation;

}
