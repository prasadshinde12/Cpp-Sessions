#include <iostream>
#include <string>
using namespace std;


class Person {
protected:
    string name;
    int age;

public:
    void getPersonData() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPersonData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : virtual public Person {
protected:
    int rollNo;

public:
    void getStudentData() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
    }

    void displayStudentData() {
        cout << "Roll No: " << rollNo << endl;
    }
};


class Employee : virtual public Person {
protected:
    int employeeId;

public:
    void getEmployeeData() {
        cout << "Enter Employee ID: ";
        cin >> employeeId;
    }

    void displayEmployeeData() {
        cout << "Employee ID: " << employeeId << endl;
    }
};

class TeachingAssistant : public Student, public Employee {
public:
    void getData() {
        getPersonData();
        getStudentData();
        getEmployeeData();
    }

    void displayData() {
        cout << "\n--- Teaching Assistant Details ---" << endl;

        displayPersonData();
        displayStudentData();
        displayEmployeeData();
    }
};

int main() {
    TeachingAssistant ta;

    ta.getData();
    ta.displayData();

    return 0;
}