#include <bits/stdc++.h>

using namespace std;

class Employee{
    protected:
        int id;
        string full_Name;
        string hire_Day;
        string address;
    public:
        Employee(){
            id = 0;
            full_Name = full_Name.empty();
            hire_Day = hire_Day.empty();
            address = address.empty();
        }

        Employee(int ID, string name, string date, string add){
            id = ID;
            full_Name.assign(name);
            hire_Day.assign(date);
            address.assign(add);
        }

        Employee(const Employee& e){
            id = e.id;
            full_Name = e.full_Name;
            hire_Day = e.hire_Day;
            address = e. address;
        }

        Employee(int ID, string name, string date){ //everyone who live in Ho chi Minh city;
            id = ID;
            full_Name.assign(name);
            hire_Day.assign(date);

            string add = "Ho Chi Minh city";
            address.assign(add);
        }

        Employee(int ID, string name){ //everyone who born 1.1.2003 and live in Ha Noi 
            id = ID;
            full_Name.assign(name);
            string date = "01/01/2003";
            string add = "Ha Noi";

            hire_Day.assign(date);
            address.assign(add);
        }

        ~Employee(){
            full_Name.erase();
            full_Name = full_Name.empty();
            hire_Day.erase();
            hire_Day = hire_Day.empty();
            address.erase();
            address = address.empty();
        }

        virtual void En_inf() = 0;
        virtual void Ex_inf() = 0;
        virtual int salary() = 0;
};

class OfficeEmployee:public Employee{
    private:
        int NumberofWorkingDay;
        //int static PayRateperDay;
    public:
        OfficeEmployee();
        OfficeEmployee(int ID, string name, string date, string add, int num);
        OfficeEmployee(const OfficeEmployee &e);
        OfficeEmployee(int ID, string name, string date, int num);
        OfficeEmployee(int ID, string name, int num);
        void En_inf();
        // void Set_PayRateperDay(int rate);
        void Ex_inf();
        int salary();
};

class Worker:public Employee{
    private:
        int NumberofProduct;
        //int static PayRateperItem;
    public:
        Worker();
        Worker(int ID, string name, string date, string add, int num);
        Worker(const Worker &w);
        Worker(int ID, string name, string date, int num);
        Worker(int ID, string name, int num);
        void En_inf();
        void Ex_inf();
        // void Set_PayRateperItem(int rate);
        int salary();
};

class ABCCompany{
    private:
        vector<Employee*> employee;
    public: 
        void En_inf_List();
        void Ex_inf_List();
        int total_Salary();
        vector<int> find_indexMaxSalary_Employee();
        void Ex_inf_List_maxSalary();
};
