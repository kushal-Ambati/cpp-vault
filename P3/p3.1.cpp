#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    // Data members
    string owner;
    double balance;

public:
    // Member function to open bank account
    void openAccount(string name, double initial)
    {
        owner = name;

        if (initial > 0)
            balance = initial;
        else
            balance = 0;
    }

    // Member function to deposit money
    void deposit(double amount)
    {
        if (amount > 0)
            balance = balance + amount;
    }

    // Member function to withdraw money
    bool withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance = balance - amount;
            return true;
        }

        return false;
    }

    // Getter function
    string getOwner()
    {
        return owner;
    }

    // Getter function
    double getBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount account;
    string name;
    double initialDeposit;
    double depositAmount;
    double validWithdrawal;

    // Account holder name
    cout << "Enter account holder name: ";
    getline(cin, name);

    // Initial deposit
    cout << "Enter initial deposit: ";
    cin >> initialDeposit;

    account.openAccount(name, initialDeposit);

    // Deposit
    cout << "Enter amount to deposit: ";
    cin >> depositAmount;

    account.deposit(depositAmount);

    // Withdrawal
    cout << "Enter valid withdrawal amount: ";
    cin >> validWithdrawal;

    if (account.withdraw(validWithdrawal))
    {
        cout << "Withdrawal successful" << endl;
    }
    else
    {
        cout << "Withdrawal failed" << endl;
    }

    // Display account details
    cout << "\n=== ACCOUNT DETAILS ===" << endl;
    cout << "Account holder: " << account.getOwner() << endl;
    cout << "Final balance: " << account.getBalance() << endl;

    return 0;
    
}