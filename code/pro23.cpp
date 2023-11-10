#include <iostream>
using namespace std;
class Max {
private:
   int x, y;
public:

   int input() {
       cout << "Enter two numbers:";
       cin >> x>>y;
   }
    friend int findMax(Max t);
};


int findMax(Max t) {
    // return (t.x > t.y) ? t.x : t.y;
    if (t.x > t.y) {
       cout << "Largest is:" << t.x;
   } else {
       cout << "Largest is:" << t.y;
   }
}

int main() {
   Max t;
   t.input();
   findMax(t);
    return 0;
}