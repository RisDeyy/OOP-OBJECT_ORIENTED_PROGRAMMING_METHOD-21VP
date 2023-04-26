#include "CDonThuc.h"

using namespace std;

void CDonThuc::KhoiTao(int heso, int somu){
    this -> heso = heso;
    this -> somu = somu;
}

void CDonThuc::Nhap(){
    cout << "\nNhap he so cho don thuc: ";
    cin >> heso;
    cout << "\nNhap so mu cho don thuc: ";
    cin >> somu;
}

void CDonThuc::Xuat(){
    cout << "\nDon Thuc dang: " << heso << "x^" << somu;
}

int CDonThuc::Lay_HeSo(){
    return heso;
}

int CDonThuc::Lay_SoMu(){
    return somu;
}

void CDonThuc::Gan_HeSo(int heso){
    this -> heso = heso;
}

void CDonThuc::Gan_SoMu(int somu){
    this -> somu = somu;
}

int CDonThuc::Tinh_DonThuc(int x){
    int result;
    int i;
    if (somu == 0){
        result = heso;
    }else{
       result = heso * pow(x, somu);
    }
    return result;
}

void CDonThuc::Tinh_DaoHam(){
    if (somu == 0){
        cout << "\nKhong co dao ham cho don thuc nay!";
    }else{
        this -> heso = somu * heso;
        this -> somu = somu - 1;
        cout << "\nDon thuc sau khi dao ham: " << heso << "x^" << somu;
    }
}