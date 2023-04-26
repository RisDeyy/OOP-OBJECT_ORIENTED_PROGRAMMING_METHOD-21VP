#include "CHocSinh.h"

using namespace std;

void CHocSinh::Nhap(){
    cout << "\nNhap vao day Ho va Ten: ";
    getline(cin, HoTen);
    cout << "\nNhap diem van: ";
    cin >> dVan;
    cout << "\nNhap diem Toan: ";
    cin >> dToan;
    cout << "\n___________________________";
}

void CHocSinh::Xuat(){
    cout << "\nHo va Ten: " << HoTen;
    cout << "\nDiem Van: " << dVan;
    cout << "\nDiem Toan: " << dToan;
}

string CHocSinh::Lay_TT(){
    return HoTen;
}

float CHocSinh::Lay_dVan(){
    return dVan;
}

float CHocSinh::Lay_dToan(){
    return dToan;
}

void CHocSinh::Gan_hTen(string HoTen){
    this -> HoTen = HoTen;
}

void CHocSinh::Gan_dVan(float dVan){
    this -> dVan = dVan;
}

void CHocSinh::Gan_dToan(float dToan){
    this -> dToan = dToan;
}