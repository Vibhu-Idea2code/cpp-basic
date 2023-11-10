// Write a Program of Two 1D Matrix Addition using Operator Overloading
#include <iostream>
using namespace std;


int calculate(int num1, int num2) {
    return num1 + num2;
}

int calculate(int num1, int num2, char operation) {
    if (operation == '-') {
        return num1 - num2;
    } else {
        std::cerr << "Invalid operation specified!" << std::endl;
        return 0;
    }
}


int calculate(int num1, int num2, char operation, int dummy) {
    if (operation == '*') {
        return num1 * num2;
    } else {
        std::cerr << "Invalid operation specified!" << std::endl;
        return 0;
    }
}


double calculate(double num1, double num2, char operation) {
    if (operation == '/') {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            std::cerr << "Division by zero is not allowed!" << std::endl;
            return 0.0;
        }
    } else {
        std::cerr << "Invalid operation specified!" << std::endl;
        return 0.0;
    }
}

int main() {
    int num1, num2;
    char operation;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    std::cout << "Enter the operation (+, -, *, /): ";
    std::cin >> operation;

    if (operation == '+') {
        int result = calculate(num1, num2);
        std::cout << "Result: " << result << std::endl;
    } else if (operation == '-') {
        int result = calculate(num1, num2, '-');
        std::cout << "Result: " << result << std::endl;
    } else if (operation == '*') {
        int result = calculate(num1, num2, '*', 0);
        std::cout << "Result: " << result << std::endl;
    } else if (operation == '/') {
        double result = calculate(static_cast<double>(num1), static_cast<double>(num2), '/');
        std::cout << "Result: " << result << std::endl;
    } else {
        std::cerr << "Invalid operation specified!" << std::endl;
    }

    return 0;
}
