// Write a program to swap the two numbers using friend function
// (Not Use of third variable)

#include <iostream>
using namespace std;
class Student{
    private:
    int a;
    int b;
    public:
    int input(){
        cout<<"Enter two Number";
        cin>>a>>b;
    }
    friend int findStudent(Student s);
};
int findStudent(Student s){
      s.a = s.a+s.b;
    s.b = s.a-s.b;
     s.a = s.a-s.b;
        cout << "Number 1: " << s.a << std::endl;
        cout << "Number 2: " << s.b << std::endl;
}
int main(){
    Student s;
    s.input();
    findStudent(s);
    return 0;
}