#include "CDate.h"

using namespace std;

void CDate::KhoiTao(int ngay, int thang, int nam){
    this -> ngay = ngay;
    this -> thang = thang;
    this -> nam = nam;
}

void CDate::Nhap(){
    cout << "\nNhap lan luot thu tu ngay/thang/nam vao day: ";
    cin >> ngay >> thang >> nam;
}

void CDate::Xuat(){
    cout << "\ntime: ngay " << ngay << " thang " << thang << " nam " << nam;
}

void CDate::KT_NamNhuan(){
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

void CDate::Gan_gtNTN(int ngay, int thang, int nam){
    this -> ngay = ngay;
    this -> thang = thang;
    this -> nam = nam;
}

int CDate::Lay_Ngay(){
    return ngay;
}

int CDate::Lay_Thang(){
    return thang;
}

int CDate::Lay_Nam(){
    return nam;
}

int CDate::Lay_SoNgay(){
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

void CDate::Tim_NgayHomTruoc(){
    thang--;
    if (thang == 0){
        thang = 12;
        nam--;
    } 
}

void CDate::Tim_NgayHomSau(){
    thang ++;
    if (thang > 12){
        thang = 1;
        nam ++;
    }
}

int CDate::khoangCach(){  //tinh so ngay tu ngay 1/1/01 den ngay dd/mm/yy nhap tu ban phim
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