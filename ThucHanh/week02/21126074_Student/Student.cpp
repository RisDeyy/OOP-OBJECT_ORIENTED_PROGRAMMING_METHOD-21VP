#include "Student.h"

using namespace std;

Student::Student(){
   fullname = NULL;
   adress = NULL;
   gpa = 0;
}

Student::Student(char *name, char *ad, double gpa){
   fullname = new char[50];
   adress = new char[100];
   strcpy(fullname, name);
   strcpy(adress, ad);
   this -> gpa = gpa;
}

Student::Student(char *name, char *ad){  //hoc sinh duoc gpa = 10
   fullname = new char[50];
   adress = new char[100];
   strcpy(fullname, name);
   strcpy(adress, ad);
   this -> gpa = 10.0;
} 

Student::Student(char *name){ //hoc sinh nghi nhieu/bo hoc
   fullname = new char[50];
   strcpy(fullname, name);
   this -> gpa = 0.0;
}

Student::Student(const Student& st){
   fullname = st.fullname;
   adress = st.adress;
   gpa = st.gpa;
}

Student::~Student(){
   delete fullname;
   delete adress;
   cout << "\nData is deleted!";
}

void Student::inPut_inf(){
   fullname = new char[50];
   adress = new char[100];

   cout << "\nEnter fullname's Student: ";
   cin.getline(fullname, 50);
   cout << "\nEnter adress's Student: ";
   cin.getline(adress, 100);
   cout << "\nEnter gpa's Student: ";
   cin >> gpa;
}

void Student::outPut_inf(){
   cout << "\nFullname: " << fullname;
   cout << "\nAdress: " << adress;
   cout << "\nGPA: " << gpa;
}