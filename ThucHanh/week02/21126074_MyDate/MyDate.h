#include <bits/stdc++.h>

using namespace std;

class MyDate {
    private:
        int ngay;
        int thang;
        int nam;
    public:
        MyDate();
        MyDate(int ngay, int thang, int nam);
        MyDate(const MyDate& d);
        MyDate(string date);
        MyDate(int nam); 
        //void KhoiTao(int ngay, int thang, int nam);
        void Nhap();
        void Xuat();
        void KT_NamNhuan();
        void Gan_gtNTN(int ngay, int thang, int nam);
        int Lay_Ngay();
        int Lay_Thang();
        int Lay_Nam();
        int Lay_SoNgay();
        void Tim_NgayHomTruoc();
        void Tim_NgayHomSau();
        int khoangCach();
        void SapXep(MyDate time, MyDate time2);
        ~MyDate();
};