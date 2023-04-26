#include "company.h"

using namespace std;

int main(){
    
    OfficeEmployee e;
    int rate;
    cout << "\nEnter rate per Day: ";
    cin >> rate;
    e.Set_PayRateperDay(rate);
    e.En_inf();
    e.Ex_inf();
    cout << "\nSalary: " << e.salary();

    return 0;
}