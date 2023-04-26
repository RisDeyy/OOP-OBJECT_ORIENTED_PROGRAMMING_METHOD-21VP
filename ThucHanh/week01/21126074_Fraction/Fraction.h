#include <bits/stdc++.h>
using namespace std;

class Fraction{
    private: 
        int Numerator;
        int Denominator;
    public:
        void Input();
        void Output();
        void Simplify();
        void assign_Num(int Numerator);
        void assign_Den(int Denominator);
        int getNumerator();
        int getDenominator();
        void comPare(int Numerator_1, int Numerator_2, int Denominator_1, int Denominator_2);
        bool IsPositive();
        bool IsNegative();
        bool IsZero();
};