#include <iostream>
using namespace std;

class Interest{
    private:
  int p, t, r, si;
  public:
  Interest()
{
 cout<<"\n Enter a Amount:";
    cin>>p;
    cout<<"\n Enter a Time:";
    cin>>t;
    cout<<"\n Enter a Rate:";
    cin>>r;
}
Interest(int p,int t,int r){
   
     int si =( p * t * r )/ 100;
}
 

};



int main(){
    int p,t,r,si;
    Interest i;
    Interest i1(p,t,r);
    // interest i3;
cout<<"\n Your a Amount:"<<p;
       cout<<"\n Your a Time:"<<t;
       cout<<"\n Your a Rate:"<<r;
      cout<<"\n Your Total Simple Interest Is :"<<si;   
    // i.inital();
    // i.logic();
    
    return(0);
}