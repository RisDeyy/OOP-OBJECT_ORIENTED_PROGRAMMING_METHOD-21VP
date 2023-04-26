#include "Array.h"

using namespace std;

Fraction::Fraction(){
    Numerator = 0;
    Denominator = 1;
}

Fraction::Fraction(int num, int den){
    Numerator = num;
    Denominator = den;
}

Fraction:: Fraction(int fraction){
    Numerator = fraction;
    Denominator = rand() % 10 + 1;
}

Fraction::Fraction(const Fraction &f){
    Numerator = f.Numerator;
    Denominator = f.Denominator;
}

Fraction::~Fraction(){
    
}

istream& operator >>(istream& is, Fraction& f){
    cout << "\nEnter numerator and denoninator: ";
    is >> f.Numerator >> f.Denominator;
    return is;
}

Fraction Fraction::Simplify(){
    int a, b;
    Fraction f;

    a = abs(Numerator);
    b = abs(Denominator);
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    f.Numerator = Numerator/a;
    f.Denominator = Denominator/a;
    
    return f;
}

ostream& operator <<(ostream& os, Fraction f){
    os << f.Numerator << "/" << f.Denominator;
    return os;
}

Fraction Fraction::operator+(const Fraction &f){
    Fraction result;
    result.Numerator = Numerator * f.Denominator + Denominator * f.Numerator;
    result.Denominator = Denominator * f.Denominator;

    return result;
}

Fraction Fraction::operator-(const Fraction &f){
    Fraction result;
    result.Numerator = Numerator * f.Denominator - Denominator * f.Numerator;
    result.Denominator = Denominator * f.Denominator;

    return result;
}

Fraction &Fraction::operator+=(const Fraction &f){
    *this = *this + f;
    return *this;
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

template <class T>
MyVector<T>::MyVector(){
    arr = NULL;
    size = 0;
}

template <class T>
MyVector<T>::MyVector(int n){
    size = n;
    arr = new T[size];
    for (int i = 0; i < size; i++){
        arr[i] = rand() % 10 + 1;
        cout << arr[i] << "\t";
    }
}

template <class T>
MyVector<T>::MyVector(T *a, int n){
    arr = a;
    size = n;
}

template <class T>
MyVector<T>::MyVector(const MyVector& v){
    arr = v.arr;
    size - v.size;
}

template <class T>
MyVector<T>::~MyVector(){
    delete arr;
    arr = NULL;
}

template <class T>
int MyVector<T>::getSize(){
    return size;
}

template <class T>
T MyVector<T>::getItem(int index){
    return (index > size) ? 0 : arr[index - 1];
}

template <class T>
void MyVector<T>::setItem(T value, int index){
    arr[index-1] = value;
}

template <class T>
void MyVector<T>::add(T value){
    for(int i = 0; i < size + 1; i ++)
        arr[size] = value;
}

template <class T>
void MyVector<T>::addRange(T *a, int n){
    T *array = new T[size + n];
    for (int i = 0; i < size; i++) {
        array[i] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        array[size + i] = a[i];
    } size += n;
    delete arr;
    arr = array;
}

template <class T>
void MyVector<T>::clear(){
    delete arr;
    arr = NULL;
}

template <class T>
bool MyVector<T>::contains(T value){
    for (int i = 0; i < size; i++){
        if (arr[i] == value){
            return true;
        }return false;
    }
}

template <class T>
void MyVector<T>::toArray(T *arr, int &n){
    size = n;
    for (int i = 0; i < size; i++){
        arr[i] = this -> arr[i];
    }
}

template <class T>
bool MyVector<T>::equals(const MyVector& v){
    if (arr = v.arr && size = v.size){
        for (int i = 0; i < size; i++){
            if(arr[i] == v.arr[i]){
                return true;
            }return false;
        }
    }return false;
}

template <class T>
int MyVector<T>::indexOf(T value){
    for (int i = 0; i < size; i++){  
        if (arr[i] == value){
            return i + 1;
        }
    }return 0;
}

template <class T>
int MyVector<T>::lastIndexOf(T value){ 
    for (int i = size -1; i >= 0 ; i--){
        if (arr[i] == value){
            return i + 1;
        }
    }return 0;
}

template <class T>
void MyVector<T>::insert(T value, int index){
    int i;
    for(i = size; i >= index; i--){
        arr[i] = arr[i-1];
    }
    arr[i] = value;
    size++;
    for(i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
}

template <class T>
void MyVector<T>::remove(T value){
    int i;
    for (i=0; i < size ; i++){
        if (arr[i] == value){
            break;
        }
    }
    if (i < size){
        for (int j = i; j < size - 1; j++){
            arr[j] = arr[j+1];
        }
    }
    setItem(0, size);
    for (i = 0; i < size; i++){
        cout << arr[i] << "\t";
    } 
}

template <class T>
void MyVector<T>::removeAt(int index){
    T *a = new T[size - 1];
    for (int i = 0; i < index; i++) {
        a[i] = arr[i];
    }
    for (int i = index + 1; i < size; i++) {
        a[i-1] = arr[i];
    }size--;

    delete arr;
    arr = a;
}

template <class T>
void MyVector<T>::reverse(){
    for (int i = 0; i < size/2; i++) {
        swap(arr[i], arr[size - i - 1]);
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    }
}

template <class T>
string MyVector<T>::toString(){
    string str;
    for (int i = 0; i < size; ++i){
        str = to_string(arr[i]) + "\t";
    }return str;
}

template <class T>
void MyVector<T>::sortAsc(){
    int i, j;
    T value;
    
    for (i = 1; i < size; i++){
        value = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] > value){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = value;
    }
}

template <class T>
void MyVector<T>::sortDesc(){
    int i, j;
    T value;

    for (i = 1; i < size; i++){
        value = arr[i];
        j = i - 1;
        
        while (j >= 0 && arr[j] < value){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = value;
    }
}