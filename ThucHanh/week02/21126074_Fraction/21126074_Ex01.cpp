#include "Fraction.h"

using namespace std;

int main(){
    Fraction f, f1, f2, f3;
    Fraction(4, 5);
    Fraction(5);

    Fraction("3/2");

    cout << "\nINPUT: ";
    f1.Input();
    f2.Input();

    cout << "\nOUTPUT: ";
    f1.Output();
    f2.Output();

    Fraction f5(f);

    cout << "\nADD 2 FRACTIONS";
    cout << " = " << f1.getNumerator()*f2.getDenominator() + f2.getNumerator()*f1.getDenominator() << "/" << f1.getDenominator()*f2.getDenominator();
    f.assign_Num(f1.getNumerator()*f2.getDenominator() + f2.getNumerator()*f1.getDenominator());
    f.assign_Den(f1.getDenominator()*f2.getDenominator());
    f.Simplify();
    if (f.IsPositive() == true){
        cout << "\nResult is Positive number";
    }

    cout << "\nSUBSTRACT 2 FACTIONS";
    cout << " = " << f1.getNumerator()*f2.getDenominator() - f2.getNumerator()*f1.getDenominator() << "/" << f1.getDenominator()*f2.getDenominator();
    f.assign_Num(f1.getNumerator()*f2.getDenominator() - f2.getNumerator()*f1.getDenominator());
    f.assign_Den(f1.getDenominator()*f2.getDenominator());
    f.Simplify();

    cout << "\nMULTIPLY 2 FRACTIONS";
    cout << " = " << f1.getNumerator()*f2.getNumerator() << "/" << f1.getDenominator()*f2.getDenominator();
    f.assign_Num(f1.getNumerator()*f2.getNumerator());
    f.assign_Den(f1.getDenominator()*f2.getDenominator());
    f.Simplify();

    cout << "\nDIVIDE 2 FRACTIONS";
    cout << " = " << f1.getNumerator()*f2.getDenominator() << "/" << f1.getDenominator()*f2.getNumerator();
    f.assign_Num(f1.getNumerator()*f2.getDenominator());
    f.assign_Den(f1.getDenominator()*f2.getNumerator());
    f.Simplify();

    // cout << "\nf1 + f2 = " << f.Add(f1, f2);
    // cout << "\nf1 - f2 = " << f.Sub(f1, f2);
    // cout << "\nf1 * f2 = " << f.Mul(f1, f2);
    // cout << "\nf1 / f2 = " << f.Div(f1, f2);
    

    cout << "\nCOMPARE 2 FRACTIONS: ";
    f3.comPare(f1.getNumerator(), f2.getNumerator(), f1.getDenominator(), f2.getDenominator());

    return 0;
}


