#include <bits/stdc++.h>

using namespace std;
class CHocSinh{
    private:
        string HoTen;
        float dVan;
        float dToan;
    public:
        void Nhap();
        void Xuat();
        string Lay_TT();
        float Lay_dVan();
        float Lay_dToan();
        void Gan_hTen(string HoTen);
        void Gan_dVan(float dVan);
        void Gan_dToan(float dToan);
};