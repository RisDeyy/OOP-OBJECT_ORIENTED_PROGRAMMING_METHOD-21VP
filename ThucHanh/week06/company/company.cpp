#include "company.h"

using namespace std;

int OfficeEmployee::PayRateperDay = 0;

OfficeEmployee::OfficeEmployee():Employee(){
    NumberofWorkingDay = 0;
}

OfficeEmployee::OfficeEmployee(int ID, string name, string date, string add, int num):Employee(ID, name, date, add){
    NumberofWorkingDay = num;
}

OfficeEmployee::OfficeEmployee(const OfficeEmployee& e):Employee(e){
    NumberofWorkingDay = e.NumberofWorkingDay;
}

OfficeEmployee::OfficeEmployee(int ID, string name, string date, int num):Employee(ID, name, date){
    NumberofWorkingDay = num;
}

OfficeEmployee::OfficeEmployee(int ID, string name, int num):Employee(ID, name){
    NumberofWorkingDay = num;
}

void OfficeEmployee::En_inf(){
    Employee::En_inf();
    cout << "\nEnter Number of working days: ";
    cin >> NumberofWorkingDay;
}

void OfficeEmployee::Set_PayRateperDay(int rate){
    PayRateperDay = rate;
}

void OfficeEmployee::Ex_inf(){
    Employee::Ex_inf();
    cout << "\nNumber of working days: " << NumberofWorkingDay;
}

int OfficeEmployee::salary(){
    return NumberofWorkingDay * PayRateperDay;
}

int Worker::PayRateperItem = 0;

Worker::Worker():Employee(){
    NumberofProduct = 0;
}

Worker::Worker(int ID, string name, string date, string add, int num):Employee(ID, name, date, add){
    NumberofProduct = num;
}

Worker::Worker(const Worker& w):Employee(w){
    NumberofProduct = w.NumberofProduct;
}

Worker::Worker(int ID, string name, string date, int num):Employee(ID, name, date){
    NumberofProduct = num;
}

Worker::Worker(int ID, string name, int num):Employee(ID, name){
    NumberofProduct = num;
}

void Worker::En_inf(){
    Employee::En_inf();
    cout << "\nEnter Number of products: ";
    cin >> NumberofProduct;
}

void Worker::Set_PayRateperItem(int rate){
    PayRateperItem = rate;
}

void Worker::Ex_inf(){
    Employee::Ex_inf();
    cout << "\nNumber of products: " << NumberofProduct;
}

int Worker::salary(){
    return NumberofProduct * PayRateperItem;
}