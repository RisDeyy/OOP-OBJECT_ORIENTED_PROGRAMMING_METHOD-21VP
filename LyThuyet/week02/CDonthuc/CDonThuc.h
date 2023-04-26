#include <bits/stdc++.h>

using namespace std;

class CDonThuc{
    private:
        int heso;
        int somu;
    public: 
        void KhoiTao(int heso, int somu);
        void Nhap();
        void Xuat();
        int Lay_HeSo();
        int Lay_SoMu();
        void Gan_HeSo(int heso);
        void Gan_SoMu(int somu);
        int Tinh_DonThuc(int x);
        void Tinh_DaoHam();
};

