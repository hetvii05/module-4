//3. Write a C++ program to create a class called Car that has private
//member variables for company, model, and year. Implement member
//functions to get and set these variables.


#include<iostream>
using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    // Member function to set company
     setCompany(string comp) {
        this->company = comp;
    }

    // Member function to get company
    getCompany() {
        cout << "Company: " << this->company << endl;
    }

    // Member function to set model
     setModel(string mdl) {
        this->model = mdl;
    }

    // Member function to get model
     getModel() {
        cout << "Model: " << this->model << endl;
    }

    // Member function to set year
     setYear(int yr) {
        this->year = yr;
    }

    // Member function to get year
     getYear() {
        cout << "Year: " << this->year << endl;
    }
};

 main() {
    Car myCar;

    // Setting car details
    myCar.setCompany("Toyota");
    myCar.setModel("Camry");
    myCar.setYear(2022);

    // Getting car details
    myCar.getCompany();
    myCar.getModel();
    myCar.getYear();

    
}
