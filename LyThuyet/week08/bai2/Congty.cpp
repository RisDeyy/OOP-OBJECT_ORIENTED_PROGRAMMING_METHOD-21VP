#include "Congty.h"

using namespace std;

int NhanVien::LuongCB = 3000000;
NV_QuanLy::NV_QuanLy():NhanVien(){
    HS_chucVu = 0;
    Thuong = 0;
}

NV_QuanLy::NV_QuanLy(string name, string date, int heso, int thuong):NhanVien(name, date){
    HS_chucVu = heso;
    Thuong = thuong;
}

NV_QuanLy::NV_QuanLy(const NV_QuanLy &ql): NhanVien(ql){
    HS_chucVu = ql.HS_chucVu;
    Thuong = ql.Thuong;
}

NV_QuanLy::~NV_QuanLy(){
  
}

void NV_QuanLy::Nhap(){
    cin.ignore();
    cout << "\nNhap ho va ten: ";
    getline(cin, HoTen);
    cout << "Nhap ngay vao lam: ";
    getline(cin, NgayVaoLam);
    cout << "Nhap he so chuc vu: ";
    cin >> HS_chucVu;
    cout << "Nhap tien thuong: ";
    cin >> Thuong;
}

void NV_QuanLy::Xuat(){
    cout << "\nHo va ten: " << HoTen;
    cout << "\nNgay vao lam: " << NgayVaoLam;
    cout << "\nHe so chuc vu: " << HS_chucVu;
    cout << "\nTien thuong: " << Thuong << " vnd";
    cout << "\nLuong: " << Luong() << " vnd";
}

int NV_QuanLy::Luong(){
    return NhanVien::lay_LuongCB()*HS_chucVu + Thuong;
}

NV_VanPhong::NV_VanPhong():NhanVien(){
    soNgayLamViec = 0;
    TroCap = 0;
}

NV_VanPhong::NV_VanPhong(string name, string date, int songay, int trocap):NhanVien(name, date){
    soNgayLamViec = songay;
    TroCap = trocap;
}

NV_VanPhong::NV_VanPhong(const NV_VanPhong& vp):NhanVien(vp){
    soNgayLamViec = vp.soNgayLamViec;
    TroCap = vp.TroCap;
}

NV_VanPhong::~NV_VanPhong(){
   
}

void NV_VanPhong::Nhap(){
    cin.ignore();
    cout << "\nNhap ho va ten: ";
    getline(cin, HoTen);
    cout << "Nhap ngay vao lam: ";
    getline(cin, NgayVaoLam);
    cout << "Nhap so ngay lam viec: " ;
    cin >> soNgayLamViec;
    cout << "Nhap so tro cap: ";
    cin >> TroCap;
}

void NV_VanPhong::Xuat(){
    cout << "\nHo va ten: " << HoTen;
    cout << "\nNgay vao lam: " << NgayVaoLam;
    cout << "\nSo ngay lam viec: " << soNgayLamViec << " ngay";
    cout << "\nTro cap: " << TroCap << " vnd";
    cout << "\nLuong: " << Luong() << " vnd";
}

int NV_VanPhong::Luong(){
    return NhanVien::lay_LuongCB() + soNgayLamViec*100000 + TroCap;
}

NV_SanXuat::NV_SanXuat():NhanVien(){
    soSanPham = 0;
}

NV_SanXuat::NV_SanXuat(string name, string date, int sosanpham):NhanVien(name, date){
    soSanPham = sosanpham;
}

NV_SanXuat::NV_SanXuat(const NV_SanXuat& sx): NhanVien(sx){
    soSanPham = sx.soSanPham;
}

NV_SanXuat::~NV_SanXuat(){
    
}

void NV_SanXuat::Nhap(){
    cin.ignore();
    cout << "\nNhap ho va ten: ";
    getline(cin, HoTen);
    cout << "Nhap ngay vao lam: ";
    getline(cin, NgayVaoLam);
    cout << "Nhap so san pham lam duoc: ";
    cin >> soSanPham;
}

void NV_SanXuat::Xuat(){
    cout << "\nHo va ten: " << HoTen;
    cout << "\nNgay vao lam: " << NgayVaoLam;
    cout << "\nSo san pham lam duoc: " << soSanPham << " san pham";
    cout << "\nLuong: " << Luong() << " vnd";
}

int NV_SanXuat::Luong(){
    return NhanVien::lay_LuongCB() + soSanPham*2000;
}

void CongTy::Nhap_danhSach(){
    int n;
    cout << "\nNhap so luong nhan vien: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << "\nChon bo phan nhan vien de nhap thong tin: ";
        cout << "\n\t1. Nhan vien bo phan Quan Ly.";
        cout << "\n\t2. Nhan vien bo phan Van Phong.";
        cout << "\n\t3. Nhan vien bo phan San Xuat.";
        int choice;
        cout << "\nChon: ";
        cin >> choice;
        switch (choice){
        case 1: {
            NhanVien *ql = new NV_QuanLy;
            cout << "\nNhap thong tin nhan vien quan ly (nhan vien thu " << i+1 << ") : ";
            ql -> Nhap();
            congty.push_back(ql);
            break;
        }

        case 2: {
            NhanVien *vp = new NV_VanPhong;
            cout << "\nNhap thong tin nhan vien van phong (nhan vien thu " << i+1 << ") : ";
            vp -> Nhap();
            congty.push_back(vp);
            break;
        }

        case 3: {
            NhanVien *sx = new NV_SanXuat;
            cout << "\nNhap thong tin cong nhan (nhan vien thu " << i+1 << ") : ";
            sx -> Nhap();
            congty.push_back(sx);
            break;
        }
        
        default:
            break;
        }
    }
}

void CongTy::Xuat_danhSach(){
    for (int i = 0; i < congty.size(); i++){
        cout << "\nThong tin nhan vien " << i+1 << ": ";
        congty[i] -> Xuat();
        cout << endl;
    }
}

int CongTy::tongLuong_cty(){
    int tongLuong = 0;
    for (int i = 0; i < congty.size(); i ++){
        tongLuong += (congty[i] -> Luong());
    }
    return tongLuong;
}

void CongTy::tim_theoTen(){
    string name;
    bool isFound = false;
    cout << "\n\nNhap ho ten nhan vien muon tim thong tin: ";
    cin.ignore();
    getline(cin, name);
    for(int i = 0; i < congty.size(); i++){
        if(congty[i] -> lay_Ten() == name){
            congty[i] -> Xuat();
            isFound = true;
        }
    }
    if (!isFound) {
        cout << "*Khong tim thay thong tin!";
    }
}