#include <bits/stdc++.h>

class Tuoi{
    private:
        char *ten;
        char *diachi;
        int ngay, thang, nam;
    public:
        Tuoi();
        Tuoi(int ngay, int thang, int nam);
        Tuoi(const Tuoi& t);
        ~Tuoi();
        void Nhap_tt();
        void Xuat_tt();
        char *Lay_Ten();
        char *Lay_Diachi();
        int Lay_Ngay();
        int Lay_Thang();
        int Lay_Nam();
        void Ngay_HienTai();
        int Khoang_Cach();
        int tuoi_Tinh(Tuoi t1, Tuoi t2);
};