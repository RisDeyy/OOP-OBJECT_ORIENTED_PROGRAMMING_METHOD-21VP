#include "Farm.h"
#include <string>
using namespace std;

int DairyCow::ID = 0;
DairyCow::DairyCow(){
    weight = 0;
    age = 0;
}

DairyCow::DairyCow(float w, float a){
    weight = w;
    age = a;
}

DairyCow::DairyCow(const DairyCow& cow){
    weight = cow.weight;
    age = cow.age;
}

DairyCow::~DairyCow(){

}

void DairyCow::Set_ID(int id){
    ID = id;
}

void DairyCow::Input(){
    cout << "Enter weight, Age of Cow: ";
    cin >> weight >> age;
}

int DairyCow::GetID(){
    return ID;
}

float DairyCow::GetWeight(){
    return weight;
}

float DairyCow::GetAge(){
    return age;
}

void DairyCow::Set_weight(float w){
    this -> weight = w;
}

void DairyCow::Set_age(float a){
    this -> age = a;
}

string DairyCow::toString(){
    string str1 = "\nID: " + to_string(ID);
    string str2 = "\nWeight: " + to_string(weight) + " kg";
    string str3 = "\nAge: " + to_string(age) + " years old";
    string st1, st2;
    st1 = str1.append(str2);
    st2 = st1.append(str3);

    return st2;
}

DairyCow DairyCow::operator=(const DairyCow& cow){
    weight = cow.weight;
    age = cow.age;
    return *this;
}

bool DairyCow::Check(){
    if(weight >= 0 && age >= 0){
        return true;
    }return false;
}

int Goat::ID = 0;
Goat::Goat(){
    weight = 0;
    age = 0;
}

Goat::Goat(float w, float a){
    weight = w;
    age = a;
}

Goat::Goat(const Goat& g){
    weight = g.weight;
    age = g.age;
}

Goat::~Goat(){

}

void Goat::Input(){
    cout << "Enter weight, Age of Goat: ";
    cin >> weight >> age;
}

int Goat::GetID(){
    return ID;
}

float Goat::GetWeight(){
    return weight;
}

float Goat::GetAge(){
    return age;
}

void Goat::Set_weight(float w){
    this -> weight = w;
}

void Goat::Set_age(float a){
    this -> age = a;
}

void Goat::Set_ID(int id){
    ID = id;
}

string Goat::toString(){
    string str1 = "\nID: " + to_string(ID);
    string str2 = "\nWeight: " + to_string(weight) + " kg";
    string str3 = "\nAge: " + to_string(age) + " years old";
    string st1, st2;
    st1 = str1.append(str2);
    st2 = st1.append(str3);

    return st2;
}

Goat Goat::operator=(const Goat& g){
    weight = g.weight;
    age = g.age;
    return *this;
}

bool Goat::Check(){
    if(weight >= 0 && age >= 0){
        return true;
    }return false;
}

void ABCFarm::Input(){
    DairyCow c;
    Goat g;
    int n, m;
    int id;

    cout << "\nEnter Information of Cows: ";
    cout << "\nEnter Number of Cows: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << "\nInformation of Cow " << i + 1 << ": ";
        cout << "\nEnter ID: ";
        cin >> id;
        c.Set_ID(id);
        c.Input();
        cow.push_back(c);
    }

    cout << "\nEnter Information of Goats: ";
    cout << "\nEnter Number of Goats: ";
    cin >> m;
    for (int j = 0; j < m; j++){
        cout << "\nInformation of Goat " << j + 1 << ": ";
        cout << "\nEnter ID: ";
        cin >> id;
        g.Set_ID(id);
        g.Input();
        goat.push_back(g);
    }
}

//khi su dung ham output nay can bo di static, neu khong, id se bi gan vơi gia tri cua con vat nhap sau cung
void ABCFarm::Output(){
    
    for (int i = 0; i < cow.size(); i++){
        cout << "\nInformation of Cow " << i + 1 << ": ";
        //DairyCow c;
        cout << cow[i].toString();
    }
    
    for (int i = 0; i < goat.size(); i++){
        //Goat g;
        cout << "\nInformation of Goat " << i + 1 << ": ";
        cout << goat[i].toString();
    }
    
}

void ABCFarm::OutputByAge(int min, int max){
    
    for (int i = 0; i < cow.size(); i++){
        if (cow[i].GetAge() >= min && cow[i].GetAge() <= max){
            cout << "\nInformation of Cow " << i + 1 << ": ";
            cout << cow[i].toString();
        }
    }
    
    for (int i = 0; i < goat.size(); i++){
        if (goat[i].GetAge() >= min && goat[i].GetAge() <= max){
            cout << "\nInformation of Goat " << i + 1 << ": ";
            cout << goat[i].toString();
        }
    }
}