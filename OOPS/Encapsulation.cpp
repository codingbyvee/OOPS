#include <iostream>

class BankAccount {
private:
    double balance;

public:
    void setBalance(double amount) {
        if (amount >= 0) {
            balance = amount;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account;
    account.setBalance(1000);
    std::cout << "Account balance: $" << account.getBalance() << std::endl;
    return 0;
}
