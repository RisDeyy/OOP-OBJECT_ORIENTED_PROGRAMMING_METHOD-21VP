#include "Benhvien.h"

using namespace std;

int NhanVien::luongCB = 1115000;
int NhanVien::PhuCap = 50000;
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

// void NhanVien::gan_LuongCB(int lcb){
//     luongCB = lcb;
// }

int NhanVien::lay_LuongCB(){
    return luongCB;
}

// void NhanVien::gan_PhuCap(int pc){
//     PhuCap = pc;
// }

int NhanVien::lay_PhuCap(){
    return PhuCap;
}

NhanVienThuong::NhanVienThuong():NhanVien(){
    
}

NhanVienThuong::NhanVienThuong(int id, string name, string phone, string address, string date) : NhanVien(id, name, phone, address, date) {}

NhanVienThuong::NhanVienThuong(const NhanVienThuong& nvt): NhanVien(nvt){
   
}

NhanVienThuong::~NhanVienThuong(){
    
}

void NhanVienThuong::Nhap(){
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

void NhanVienThuong::Xuat(){
    cout << "\nMa so: " << MaSo;
    cout << "\nHo ten: " << HoTen;
    cout << "\nSo dien thoai: " << sdt;
    cout << "\nDia chi: " << DiaChi;
    cout << "\nNgay sinh: " << Ngaysinh;
    cout << "\nLuong: " << Luong();
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

BacSi::~BacSi(){

}

void BacSi::Nhap(){
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
    cout << "Nhap chuyen khoa: ";
    getline(cin, ChuyenKhoa);
    cout << "Nhap so ca da kham: ";
    cin >> SoCa;
}

void BacSi::Xuat(){
    cout << "\nMa so: " << MaSo;
    cout << "\nHo ten: " << HoTen;
    cout << "\nSo dien thoai: " << sdt;
    cout << "\nDia chi: " << DiaChi;
    cout << "\nNgay sinh: " << Ngaysinh;
    cout << "\nChuyen Khoa: " << ChuyenKhoa;
    cout << "\nSo ca da kham: " << SoCa;
    cout << "\nLuong: " << Luong();
}

int BacSi::Luong(){
    return NhanVien::lay_LuongCB() + NhanVien::lay_PhuCap() + 50000*SoCa;
}

void BenhVien::Nhap_dSach(){
    int n;
    cout << "\nNhap so luong nhan vien: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "\nLua chon nhap thong tin nhan vien thuong hay bac si?";
        cout << "\n\t1. Nhap thog tin nhan vien thuong";
        cout << "\n\t2. Nhap thong tin bac si";
        cout << "\nChon: ";
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1: {
            NhanVien *nvt = new NhanVienThuong;
            cout << "\nNhap thong tin nhan vien thuong (nhan vien thu " << i + 1 << ") : ";
            nvt -> Nhap();
            e.push_back(nvt);
            break;
        }

        case 2: {
            NhanVien *bs = new BacSi;
            cout << "\nNhap thong tin bac si (nhan vien thu " << i + 1 << " ) : ";
            bs -> Nhap();
            e.push_back(bs);
        }
        default:
            break;
        }
    }
}

void BenhVien::Xuat_dSach(){
    for (int i = 0;i < e.size(); i++){
        e[i] -> Xuat();
        cout << endl;
    }
}

void BenhVien::BS_LuongCaoNhat(){
    //luong bac si luon cao hon hoac bang luong nhan vien thuong
    //vi co n bac si trong 1 benh vien, nen moi bac si se co it nhat 0 ca moi thang.
    //ma benh vien luc nao cung co ca benh nen 1 ngay co it nhat 1 ca (1 bac si nhan ca)
    //yeu cau: tra ve thong tin cua 1 bac si co luong cao nhat
    //vay ham sau day van dua ra thong tin bac si có luong cao nhat dung nhu de bai
    int i;
    int max_luong = e[0] -> Luong();
    for (i = 0; i < e.size(); i++){
        if(max_luong < e[i] -> Luong()){
            max_luong = e[i] -> Luong();
        }
    }

    for (int i = 0; i < e.size(); i++){
        if(e[i] -> Luong() == max_luong){
            cout << "\n\nBac si co luong cao nhat: " << endl;
            e[i] -> Xuat();
        }
    }
}
