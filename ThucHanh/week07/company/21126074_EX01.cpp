#include "company.h"

using namespace std;

int main(){
    // Employee *e = new OfficeEmployee;
    // e -> En_inf();
    // e -> Ex_inf();

    ABCCompany c;
    c.En_inf_List();
    c.Ex_inf_List();
    cout << "\nTotal salary the company has to pay in a month: " << c.total_Salary() << " vnd";
    cout << endl;
    cout << "\nList of employees have max salary: ";
    c.Ex_inf_List_maxSalary();

    return 0;
}