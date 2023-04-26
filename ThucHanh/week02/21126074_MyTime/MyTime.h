#include <bits/stdc++.h>

using namespace std;

class MyTime{
    private:
        int hour;
        int minute;
        int second;
    public:
        MyTime();
        MyTime(int h, int m, int s);
        MyTime(const MyTime& t);
        MyTime(string time);
        MyTime(int h);
        void inPut();
        void outPut();
        ~MyTime();
};