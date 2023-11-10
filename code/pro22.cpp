// Multilevel Inheritance
#include <iostream>
#include <string>
using namespace std;

class Student {

    int rollNumber;

public:
    Student(int rollNumber)  {
        this->rollNumber=rollNumber;
    }

    void displayStudentInfo() {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Test : public Student {
protected:
    int subject1Marks;
    int subject2Marks;

public:
    Test(int roll, int s1, int s2) : Student(roll), subject1Marks(s1), subject2Marks(s2) {}

    void displayTestInfo() {
        displayStudentInfo();
        std::cout << "Subject 1 Marks: " << subject1Marks << std::endl;
        std::cout << "Subject 2 Marks: " << subject2Marks << std::endl;
    }

    int getTotalMarks() {
        return subject1Marks + subject2Marks;
    }
};

class Result : public Test {
public:
    Result(int roll, int s1, int s2) : Test(roll, s1, s2) {}

    void displayResult() {
        displayTestInfo();
        int totalMarks = getTotalMarks();
        std::cout << "Total Marks: " << totalMarks << std::endl;
    }
};

int main() {
    int roll, s1, s2;

    std::cout << "Enter Roll Number: ";
    std::cin >> roll;
    std::cout << "Enter Marks for Subject 1: ";
    std::cin >> s1;
    std::cout << "Enter Marks for Subject 2: ";
    std::cin >> s2;

    Result result(roll, s1, s2);

    std::cout << "\nStudent Result:\n";
    result.displayResult();

    return 0;
}
