#include "Lecturer.h"
using namespace std;

int main(){
    Lecturer l;
    string name = "Lecturer X";
    string deg = "BSc";
    Lecturer(name, deg, 5);
    Lecturer(name, deg);
    Lecturer(name);

    l.inPut_inf();
    l.outPut_inf();

    Lecturer l2(l);
    l.~Lecturer();

    return 0;
}