#include "company.h"

using namespace std;

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
    cout << "\nEnter id: ";
    cin >> id;
    cin.ignore();
    cout << "Enter full name: ";
    getline(cin, full_Name);
    cout << "Enter hire day: ";
    getline(cin, hire_Day);
    cout << "Enter address: ";
    getline(cin, address);
    cout << "Enter Number of working days: ";
    cin >> NumberofWorkingDay;
}

void OfficeEmployee::Ex_inf(){
    cout << "\nID: " << id;
    cout << "\nFull name: " << full_Name;
    cout << "\nHire day: " << hire_Day;
    cout << "\nAddress: " << address;
    cout << "\nNumber of working days: " << NumberofWorkingDay << " day(s)";
    cout << "\nSalary: " << salary() << " vnd";
    cout << endl;
}

int OfficeEmployee::salary(){
    return NumberofWorkingDay * 300000;
}

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
    cout << "\nEnter id: ";
    cin >> id;
    cin.ignore();
    cout << "Enter full name: ";
    getline(cin, full_Name);
    cout << "Enter hire day: ";
    getline(cin, hire_Day);
    cout << "Enter address: ";
    getline(cin, address);
    cout << "Enter Number of products: ";
    cin >> NumberofProduct;
}

void Worker::Ex_inf(){
    cout << "\nID: " << id;
    cout << "\nFull name: " << full_Name;
    cout << "\nHire day: " << hire_Day;
    cout << "\nAddress: " << address;
    cout << "\nNumber of products: " << NumberofProduct << " product(s)";
    cout << "\nSalary: " << salary() << " vnd";
    cout << endl;
}

int Worker::salary(){
    return NumberofProduct * 20000;
}

void ABCCompany::En_inf_List(){
    int i = 0;
    int n;
    cout << "\nEnter number of employees: ";
    cin >> n;
    for (i = 0; i < n; i++){
        cout << "\nYou want to enter information of Office employee or Worker?";
        cout << "\n1. Chosse Office Employee";
        cout << "\n2. Chosse Worker";
        cout << "\nYour choice? ";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:{
            cout << "\nEnter information of office employee : ";
            Employee *e = new OfficeEmployee;
            e -> En_inf();
            employee.push_back(e);
            break;           
        }

        case 2:{
            cout << "\nEnter information of worker : ";
            Employee *w = new Worker;
            w -> En_inf();
            employee.push_back(w);
        }

        default:
            break;
        }
    }
}

void ABCCompany::Ex_inf_List(){
    for(int i = 0; i < employee.size(); i++){
        cout << "\nInformation of employee " << i+1 << ": ";
        employee[i] -> Ex_inf();
    }
}

int ABCCompany::total_Salary(){
    int sum_Salary = 0;
    for(int i = 0; i < employee.size(); i++){
        sum_Salary += (employee[i] -> salary());
    }
    return sum_Salary;
}

vector<int> ABCCompany::find_indexMaxSalary_Employee(){
    vector<int> indexMax_Salary_Employee; 
    int max_Salary = employee[0] -> salary();
    for (int i = 0; i < employee.size(); i++){
        if (max_Salary < employee[i] -> salary()){
            max_Salary = employee[i] -> salary();
        }
    }

    for (int i = 0; i < employee.size(); i++){
        if (employee[i] -> salary() == max_Salary){
            indexMax_Salary_Employee.push_back(i);
        }
    }
    return indexMax_Salary_Employee;
}

void ABCCompany::Ex_inf_List_maxSalary(){
    vector <int> index = find_indexMaxSalary_Employee();
    for(int i = 0; i < index.size(); i++){
        employee[index[i]] -> Ex_inf();
    }
}