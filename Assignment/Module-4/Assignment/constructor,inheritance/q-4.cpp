//4. Write a C++ program to implement a class called Bank Account that has
//private member variables for account number and balance. Include
//member functions to deposit and withdraw money from the account.


#include<iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor to initialize account number and balance
    BankAccount(int accountNumber, double balance) {
        this->accountNumber = accountNumber;
        this->balance = balance;
    }

    // Member function to deposit money
     deposit() {
        double depositAmount;
        cout << "Enter deposit amount: ";
        cin >> depositAmount;
        balance += depositAmount; // Add deposit amount to balance
        cout << "Amount deposited: " << depositAmount << endl;
    }

    // Member function to withdraw money
     withdraw() {
        double withdrawAmount;
        cout << "Enter withdrawal amount: ";
        cin >> withdrawAmount;
        if (withdrawAmount > balance) {
            cout << "Insufficient funds!" << endl;
        } else {
            balance -= withdrawAmount; // Deduct withdrawal amount from balance
            cout << "Amount Withdrawn: " << withdrawAmount << endl;
        }
    }

    // Member function to display account details
     display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

 main() {
    // Creating an object of BankAccount and initializing account number and balance
    BankAccount obj(9584655, 10000); 
    obj.deposit();
    obj.withdraw();
    obj.display();
}
