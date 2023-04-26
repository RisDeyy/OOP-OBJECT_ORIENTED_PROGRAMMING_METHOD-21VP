#include "Bank.h"

using namespace std;

int BankAccount::balance = 0;

void BankAccount::inPut(){
    //cin.ignore();
    cout << "\nEnter account number: ";
    getline(cin, account_Number);
    cout << "Enter name of owner: ";
    getline(cin, name_Owner);
    cout << "Enter social ID of owner: ";
    getline(cin, social_ID_Owner);
}

void BankAccount::Print(){
    cout << "\nAccount Number: " << account_Number;
    cout << "\nOwner's Name: " << name_Owner;
    cout << "\nSocial ID of Owner: " << social_ID_Owner;
    cout << "\nBalance: " << balance << " VND";
}

int BankAccount::get_Balance(){
    return balance;
}

void BankAccount::deposit_Money(int money){
    cout << "\nMinimum limit is 10.000VND and Maximum limit is 2.000.000.000(in 1 transaction).";
    if (money < 10000){
        cout << "\nDeposit amount must be more than 10.000 VND!";
    }else if(money >= 10000 && money <=2000000000){
        balance = get_Balance() + money;
        cout << "\nRecharge successfully! Current balance is " << current_Balance() << " VND";
    }else if(money > 2000000000){
        cout << "\nThe limit has been exceeded!";
    }
    
}

void BankAccount::withdraw_Money(int money){
    if(get_Balance() <=50000){
        cout << "\nError: Insufficient balance, you can't withdraw!";
    }else{
        cout << "\nMinimum limit is 10.000VND and Maximum limit is 2.000.000.000(in 1 transaction).";
        if (money < 10000){
            cout << "\nDeposit amount must be more than 10.000 VND!";
        }else if(money >= 10000 && money <=2000000000){
            if (money >= get_Balance()){
                cout << "\nError: Insufficient balance, you can't withdraw!";
            }else{
                if((get_Balance() - money) < 50000){
                    cout << "\nError: Insufficient balance, you can't withdraw!";
                }else{
                    balance = get_Balance() - money;
                    //cout << "\nWithdraw successfully! Current balance is " << current_Balance() << " VND";
                    cout << "\nWithdraw successfully!";
                }
            }
        }else if(money > 2000000000){
            cout << "\nThe limit has been exceeded!";
        }
    }
}

int BankAccount::current_Balance(){
    return get_Balance();
}

float SavingBankAccount::interestRate = 0;

void SavingBankAccount::inPut(){
    cin.ignore();
    BankAccount::inPut();
    cout << "\nEnter Period: ";
    cin >> Period;
    cout << "\nEnter number of saving months: ";
    cin >> numOf_savingMonths;
}

void SavingBankAccount::Print(){
    BankAccount::Print();
    cout << "\nPeriod: " << Period;
    cout << "\nNumber of saving months: " << numOf_savingMonths;
    cout << "\nAnnual interest rate: " << interestRate*100 << "%/year";
}

void SavingBankAccount::set_Rate(float rate){
    interestRate = rate;
}

float SavingBankAccount::get_Rate(){
    return interestRate;
}

void SavingBankAccount::DepositeMoney_to_SavingAccount(int money){
    if(numOf_savingMonths < Period){
        cout << "\nError: Not due yet! You can't recharge money to saving account!";
        //cout << "\nYour current interest is " << BankAccount::current_Balance() + (interestRate/12)*numOf_savingMonths << " VND!";
    }else{
        BankAccount::deposit_Money(money);
        cout << "\nYou'll get " << int(BankAccount::current_Balance() + BankAccount::current_Balance()*(interestRate/12)*Period) << " VND after perioding!";
    }
}

void SavingBankAccount::Withdraw_from_SavingAccount(int money){
    if(numOf_savingMonths < Period){
        cout << "\nError: Not due yet! You can't withdraw money from saving account!";
        //cout << "\nYour current interest is " << BankAccount::current_Balance() + (interestRate/12)*numOf_savingMonths << " VND!";
    }else{
        BankAccount::withdraw_Money(money);
        //BankAccount::current_Balance() + (interestRate/12)*Period;
    }
}

void SavingBankAccount::withdraw_Immediately(int money){
    cout << "\nYou are withdrawing money before perioding...";
    int interest = (int)(BankAccount::current_Balance()*(0.02/12)*numOf_savingMonths);
    cout << "\nYou have received " << (int)(money + interest) << " VND!"; 
}

int SavingBankAccount::Balance_inSavingAccount_AfterPerioding(){
    return (int)(BankAccount::current_Balance()*(1 + (interestRate/12)*Period));
}

float SavingBankAccount::Current_interestRate(){
    return get_Rate();
}
