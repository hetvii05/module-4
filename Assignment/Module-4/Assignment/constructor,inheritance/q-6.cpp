//q-6. Write a C++ program to implement a class called Employee that has
//private member variables for name, employee ID, and salary. Include
//member functions to calculate and set salary based on employee
//performance. Using of constructor.

#include<iostream>
using namespace std;

class Employee{
private:
    string name;
    int id;
    double salary;
    char grade;

public:
    // Public constructor
    Employee() {
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Employee Salary: ";
        cin >> salary;
        cout << "Enter Grade: ";
        cin >> grade;

        // Calculate new salary based on grade
        if (grade == 'a') {
            salary *= 3;
            cout << "New salary: " << salary << endl;
        } else if (grade == 'b') {
            salary *= 2;
            cout << "New salary: " << salary << endl;
        } else if (grade == 'c') {
            
            cout << "New salary: " << salary << endl;
        } else {
            cout << "Invalid Grade" << endl;
        }
    }
};

main() { // Define return type for main function
    Employee obj;
    
}
