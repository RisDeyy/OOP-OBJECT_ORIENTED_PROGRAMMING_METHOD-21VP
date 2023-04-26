#include "farm.h"

using namespace std;

DairyCow::DairyCow():Animal(){

}

DairyCow::DairyCow(int ID, float w, float a):Animal(ID, w, a){
    
}

DairyCow::DairyCow(const DairyCow& d):Animal(d){
    
}

void DairyCow::setID(int ID){
    Animal::setID(ID);
}

void DairyCow::setWeight(float w){
    Animal::setWeight(w);
}

void DairyCow::setAge(float a){
    Animal::setAge(a);
}

void DairyCow::En_inf(){
    Animal::En_inf();
}

int DairyCow::getID(){
    return Animal::getID();
}

float DairyCow::getWeight(){
    return Animal::getWeight();
}

float DairyCow::getAge(){
    return Animal::getAge();
}

void DairyCow::Ex_inf(){
    Animal::Ex_inf();
}

bool DairyCow::checkWeight(){
    Animal::checkWeight();
}

bool DairyCow::checkAge(){
    Animal::checkAge();
}

Goat::Goat():Animal(){
    
}

Goat::Goat(int ID, float w, float a):Animal(ID, w, a){
    
}

Goat::Goat(const Goat& g):Animal(g){
    
}

void Goat::setID(int ID){
    Animal::setID(ID);
}

void Goat::setWeight(float w){
    Animal::setWeight(w);
}

void Goat::setAge(float a){
    Animal::setAge(a);
}

void Goat::En_inf(){
    Animal::En_inf();
}

int Goat::getID(){
    return Animal::getID();
}

float Goat::getWeight(){
    return Animal::getWeight();
}

float Goat::getAge(){
    return Animal::getAge();
}

void Goat::Ex_inf(){
    Animal::Ex_inf();
}

bool Goat::checkWeight(){
    Animal::checkWeight();
}

bool Goat::checkAge(){
    Animal::checkAge();
}

void ABCFarm::En_inf(){
    ABCFarm farm;
    DairyCow cow;
    Goat goat;
    int n, m;
    cout << "\nEnter number of cows: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << "\nEnter information of cow " << i+1 << ": ";
        cow.En_inf();
        c.push_back(cow);
    }

    cout << "\nEnter number of goats: ";
    cin >> m;
    for (int i = 0; i < m; i++){
        cout << "\nEnter information of goat " << i+1 << ": ";
        goat.En_inf();
        g.push_back(goat);
    }
}

void ABCFarm::Ex_inf(){
    for(int i = 0; i < c.size(); i++){
        cout << "\nInformation of cow " << i+1 << ": ";
        c[i].Ex_inf();
    }

    for(int i = 0; i < g.size(); i++){
        cout << "\nInformation of goat " << i+1 << ": "; 
        g[i].Ex_inf();
    }
}

void ABCFarm::Ex_inf_byAge(int min, int max){
    for(int i = 0; i < c.size(); i++){
        if (c[i].getAge() >= min && c[i].getAge() <= max){
            cout << "\nInformation of cow " << i+1 << ": ";
            c[i].Ex_inf();
        }
    }

    for(int i = 0; i < g.size(); i++){
        if(g[i].getAge() >= min && g[i].getAge() <= max){
            cout << "\nInformation of goat " << i+1 << ": "; 
            g[i].Ex_inf();
        }
    }
}
