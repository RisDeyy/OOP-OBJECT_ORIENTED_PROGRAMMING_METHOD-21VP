#include "Fraction.h"

using namespace std;

Fraction::Fraction(){
    Numerator = 0;
    Denominator = 1;
}

Fraction::Fraction(int num, int den){
    Numerator = num;
    Denominator = den;
}

Fraction::Fraction(const Fraction &f){
    Numerator = f.Numerator;
    Denominator = f.Denominator;
    cout << Numerator << "\t" << Denominator;
}

Fraction::Fraction(string f){   //chi ap dung cho nhap chuoi duoi dang a/b với 0 <= a,b < 10 
    //doi tu chuoi char sang int: value - 48
    Numerator = f.front() - 48;
    Denominator = f.back() - 48;
    //cout << Numerator << "/" << Denominator;
}

Fraction:: Fraction(int fraction){
    Numerator = fraction;
    Denominator = 1;
}

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

Fraction Fraction::Add(Fraction f1, Fraction f2){
    Fraction result;
    result.Numerator = (f1.Numerator*f2.Denominator + f1.Denominator*f2.Numerator);
    result.Denominator = (f1.Denominator*f2.Denominator);
    return result;
}

Fraction Fraction::Sub(Fraction f1, Fraction f2){
    Fraction result;
    result.Numerator = (f1.Numerator*f2.Denominator - f1.Denominator*f2.Numerator);
    result.Denominator = (f1.Denominator*f2.Denominator);
    return result;
}

Fraction Fraction::Mul(Fraction f1, Fraction f2){
    Fraction result;
    result.Numerator = (f1.Numerator*f2.Numerator);
    result.Denominator = (f1.Denominator*f2.Denominator);
    return result;
}

Fraction Fraction::Div(Fraction f1, Fraction f2){
    Fraction result;
    result.Numerator = (f1.Numerator*f2.Denominator);
    result.Denominator = (f1.Denominator*f2.Numerator);
    return result;
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

Fraction::~Fraction(){
    cout << "\nData is deleted!";
}