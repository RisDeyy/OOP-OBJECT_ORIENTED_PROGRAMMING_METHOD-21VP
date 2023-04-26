#include "Student.h"
using namespace std;

int main(){
    Student st;

    char name[50] = "Student X";
    char ad[100] = "Adress X";
    Student(name, ad, 9.0);
    Student(name, ad);
    Student(name);

    st.inPut_inf();
    st.outPut_inf();

    Student st2(st);
    st2.outPut_inf();

    return 0;

}