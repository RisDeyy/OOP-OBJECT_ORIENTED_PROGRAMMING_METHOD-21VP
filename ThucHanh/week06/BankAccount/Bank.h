#include <bits/stdc++.h>

using namespace std;

class BankAccount{
    private:
        string account_Number;
        string name_Owner;
        string social_ID_Owner;
        int static balance;
    public:
        void inPut();
        void Print();
        int get_Balance();
        void deposit_Money(int money);
        void withdraw_Money(int money);
        int current_Balance();
};

class SavingBankAccount:public BankAccount{
    private:
        float static interestRate;
        int Period;
        int numOf_savingMonths;
    public:
        void inPut();
        void Print();
        void set_Rate(float rate);
        float get_Rate();
        void DepositeMoney_to_SavingAccount(int money);
        void Withdraw_from_SavingAccount(int money);
        void withdraw_Immediately(int money);
        int Balance_inSavingAccount_AfterPerioding();
        float Current_interestRate();
};