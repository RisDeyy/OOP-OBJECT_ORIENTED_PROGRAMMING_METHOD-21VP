#include "MyTime.h"
using namespace std;

int main(){
    MyTime t;
    MyTime(20, 59, 59);
    MyTime("12 : 12 : 12");

    t.inPut();
    t.outPut();

    MyTime t2(t);
    t2.outPut();

    MyTime(0);

    return 0;
}