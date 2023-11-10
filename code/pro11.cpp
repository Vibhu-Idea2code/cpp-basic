#include <iostream>
#include <stdio.h>
using namespace std;
int area(int);
int area(int,float);
int area(double);

int main(){
    int n1,n2;
 cout<<"Enter First Value:";
    cin>>n1;
    cout<<"Enter Second Value:";
    cin>>n2;
    cout<<"programing operation is inline function\n"<<area(n1,n2);
     cout<<"programing operation is inline function\n"<<area(n1);
   
}


int area(int n1,int n2){
   return (n1+n2);
}
int area(double n1){
//   int n1;
//  n1=n2;  
   return (n1*n1);
}
// inline void math::cube(){
//     ans=n1*n1*n1;
//     cout<<"cube is :"<<n1*n1*n1<<"\n";
// }

