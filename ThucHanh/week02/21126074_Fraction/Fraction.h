#include <bits/stdc++.h>
using namespace std;

class Fraction{
    private: 
        int Numerator;
        int Denominator;
    public:
        Fraction();
        Fraction(int num, int den);
        Fraction(const Fraction &f);
        Fraction(string f);
        Fraction(int fraction);
        void Input();
        void Output();
        void Simplify();
        void assign_Num(int Numerator);
        void assign_Den(int Denominator);
        int getNumerator();
        int getDenominator();
        Fraction Add(Fraction f1, Fraction f2);
        Fraction Sub(Fraction f1, Fraction f2);
        Fraction Mul(Fraction f1, Fraction f2);
        Fraction Div(Fraction f1, Fraction f2);
        void comPare(int Numerator_1, int Numerator_2, int Denominator_1, int Denominator_2);
        bool IsPositive();
        bool IsNegative();
        bool IsZero();
        ~Fraction();
};