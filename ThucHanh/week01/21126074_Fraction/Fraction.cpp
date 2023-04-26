#include "Fraction.h"

using namespace std;

void Fraction::Input(){
    cout << "\nEnter Numerator: ";
    cin >> Numerator;
    cout << "\nEnter Denominator: ";
    cin >> Denominator;
}

void Fraction::Simplify(){

    int a = abs(Numerator);
    int b = abs(Denominator);
    if(a==0) 
        return;
    while(a!=b)
        if(a>b) 
            a -= b;
        else b -= a;
    Numerator /= a;
    Denominator /= a;
    cout << " = " << this -> Numerator << "/" << this -> Denominator; 
}

void Fraction::Output(){
    if (Denominator == 0){
        cout << "\n -> Math error";
    }else{
    cout << "\nFraction is: " << Numerator << "/" << Denominator;
    }
}

void Fraction::assign_Num(int Numerator){
    this -> Numerator = Numerator;
}

void Fraction::assign_Den(int Denominator){
    this -> Denominator = Denominator;
}

int Fraction::getNumerator(){
    return Numerator;
}

int Fraction::getDenominator(){
    return Denominator;
}

void Fraction::comPare(int Numerator_1, int Numerator_2, int Denominator_1, int Denominator_2){
    float tmp1 = (float)Numerator_1 / (float)Denominator_1;
    double tmp2 = (float)Numerator_2 / (float)Denominator_2;
    if (tmp1 > tmp2){
        cout << "\n" << Numerator_1 << "/" << Denominator_1 << " > " << Numerator_2 << "/" << Denominator_2;
    }else if (tmp1 < tmp2){
        cout << "\n" << Numerator_1 << "/" << Denominator_1 << " < " << Numerator_2 << "/" << Denominator_2;
    }else if (tmp1 = tmp2){
        cout << "\n" << Numerator_1 << "/" << Denominator_1 << " = " << Numerator_2 << "/" << Denominator_2;
    }
    
}

bool Fraction::IsPositive(){
    if ((Numerator > 0 && Denominator > 0) || (Numerator < 0 && Denominator < 0)){
        return true;
    }return false;
}

bool Fraction::IsNegative(){
    if ((Numerator < 0 && Denominator > 0) || (Numerator > 0 && Denominator < 0)){
        return true;
    }return false;
}

bool Fraction::IsZero(){
    if (Numerator = 0){
        return true;
    }return false;
}