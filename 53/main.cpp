#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int accNumber, double initialBalance);  // Constructor declaration

    void deposit(double amount);  // Function declarations
    void withdraw(double amount);
    void displayAccountInfo();
};

// Main function
int main() {
    BankAccount account1("Akshat Tomar", 12345, 5000.0);

    int choice;
    double amount;

    while (true) {
        // Display menu
        cout << "\nBanking System Menu:\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. View Account Info\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
            
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account1.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account1.withdraw(amount);
                break;
            case 3:
                account1.displayAccountInfo();
                break;
            case 4:
                cout << "Thank you for using the banking system!" << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}

// Constructor definition
BankAccount::BankAccount(string name, int accNumber, double initialBalance) {
    accountHolderName = name;
    accountNumber = accNumber;
    balance = initialBalance;
}

// Function definitions
void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        cout << "Amount deposited successfully! New balance: " << balance << endl;
    } else {
        cout << "Invalid deposit amount!" << endl;
    }
}

void BankAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Amount withdrawn successfully! Remaining balance: " << balance << endl;
    } else {
        cout << "Invalid withdrawal amount or insufficient balance!" << endl;
    }
}

void BankAccount::displayAccountInfo() {
    cout << "Account Holder: " << accountHolderName << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Balance: " << balance << endl;
}
