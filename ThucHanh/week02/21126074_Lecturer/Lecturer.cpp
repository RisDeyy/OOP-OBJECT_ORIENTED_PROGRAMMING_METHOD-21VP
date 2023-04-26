#include "Lecturer.h"

using namespace std;

Lecturer::Lecturer(){
    fullname = fullname.empty();
    degree = degree.empty();
    num_of_taken_courses = 0;
}

Lecturer::Lecturer(string name, string deg, int num){
    fullname.assign(name);
    degree.assign(deg);
    num_of_taken_courses = num;
    //cout << name << "\t" << deg << "\t" << num_of_taken_courses;
}

Lecturer::Lecturer(string name, string deg){//giang vien co nhieu khoa day nhat
    fullname.assign(name);
    degree.assign(deg);
    num_of_taken_courses = 14;
}

Lecturer::Lecturer(string name){//Giang vien co it khoa day nhat
    fullname.assign(name);
    num_of_taken_courses = 1;
}

Lecturer::Lecturer(const Lecturer& l){
    fullname = l.fullname;
    degree = l.degree;
    num_of_taken_courses = l.num_of_taken_courses;
}

Lecturer::~Lecturer(){
    fullname.erase();
    degree.erase();
    cout << "\nData is deleted!";
}

void Lecturer::inPut_inf(){
    cout << "\nEnter fullname's Lecturer: ";
    getline(cin, fullname);
    cout << "\nEnter degree's Lecturer: ";
    getline(cin, degree);
    cout << "\nEnter number of taken courses: ";
    cin >> num_of_taken_courses;
}

void Lecturer::outPut_inf(){
    cout << "\nFullname: " << fullname;
    cout << "\nDegree: " << degree;
    cout << "\nNumber of taken courses: " << num_of_taken_courses;
}