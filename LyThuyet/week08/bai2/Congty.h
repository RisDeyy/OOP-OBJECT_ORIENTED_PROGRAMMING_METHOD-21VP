#include <bits/stdc++.h>
using namespace std;

class NhanVien{
    protected:
        string HoTen;
        string NgayVaoLam;
        int static LuongCB;
    public:
        NhanVien(){
            HoTen = HoTen.empty();
            NgayVaoLam = NgayVaoLam.empty();
        }

        NhanVien(string name, string date){
            HoTen.assign(name);
            NgayVaoLam.assign(date);
        }

        NhanVien(const NhanVien& nv){
            HoTen = nv.HoTen;
            NgayVaoLam = nv.NgayVaoLam;
        }

        int lay_LuongCB(){
            return LuongCB;
        }

        string lay_Ten(){
            return HoTen;
        }

        virtual void Nhap() = 0;
        virtual void Xuat() = 0;
        virtual int Luong() = 0;

        ~NhanVien(){
            HoTen.erase();
            HoTen.empty();
            NgayVaoLam.erase();
            NgayVaoLam.empty();
        }
};

class NV_QuanLy:public NhanVien{
    private:
        int HS_chucVu;
        int Thuong;
    public:
        NV_QuanLy();
        NV_QuanLy(string name, string date, int heso, int thuong);
        NV_QuanLy(const NV_QuanLy& ql);
        ~NV_QuanLy();
        void Nhap();
        void Xuat();
        int Luong();
};

class NV_VanPhong:public NhanVien{
    private:
        int soNgayLamViec;
        int TroCap;
    public:
        NV_VanPhong();
        NV_VanPhong(string name, string date, int songay, int trocap);
        NV_VanPhong(const NV_VanPhong& vp);
        ~NV_VanPhong();
        void Nhap();
        void Xuat();
        int Luong();
};

class NV_SanXuat:public NhanVien{
    private:
        int soSanPham;
    public:
        NV_SanXuat();
        NV_SanXuat(string name, string date, int sosanpham);
        NV_SanXuat(const NV_SanXuat& sx);
        ~NV_SanXuat();
        void Nhap();
        void Xuat();
        int Luong();
};

class CongTy{
    private:
        vector<NhanVien*> congty;
    public:
        void Nhap_danhSach();
        void Xuat_danhSach();
        int tongLuong_cty();
        void tim_theoTen();
};