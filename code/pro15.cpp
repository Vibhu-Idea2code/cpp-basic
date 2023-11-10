// 32. Write a program to find the multiplication values and the cubic values using inline function

#include<iostream>
using namespace std;

// cout << "Enter a number: ";
// cin >> num;
class operation {
    int a,mul,cub;
    public:
    void get();
    void multiply();
    void cube();
};
inline void operation::get(){
 cout << "Enter a number: ";
    cin >> a;
}
inline void operation::multiply() {
    mul= a *a;
    cout<<"multiply is :"<<a*a<<"\n";
}
inline void operation::cube() {
    cub= a * a * a;
    cout<<"cube is :"<<a*a*a<<"\n";
}
int main() {
    operation o;
    o.get();
    o.multiply();
    o.cube();
   
    // double product = multiply(num, num);
    // double cubicValue = cube(num);

    return 0;
}