#include <bits/stdc++.h>

using namespace std;

#include<bits/stdc++.h>
using namespace std;

class Fraction{
    private:
        int Numerator;
        int Denominator;
    public:
        Fraction();
        Fraction(int num, int den);
        Fraction(const Fraction &f);
        //Fraction(string f);
        Fraction(int fraction);
        friend istream& operator >>(istream& is, Fraction& f);
        friend ostream& operator <<(ostream& os, Fraction f);
        Fraction Simplify();

        Fraction operator+(const Fraction &f);
        Fraction operator-(const Fraction &f);
        Fraction& operator+=(const Fraction &f);
        Fraction& operator-=(const Fraction &f);
        friend bool operator >(const Fraction& a, const Fraction& b);
        friend bool operator <(const Fraction& a, const Fraction& b);
        ~Fraction();
};

template<class T>
class MyVector{
    private:
        T *arr;
        int size;
    public:
        // empty array
        MyVector();
        // n zeros
        MyVector(int n);
        MyVector(T *a, int n);
        MyVector(const MyVector &v);
        ~MyVector();
        int getSize();
        T getItem(int index);
        void setItem(T value, int index);
        void add(T value);
        void addRange(T *a, int n);
        void clear();
        bool contains(T value);
        void toArray(T *arr, int &n);
        bool equals(const MyVector &v);
        int indexOf(T value);
        int lastIndexOf(T value);
        void insert(T value, int index);
        void remove(T value);
        void removeAt(int index);
        void reverse();
        string toString();
        void sortAsc();
        void sortDesc();
};