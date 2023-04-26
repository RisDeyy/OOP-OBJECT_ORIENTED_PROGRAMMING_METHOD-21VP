#include <bits/stdc++.h>

using namespace std;

class SortAlgorithm {
    public:
        static const int INCREASING = 0;
        static const int DECREASING = 1;
        void sort(int);
        virtual void doSort(int) = 0;
};

class Fraction{
    private:
        int Numerator;
        int Denominator;
    public:
        Fraction();
        Fraction(int Num, int Den);
        Fraction(const Fraction& fraction);
        friend istream& operator >>(istream& is, Fraction& f);
        friend ostream& operator <<(ostream& os, Fraction f);
        Fraction& operator=(const Fraction &f);
        Fraction operator-(const Fraction &f);
        Fraction& operator-=(const Fraction &f);
        friend bool operator >(const Fraction& a, const Fraction& b);
        friend bool operator <(const Fraction& a, const Fraction& b);
        friend bool operator ==(const Fraction& a, const Fraction& b);
        friend bool operator >=(const Fraction& a, const Fraction& b);
        friend bool operator <=(const Fraction& a, const Fraction& b);
        friend bool operator !=(const Fraction& a, const Fraction& b);
        // void inputFractionArray(Fraction* arr, int n);
        ~Fraction();
};

template <class T>
class InsertionSort : public SortAlgorithm {
    private:
        T* arr;
        int n;
    public:
        InsertionSort(T* _arr, int _n);
        void doSort(int order);
};