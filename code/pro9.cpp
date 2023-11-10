#include <iostream>
using namespace std;

class interest{
  int p, t, r, si;
  public:
  void inital();
  void logic();
  void dispaly();   
};
void interest::inital(){
    cout<<"\n Enter a Amount:";
    cin>>p;
    cout<<"\n Enter a Time:";
    cin>>t;
    cout<<"\n Enter a Rate:";
    cin>>r;
    
}

void interest::logic(){
      si = p * t * r / 100;
}

void interest::dispaly(){
       cout<<"\n Your a Amount:"<<p;
       cout<<"\n Your a Time:"<<t;
       cout<<"\n Your a Rate:"<<r;
      cout<<"\n Your Total Simple Interest Is :"<<si;   
}

int main(){
    interest i;
    i.inital();
    i.logic();
    i.dispaly();
    return(0);
}