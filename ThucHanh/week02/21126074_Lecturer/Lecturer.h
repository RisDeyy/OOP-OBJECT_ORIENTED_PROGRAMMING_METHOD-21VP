#include <bits/stdc++.h>

using namespace std;

class Lecturer{
    private:
        string fullname;
        string degree;
        int num_of_taken_courses;
    public:
        Lecturer();
        Lecturer(string name, string deg, int num);
        Lecturer(string name, string deg);
        Lecturer(string name);
        Lecturer(const Lecturer& l);
        void inPut_inf();
        void outPut_inf();
        ~Lecturer();
};