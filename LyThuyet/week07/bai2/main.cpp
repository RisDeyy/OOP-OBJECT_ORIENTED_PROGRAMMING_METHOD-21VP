#include "Benhvien.h"

using namespace std;

int main(){
    int lcb, pc;
    NhanVien nv;
    cout << "\nNhap luong co ban: ";
    cin >> lcb;
    cout << "Nhap phu cap: ";
    cin >> pc;
    nv.gan_LuongCB(lcb);
    nv.gan_PhuCap(pc);
    NhanVienThuong nvt;
    nvt.Nhap();
    nvt.Xuat();
    cout << "\nLuong: " << nvt.Luong();

    BacSi bs;
    bs.Nhap();
    bs.Xuat();
    cout << "\nLuong: " << bs.Luong();

    // BenhVien h;
    // h.Nhap_dSach();
    // h.Xuat_dSach();
    // h.BS_LuongCaoNhat();

    return 0;

}