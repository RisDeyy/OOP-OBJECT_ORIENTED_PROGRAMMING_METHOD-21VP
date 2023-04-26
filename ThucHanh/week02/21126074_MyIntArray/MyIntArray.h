#include <bits/stdc++.h>
using namespace std;

class MyIntArray{
    private:
        int *a;
        int n;
    public:
        MyIntArray();
        MyIntArray(int *arr);
        MyIntArray(int num);
        MyIntArray(const MyIntArray& MyArr);
        MyIntArray(int i, int num);
        void inPut();
        void outPut();
        ~MyIntArray();
};