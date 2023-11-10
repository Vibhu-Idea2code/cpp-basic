// Write a program of Addition, subtraction and multiplication of two numbers using Binary Operator overloading with switch case

#include <iostream>

class MathOperation {
private:
    double num1;
    double num2;

public:
    MathOperation(double n1, double n2) : num1(n1), num2(n2) {}
    
    MathOperation operator+(const MathOperation& other){
        return MathOperation(num1 + other.num1, num2 + other.num2);
    }
    MathOperation operator-(const MathOperation& other){
        return MathOperation(num1 - other.num1, num2 - other.num2);
    }


    MathOperation operator*(const MathOperation& other){
        return MathOperation(num1 * other.num1, num2 * other.num2);
    }

    void displayResult() {
        std::cout << "Result: (" << num1 << ", " << num2 << ")" << std::endl;
    }
};

int main() {
    double n1, n2;
    char operation;

    std::cout << "Enter two numbers: ";
    std::cin >> n1 >> n2;

    MathOperation num1(n1, n2);

    std::cout << "Enter an operation (+, -, *): ";
    std::cin >> operation;

    std::cout << "Enter two more numbers: ";
    std::cin >> n1 >> n2;

    MathOperation num2(n1, n2);
    MathOperation result(0, 0);

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        default:
            // std::cerr << "Invalid operation specified!" << std::endl;
            return 1;
    }

    result.displayResult();

    return 0;
}
