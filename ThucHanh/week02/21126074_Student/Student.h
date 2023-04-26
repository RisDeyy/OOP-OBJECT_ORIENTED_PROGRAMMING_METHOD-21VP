#include <bits/stdc++.h>

using namespace std;

class Student{
    private:
        char *fullname;
        char *adress;
        double gpa;
    public:
        Student();
        Student(char *name, char *ad, double gpa);
        Student(char *name, char *ad);
        Student(char *name);
        Student(const Student& st);
        void inPut_inf();
        void outPut_inf();
        ~Student();
};