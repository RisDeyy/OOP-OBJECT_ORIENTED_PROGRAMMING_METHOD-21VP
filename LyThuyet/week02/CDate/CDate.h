#include <bits/stdc++.h>

using namespace std;

class CDate {
    private:
        int ngay;
        int thang;
        int nam;
    public:
        void KhoiTao(int ngay, int thang, int nam);
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
};