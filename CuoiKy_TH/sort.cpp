#include "sort.h"

using namespace std;

void SortAlgorithm::sort(int){
    if (INCREASING){
        doSort(SortAlgorithm::DECREASING);
    }else if(DECREASING){
        doSort(SortAlgorithm::INCREASING);
    }
}

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
}

istream& operator >>(istream& is, Fraction& f){
    cout << "\nEnter numerator and denoninator: ";
    is >> f.Numerator >> f.Denominator;
    return is;
}

ostream& operator <<(ostream& os, const Fraction f){
    os << f.Numerator << "/" << f.Denominator;
    return os;
}

Fraction &Fraction::operator=(const Fraction &f){
    if(this == &f){
        return *this;
    }
    this -> Numerator = f.Numerator;
    this -> Denominator = f.Denominator;

    return *this;
}

Fraction Fraction::operator-(const Fraction &f){
    Fraction result;
    result.Numerator = Numerator * f.Denominator - Denominator * f.Numerator;
    result.Denominator = Denominator * f.Denominator;

    return result;
}

Fraction &Fraction::operator-=(const Fraction &f){
    *this = *this - f;
    return *this;
}

bool operator>(const Fraction& a, const Fraction& b){
    Fraction temp = a;
	temp -= b;
    if (temp.Numerator*temp.Denominator > 0){   //1/2 0/2 -1/2
        return 1; 
    }return 0;
}

bool operator<(const Fraction& a, const Fraction& b){
    Fraction temp = a;
	temp -= b;
    if (temp.Numerator*temp.Denominator < 0){   //1/2 0/2 -1/2
        return 1; 
    }return 0;
}

bool operator ==(const Fraction& a, const Fraction& b){
    Fraction temp = a;
	temp -= b;
	if (temp.Numerator == 0){
		return 1;
	}
	return 0;
}

bool operator >=(const Fraction& a, const Fraction& b){
    Fraction temp = a;
	temp -= b;
    if (temp.Numerator*temp.Denominator >= 0){   //1/2 0/2 -1/2
        return 1; 
    }return 0;
}

bool operator <=(const Fraction& a, const Fraction& b){
    Fraction temp = a;
	temp -= b;
    if (temp.Numerator*temp.Denominator <= 0){   //1/2 0/2 -1/2
        return 1; 
    }return 0;
}

bool operator !=(const Fraction& a, const Fraction& b){
    Fraction temp = a;
	temp -= b;
    if (temp.Numerator*temp.Denominator != 0){   //1/2 0/2 -1/2
        return 1; 
    }return 0;
}

Fraction::~Fraction(){}

template<class T>
InsertionSort<T>::InsertionSort(T* _arr, int _n) : arr(_arr), n(_n) {}

template<class T>
void InsertionSort<T>::doSort(int order){
    for (int i = 1; i < n; i++) {
        T key = arr[i];
        int j = i - 1;

        while (j >= 0 && ((order == SortAlgorithm::INCREASING && arr[j] > key) ||
                            (order == SortAlgorithm::DECREASING && arr[j] < key))) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}
