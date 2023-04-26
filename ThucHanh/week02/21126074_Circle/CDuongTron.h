#include <bits/stdc++.h>

class CDiem{
    private:
        float x, y;
    public:
        CDiem();
        CDiem(float a, float b);
        CDiem(const CDiem& d);
        ~CDiem();
        float Lay_X();
        float Lay_Y();
        void Nhap_Toado();
        void Xuat_Toado();
        float Distance(CDiem X);
};

class CDuongTron{
    private:
        float r;
    public:
        CDuongTron();
        CDuongTron(float R);
        CDuongTron(CDiem a, CDiem b);
        CDuongTron(const CDuongTron& c);
        float Chvi(CDiem X, CDiem Y);
        float Dtich(CDiem X, CDiem Y);
        ~CDuongTron();
};