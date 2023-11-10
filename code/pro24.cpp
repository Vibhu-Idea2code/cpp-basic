#include <iostream>
using namespace std;
class Max {
private:
    int x;
    int y;

public:
      int input() {
       cout << "Enter two numbers:";
       cin >> x>>y;
   }
    friend int findMax(Max t);
};
int findMax(Max t) {

     int temp = t.x;
    t.x = t.y;
    t.y = temp;
     cout << "Number 1: " << t.x << std::endl;
        cout << "Number 2: " << t.y << std::endl;
}
int main() {
    Max t;
   t.input();
    findMax(t);
    return 0;
}