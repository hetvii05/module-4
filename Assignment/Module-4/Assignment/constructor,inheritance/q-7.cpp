//7. Write a C++ Program to illustrates the use of Constructors in multilevel
//inheritance
#include <iostream>
using namespace std;

class Base {
public:
    Fun() {
        cout << "base class constructor" << endl;
    }
};

class D1 : public Base {
public:
    D1() {
        cout << "This is d1 class constructor" << endl;
    }
};

class D2 : public D1 {
public:
    D2() {
        cout << "This is d2 class constructor" << endl;
    }
};

 main() {
    D2 obj;
    
}

