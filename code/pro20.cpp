// Assume a class cricketer is declared. Declare a derived class batsman from cricketer .Data member of batsman. Total runs, Average runs and best performance. Member functions input data, calculate average runs, Display data.
// (Single Inheritance)
#include <iostream>
#include<string.h>
using namespace std;

class Cricketer {
protected:
    std::string name;
    int age;

public:
 
    Cricketer(const std::string& n, int a) : name(n) {}


    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    Batsman(const std::string& n, int a, int tr = 0, double ar = 0.0, int bp = 0)
        : Cricketer(n, a), totalRuns(tr), averageRuns(ar), bestPerformance(bp) {}

  
    void inputData() {
        std::cout << "Enter total runs: ";
        std::cin >> totalRuns;
        std::cout << "Enter average runs: ";
        std::cin >> averageRuns;
        std::cout << "Enter best performance: ";
        std::cin >> bestPerformance;
    }


    void calculateAverageRuns() {
   averageRuns=totalRuns/12;
    }

    void displayData() {
        displayInfo();
        std::cout << "Total Runs: " << totalRuns << std::endl;
        std::cout << "Average Runs: " << averageRuns << std::endl;
        std::cout << "Best Performance: " << bestPerformance << std::endl;
    }
};

int main() {
    std::string name;
  int a;
    std::cout << "Enter cricketer's name: ";
    std::cin >> name;
  

    Batsman batsman(name,a);
    batsman.inputData();
    batsman.calculateAverageRuns();
    batsman.displayData(); 

    return 0;
}