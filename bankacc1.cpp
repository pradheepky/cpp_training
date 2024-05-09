#include <iostream>
#include <string>
using namespace std;

class BankAccount{
    private:
        int balance;
    public:
        BankAccount(int initBalance) : balance(initBalance) {}
        ~BankAccount(){
            cout<<"Destructorcalled"<<endl;
        }
        BankAccount operator+(const BankAccount & OperandTwo) {
            return BankAccount(this->balance + OperandTwo.balance);
        }

        int getBalance() const {
            return balance;
        }
};

int main() {
    BankAccount acc1(1000);
    BankAccount acc2(2000);
    BankAccount acc3 = acc1 + acc2;
    
    cout << "Balance of acc3: " << acc3.getBalance() << endl;
    
    return 0;
}
