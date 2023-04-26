#include <bits/stdc++.h>

using namespace std;

class Animal{
    private:
        int id;
        float weight;
        float age;
    public:
        Animal(){
            id = 0;
            weight = 0;
            age = 0;
        }

        Animal(int ID, float w, float a){
            id = ID;
            weight = w;
            age = a;
        }

        Animal(const Animal& a){
            id = a.id;
            weight = a.weight;
            age = a.age;
        }

        ~Animal(){

        }

        void setID(int ID){
            id = ID;
        }

        void setWeight(float w){
            weight = w;
        }

        void setAge(float a){
            age = a;
        }

        int getID(){
            return id;
        }

        float getWeight(){
            return weight;
        }

        void En_inf(){
            cout << "\nEnter id: ";
            cin >> id;
            cout << "Enter weight: ";
            cin >> weight;
            cout << "Enter age: ";
            cin >> age;
        };

        string toString(){ //tostring
            string str1 = "\nID: " + to_string(id);
            string str2 = "\nWeight: " + to_string(weight) + " kg";
            string str3 = "\nAge: " + to_string(age) + " years old";
            string st1, st2;
            st1 = str1.append(str2);
            st2 = st1.append(str3);

            return st2;
        }  

        float getAge(){
            return age;
        }

        bool checkWeight(){
            if (getWeight() >= 0){
                return true;
            }return false;
        }

        bool checkAge(){
            if (getAge() >= 0){
                return true;
            }return false;
        }

        void Ex_inf(){
            cout << "\nID: " << id;
            cout << "\nWeight: " << weight << " kg";
            cout << "\nAge: " << age << " years old";
        }
};

class DairyCow:public Animal{
    public:
    DairyCow();
    DairyCow(int ID, float w, float a);
    DairyCow(const DairyCow& d);
    void setID(int ID);
    void setWeight(float w);
    void setAge(float a);
    int getID();
    float getWeight();
    float getAge();
    bool checkWeight();
    bool checkAge();
    void En_inf();
    void Ex_inf();
};

class Goat:public Animal{
    public:
    Goat();
    Goat(int ID, float w, float a);
    Goat (const Goat& g);
     void setID(int ID);
    void setWeight(float w);
    void setAge(float a);
    int getID();
    float getWeight();
    float getAge();
    bool checkWeight();
    bool checkAge();
    void En_inf();
    void Ex_inf();
};

class ABCFarm{
    private:
        vector<DairyCow> c;
        vector<Goat> g;
    public:
        void En_inf();
        void Ex_inf();
        void Ex_inf_byAge(int min, int max);
};

