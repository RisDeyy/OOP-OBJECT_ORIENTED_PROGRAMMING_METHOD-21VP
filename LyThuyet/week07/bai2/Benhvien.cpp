#include "Benhvien.h"

using namespace std;

int NhanVien::luongCB = 0;
int NhanVien::PhuCap = 0;
NhanVien::NhanVien(){
    MaSo = 0;
    HoTen = HoTen.empty();
    sdt = sdt.empty();
    DiaChi = DiaChi.empty();
    Ngaysinh = Ngaysinh.empty();
}

NhanVien::NhanVien(int id, string name, string phone, string address, string date){
    MaSo = id;
    HoTen.assign(name);
    sdt.assign(phone);
    DiaChi.assign(address);
    Ngaysinh.assign(date);
}

NhanVien::NhanVien(const NhanVien& nv){
    MaSo = nv.MaSo;
    HoTen = nv.HoTen;
    sdt = nv.sdt;
    DiaChi = nv.DiaChi;
    Ngaysinh = nv.Ngaysinh;
}

NhanVien::~NhanVien(){
    HoTen.erase();
    HoTen.empty();
    sdt.erase();
    sdt.empty();
    DiaChi.erase();
    DiaChi.empty();
    Ngaysinh.erase();
    Ngaysinh.empty();
}

void NhanVien::gan_LuongCB(int lcb){
    luongCB = lcb;
}

int NhanVien::lay_LuongCB(){
    return luongCB;
}

void NhanVien::gan_PhuCap(int pc){
    PhuCap = pc;
}

int NhanVien::lay_PhuCap(){
    return PhuCap;
}

void NhanVien::Nhap_TTin(){
    cout << "\nNhap ma so: ";
    cin >> MaSo;
    cin.ignore();
    cout << "Nhap ho ten: ";
    getline(cin, HoTen);
    cout << "Nhap so dien thoai: ";
    getline(cin, sdt);
    cout << "Nhap dia chi: ";
    getline(cin, DiaChi);
    cout << "Nhap ngay sinh: ";
    getline(cin, Ngaysinh);
}

void NhanVien::Xuat_TTin(){
    cout << "\nMa so: " << MaSo;
    cout << "\nHo ten: " << HoTen;
    cout << "\nSo dien thoai: " << sdt;
    cout << "\nDia chi: " << DiaChi;
    cout << "\nNgay sinh: " << Ngaysinh;
}

NhanVienThuong::NhanVienThuong():NhanVien(){
    
}

NhanVienThuong::NhanVienThuong(int id, string name, string phone, string address, string date) : NhanVien(id, name, phone, address, date) {}

NhanVienThuong::NhanVienThuong(const NhanVienThuong& nvt): NhanVien(nvt){
   
}

void NhanVienThuong::Nhap(){
    NhanVien::Nhap_TTin();
}

void NhanVienThuong::Xuat(){
    NhanVien::Xuat_TTin();
}

int NhanVienThuong::Luong(){
    return NhanVien::lay_LuongCB() + NhanVien::lay_PhuCap();
}

BacSi::BacSi():NhanVien(){
    SoCa = 0;
    ChuyenKhoa = ChuyenKhoa.empty();
}

BacSi::BacSi(int sc, int id, string name, string phone, string address, string date, string speciality) : NhanVien(id, name, phone, address, date) {
    SoCa = sc;
    ChuyenKhoa.assign(speciality);
}

BacSi::BacSi(const BacSi& bs):NhanVien(bs){
    SoCa = bs.SoCa;
    ChuyenKhoa = bs.ChuyenKhoa;
}

void BacSi::Nhap(){
    NhanVien::Nhap_TTin();
    cout << "Nhap chuyen khoa: ";
    getline(cin, ChuyenKhoa);
    cout << "Nhap so ca da kham: ";
    cin >> SoCa;
}

void BacSi::Xuat(){
    NhanVien::Xuat_TTin();
    cout << "\nChuyen Khoa: " << ChuyenKhoa;
    cout << "\nSo ca da kham: " << SoCa;
}

int BacSi::Luong(){
    return NhanVien::lay_LuongCB() + NhanVien::lay_PhuCap() + 50000*SoCa;
}

void BenhVien::Nhap_dSach(){
    int n, m;
    NhanVienThuong nvt;
    BacSi bs;
    cout << "\nNhap so luong nhan vien thuong: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << "\nNhap thong tin nhan vien thu " << i+1 << " : ";
        nvt.Nhap();
        e.push_back(nvt);
    }

    cout << "\nNhap so luong bac si: ";
    cin >> m;
    for (int i = 0; i < m; i++){
        cout << "\nNhap thong tin bac si thu " << i+1 << " : ";
        bs.Nhap();
        d.push_back(bs);
    }
}

void BenhVien::Xuat_dSach(){
    for (int i = 0;i < e.size(); i++){
        cout << "\n\nThong tin cua nhan vien thu " << i+1 << " : ";
        e[i].Xuat();
        cout << "\n*Luong" << e[i].Luong();
    }


    for(int i = 0; i < d.size(); i++){
        cout << "\n\nThong tin cua bac si thu " << i+1 << " : ";
        d[i].Xuat();
        cout << "\n*Luong: " << d[i].Luong();
    }
}

void BenhVien::BS_LuongCaoNhat(){
    int i;
    int max_luong = d[0].Luong();
    for (i = 0; i < d.size(); i++){
        if(max_luong < d[i].Luong()){
            max_luong = d[i].Luong();
        }
    }

    for (int i = 0; i < d.size(); i++){
        if(d[i].Luong() == max_luong){
            cout << "\n\nBac si co luong cao nhat: " << endl;
            d[i].Xuat();
            cout << "\n*Luong: " << d[i].Luong();
        }
    }
}
