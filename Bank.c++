
#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;

public:
    BankAccount() {
        balance = 0;
    }

    void deposit() {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
    }

    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    int choice;

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Show Balance\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: acc.deposit(); break;
            case 2: acc.withdraw(); break;
            case 3: acc.showBalance(); break;
            case 4: cout << "Exit"; break;
            default: cout << "Invalid choice"; 
        }

    } while (choice != 4);

    return 0;
}