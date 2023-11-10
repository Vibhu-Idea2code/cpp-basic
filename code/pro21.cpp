#include <iostream>
#include <string>
using namespace std;

class Person {

    string name;
    int age;

public:
   Person(string n, int age) {
        this->name=n;
        this->age=age;
    }
    void readData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void displayData() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Student : public Person {

    double percentage;

public:

    Student(string name, int age, double percentage) : Person(name, age) {
        this->percentage=percentage;
    }

  

    void displayData() {
        // Person::displayData(); 
    cout << "Percentage: " << percentage << "%" << std::endl;
    }
};

class Teacher : public Person {
private:
    double salary;

public:

    Teacher(string name, int age, double salary) : Person(name, age) {
        this->salary=salary;
    }
   
    void displayData() {
        Person::displayData();
        cout << "Salary: $" << salary << std::endl;
    }
};
class Emp :public Student,public Teacher{
    public: Emp(string name,int age,float percentage,float salary):  
    Student(name,age,percentage),Teacher(name,age,percentage){}
    void displayData(){
        Student::displayData();
        Teacher::displayData();

    }
};
int main() {
    Emp e("vibhu", 22, 85.5,1000000);
    e.displayData();
    return 0;
}