#include "MyDate.h"

using namespace std;

MyDate::MyDate(){
    ngay = 0;
    thang = 0;
    nam = 0;
}

MyDate::MyDate(int ngay, int thang, int nam){
    this -> ngay = ngay;
    this -> thang = thang;
    this -> nam = nam;
}

MyDate::MyDate(const MyDate& d){
    ngay = d.ngay;
    thang = d.thang;
    nam = d.nam;
}

MyDate::MyDate(string date){
    ngay = (date.at(0)-48)*10 + (date.at(1)-48);
    thang = (date.at(3)-48)*10 + (date.at(4)-48);
    nam = (date.at(6) -48)*1000 + (date.at(7)-48)*100 + (date.at(8)-48)*10 + (date.at(9)-48); //doi char sang int: value - 48
    //cout << "\n" << ngay << "\t" << thang << "\t" << nam;
}

MyDate::MyDate(int nam){//ngay dau nam X
    this -> ngay = 1;
    this -> thang = 1;
    this -> nam = nam;
}

MyDate::~MyDate(){
    cout << "\nDu lieu da bi huy";
}

void MyDate::Nhap(){
    cout << "\nNhap lan luot thu tu ngay/thang/nam vao day: ";
    cin >> ngay >> thang >> nam;
}

void MyDate::Xuat(){
    cout << "\ntime: ngay " << ngay << " thang " << thang << " nam " << nam;
}

void MyDate::KT_NamNhuan(){
    if (nam % 100 == 0){
        if (nam % 400 == 0)
            cout << "\n->Nam " << nam << " la nam nhuan";
        else 
            cout << "\n->Nam " << nam << " khong phai la nam nhuan"; 
    }else if(nam % 4 == 0){
        cout << "\n->Nam " << nam << " la nam nhuan";
    }else {
        cout << "\n->Nam " << nam << " khong phai la nam nhuan"; 
    }
}

void MyDate::Gan_gtNTN(int ngay, int thang, int nam){
    this -> ngay = ngay;
    this -> thang = thang;
    this -> nam = nam;
}

int MyDate::Lay_Ngay(){
    return ngay;
}

int MyDate::Lay_Thang(){
    return thang;
}

int MyDate::Lay_Nam(){
    return nam;
}

int MyDate::Lay_SoNgay(){
    int soNgay;
    if(thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12){
       soNgay = 31;
    }
    else if (thang == 4 || thang == 6 || thang == 9 || thang == 11){
        soNgay = 30;
    }else if (thang == 2){
        if (nam % 100 == 0){
            if (nam % 400 == 0)
                soNgay = 29;
            else 
                soNgay = 28;
        }else if(nam % 4 == 0){
            soNgay = 29;
        }else {
            soNgay = 28;
        }
    }return soNgay;
}

void MyDate::Tim_NgayHomTruoc(){
    thang--;
    if (thang == 0){
        thang = 12;
        nam--;
    } 
}

void MyDate::Tim_NgayHomSau(){
    thang ++;
    if (thang > 12){
        thang = 1;
        nam ++;
    }
}

int MyDate::khoangCach(){  //tinh so ngay tu ngay 1/1/01 den ngay dd/mm/yy nhap tu ban phim
//tinh so ngay tu 1/1/01 den 1/1/yy
    int KCach = 0;
    for (int i = 1; i < nam; i++){
        if (nam % 100 == 0){
            if (nam % 400 == 0)
                KCach += 366;
            else 
                KCach += 365;  
        }else if(nam % 4 == 0){
            KCach += 366;
        }else {
            KCach += 365;
        }
    }

    //tinh so ngay tu 1/1/yy den dd/mm/yy
    int KCach_ngay = ngay;
    for (int j = 1; j < thang; j++){
        KCach_ngay += Lay_SoNgay();
    }

    KCach += KCach_ngay;
    return KCach;
}

void MyDate::SapXep(MyDate time, MyDate time2){
    if (time.Lay_Nam() < time2.Lay_Nam()){
        cout << "\n-> Ngay " << time.Lay_Ngay() << " thang " << time.Lay_Thang() << " nam " << time.Lay_Nam() << " dien ra truoc ngay " << time2.Lay_Ngay()
        << " thang " << time2.Lay_Thang() << " nam " << time2.Lay_Nam();
    }else if(time.Lay_Nam() > time2.Lay_Nam()){
        cout << "\n-> Ngay " << time.Lay_Ngay() << " thang " << time.Lay_Thang() << " nam " << time.Lay_Nam() << " dien ra sau ngay " << time2.Lay_Ngay()
        << " thang " << time2.Lay_Thang() << " nam " << time2.Lay_Nam();
    }else if(time.Lay_Nam() == time2.Lay_Nam()){
        if(time.Lay_Thang() < time2.Lay_Thang()){
            cout << "\n-> Ngay " << time.Lay_Ngay() << " thang " << time.Lay_Thang() << " nam " << time.Lay_Nam() << " dien ra truoc ngay " << time2.Lay_Ngay()
            << " thang " << time2.Lay_Thang() << " nam " << time2.Lay_Nam();
        }else if(time.Lay_Thang() > time2.Lay_Thang()){
            cout << "\n-> Ngay " << time.Lay_Ngay() << " thang " << time.Lay_Thang() << " nam " << time.Lay_Nam() << " dien ra sau ngay " << time2.Lay_Ngay()
            << " thang " << time2.Lay_Thang() << " nam " << time2.Lay_Nam();
        }else if(time.Lay_Thang() == time2.Lay_Thang()){
            if(time.Lay_Ngay() < time2.Lay_Ngay()){
                cout << "\n-> Ngay " << time.Lay_Ngay() << " thang " << time.Lay_Thang() << " nam " << time.Lay_Nam() << " dien ra truoc ngay " << time2.Lay_Ngay()
                << " thang " << time2.Lay_Thang() << " nam " << time2.Lay_Nam();
            }else if(time.Lay_Ngay() > time2.Lay_Ngay()){
                cout << "\n-> Ngay " << time.Lay_Ngay() << " thang " << time.Lay_Thang() << " nam " << time.Lay_Nam() << " dien ra truoc ngay " << time2.Lay_Ngay()
                << " thang " << time2.Lay_Thang() << " nam " << time2.Lay_Nam();
            }else if(time.Lay_Ngay() == time2.Lay_Ngay()){
                cout << "\n-> Time 1 va time 2 cung la 1 ngay"; 
            }
        }
    }
}