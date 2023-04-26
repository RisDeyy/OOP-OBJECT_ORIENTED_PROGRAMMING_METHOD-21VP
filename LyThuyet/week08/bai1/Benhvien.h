#include <bits/stdc++.h>

using namespace std;

class NhanVien{
    protected:
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
        //void gan_LuongCB(int lcb);
        int lay_LuongCB();
        //void gan_PhuCap(int pc);
        int lay_PhuCap();
        virtual void Nhap() = 0;
        virtual void Xuat() = 0;
        virtual int Luong() = 0;
};

class NhanVienThuong:public NhanVien{
    private:
    public:
        NhanVienThuong();
        NhanVienThuong(int id, string name, string phone, string address, string date);
        NhanVienThuong(const NhanVienThuong &nvt);
        ~NhanVienThuong();
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
        ~BacSi();
        void Nhap();
        void Xuat();
        int Luong();
};

class BenhVien{
    private:
        vector <NhanVien*> e;
    public:
        void Nhap_dSach();
        void Xuat_dSach();
        void BS_LuongCaoNhat();
};