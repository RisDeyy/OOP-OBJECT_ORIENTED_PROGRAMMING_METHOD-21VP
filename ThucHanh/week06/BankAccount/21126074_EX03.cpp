#include "Bank.h"

using namespace std;

int main(){
    BankAccount b;
    // b.inPut();
    // b.Print();
    // cout << "\nCurrent balance: " << b.current_Balance() << " VND";
    // b.deposit_Money(500000);
    // cout << endl;
    // cout << b.current_Balance();
    // b.withdraw_Money(6000);

    SavingBankAccount sb;
    float rate;
    cout << "\nEnter interest rate: ";
    cin >> rate;
    sb.set_Rate(rate);
    sb.inPut();
    sb.Print();
    sb.DepositeMoney_to_SavingAccount(5000000);
    sb.Withdraw_from_SavingAccount(50000);
    //sb.withdraw_Immediately(5000000);
    cout << "\nCurrent balance: " << sb.Balance_inSavingAccount_AfterPerioding() << " VND";
    cout << "\nCurrent interest rate: " << sb.Current_interestRate()*100 << "%/year";
}
