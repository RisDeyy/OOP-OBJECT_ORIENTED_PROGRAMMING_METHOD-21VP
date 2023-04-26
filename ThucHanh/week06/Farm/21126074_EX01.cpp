#include "farm.h"

using namespace std;

int main(){
    cout << "\nDAIRYCOW'S INFORMATION: ";
    DairyCow d;
    d.En_inf();
    d.Ex_inf();

    cout << "\nGOAT'S INFORMATION: ";
    Goat g;
    g.En_inf();
    g.Ex_inf();

    ABCFarm farm;
    farm.En_inf();
    farm.Ex_inf();
    farm.Ex_inf_byAge(2, 4);
}