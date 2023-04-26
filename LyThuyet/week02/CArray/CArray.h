#include <bits/stdc++.h>

using namespace std;

class CArray{
    private:
        int n;
        int *arr;
    public: 
        void NhapMang();
        void XuatMang();
        int Lay_Kthuoc();
        int Lay_Ptu(int i);
        void Gan_Ptu(int x, int i);
        bool KT_xTonTai(int x);
        int Ptu_LonNhat();
        int Ptu_NhoNhat();
        void SX_BDL();
        void SX_LDB();
};

