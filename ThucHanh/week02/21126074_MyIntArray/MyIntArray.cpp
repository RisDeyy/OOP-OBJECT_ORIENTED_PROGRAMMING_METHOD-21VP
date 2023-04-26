#include "MyIntArray.h"
using namespace std;

MyIntArray::MyIntArray(){
    a = NULL;
    n = 0;
}

MyIntArray::MyIntArray(int *arr){
    a = arr;
}

MyIntArray::MyIntArray(int num){ // tao 1 mang arr chua cac phan tu ngau nhien tu 1 den n
    a = new int[num];
    for (int i = 0; i < num; i++){
        a[i] = rand() % num + 1;
        cout << a[i] << "\t";
    }
    n = num;
}

MyIntArray::MyIntArray(const MyIntArray& MyArr){
    a = MyArr.a;
    n = MyArr.n;
}

MyIntArray::MyIntArray(int i, int num){//tao mang array chua cac phan tu tu i den num
    a = new int [num];
    for(i = 0; i < num; i++){
        a[i] = i + 1;
        cout << a[i] << "\t";
    }
}

MyIntArray::~MyIntArray(){
    delete a;
    cout << "\nData is deleted!";
}

void MyIntArray::inPut(){
    a = new int[n];
    cout << "\nNum of elements you want to input: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << "\nEnter element " << i+1 << ": ";
        cin >> a[i];
    }
}

void MyIntArray::outPut(){
    for(int i = 0; i < n; i ++){
        cout << a[i] << "\t";
    }
}