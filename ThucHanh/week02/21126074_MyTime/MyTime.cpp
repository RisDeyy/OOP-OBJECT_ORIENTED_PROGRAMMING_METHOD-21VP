#include"MyTime.h"

using namespace std;

MyTime::MyTime(){
    hour = 0;
    minute = 0;
    second = 0;
}

MyTime::MyTime(int h, int m, int s){
    hour = h;
    minute = m;
    second = s;
}

MyTime::MyTime(const MyTime& t){
    this -> hour = t.hour;
    this -> minute = t. minute;
    this -> second = t.second;
}

MyTime::MyTime(string time){
    hour = (time.at(0)-48)*10 + (time.at(1)-48);//Nhap dinh dang string = "hh : mm : ss"
    minute = (time.at(5)-48)*10 + (time.at(6)-48);
    second = (time.at(10)-48)*10 + (time.at(11)-48);
    //cout << "\nTime: " << hour << " : " << minute << " : " << second;
}

MyTime::MyTime(int h){//tao deadline :(((
    hour = h - 1;
    if (h == 0){
        hour = 23;
    }
    minute = 59;
    second = 59;
    //cout << "\nDeadline: " << hour << " : " << minute << " : " << second;
}

MyTime::~MyTime(){
    cout << "\nData is deleted!";
}

void MyTime::inPut(){
    cout << "\nEnter hour, minute, second: ";
    cin >> hour >> minute >> second;
}

void MyTime::outPut(){
    cout << "\nTime: " << hour << " : " << minute << " : " << second;
}