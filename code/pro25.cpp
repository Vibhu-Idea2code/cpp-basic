#include <iostream>

class NumberPair {
private:
    int num1;
    int num2;

public:
    NumberPair(int n1, int n2) : num1(n1), num2(n2) {}
    friend void swapNumbers(NumberPair& np);

    void displayNumbers() {
        std::cout << "Number 1: " << num1 << std::endl;
        std::cout << "Number 2: " << num2 << std::endl;
    }
};


void swapNumbers(NumberPair& np) {
 
    np.num1 = np.num1+np.num2;
    np.num2 = np.num1+np.num2;
     np.num1 = np.num2-np.num1;
  
}

int main() {
    NumberPair pair(5, 1);

    std::cout << "Before swapping:" << std::endl;
    pair.displayNumbers();

   
    swapNumbers(pair);

    std::cout << "\nAfter swapping:" << std::endl;
    pair.displayNumbers();

    return 0;
}