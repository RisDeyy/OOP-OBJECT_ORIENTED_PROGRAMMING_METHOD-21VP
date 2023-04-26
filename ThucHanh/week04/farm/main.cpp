#include "Farm.h"
using namespace std;

int main(){
    // DairyCow cow;
    // Goat goat;
    // int id1, id2;
    // cout << "\nEnter ID Cow, Goat: ";
    // cin >> id1 >> id2;
    // DairyCow::Set_ID(id1);
    // Goat::Set_ID(id2);
    // cow.Input();
    // goat.Input();
    // cout << "\n\nDairy Cow" << cow.toString();
    // cout << "\n\nGoat" << goat.toString();

    ABCFarm farm;
    int choice;
    cout << "\n1. Choose Dairy Cows.";
    cout << "\n2. Choose Goats.";
    cout << "\n3. Choose both Cows and Goats.";
    cout << "\nYour choice is: ";
    cin >> choice;
    int n, m;
    
    DairyCow c;
    Goat g;
    farm.Input();
    farm.Output();
    cout << "\nOutput by Age: ";
    // farm.OutputByAge(2, 4);
    return 0;
}