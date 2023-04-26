#include <bits/stdc++.h>

using namespace std;

class NhanVien{
    private:
        int static luongCB;
        int static PhuCap;
        int MaSo;
        string HoTen;
        string sdt;
        string DiaChi;
        string Ngaysinh;
    public:
        NhanVien();
        NhanVien(int id, string name, string phone, string address, string date);
        NhanVien(const NhanVien& nv);
        ~NhanVien();
        void gan_LuongCB(int lcb);
        int lay_LuongCB();
        void gan_PhuCap(int pc);
        int lay_PhuCap();
        void Nhap_TTin();
        void Xuat_TTin();
};

class NhanVienThuong:public NhanVien{
    private:
    public:
        NhanVienThuong();
        NhanVienThuong(int id, string name, string phone, string address, string date);
        NhanVienThuong(const NhanVienThuong &nvt);
        void Nhap();
        void Xuat();
        int Luong();
};

class BacSi:public NhanVien{
    private:
        string ChuyenKhoa;
        int SoCa;
    public:
        BacSi();
        BacSi(int sc, int id, string name, string phone, string address, string date, string speciality);
        BacSi(const BacSi& bs);
        void Nhap();
        void Xuat();
        int Luong();
};

class BenhVien{
    private:
        vector<NhanVienThuong>e;
        vector<BacSi>d;
    public:
        void Nhap_dSach();
        void Xuat_dSach();
        void BS_LuongCaoNhat();
};