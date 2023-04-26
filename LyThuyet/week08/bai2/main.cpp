#include "Congty.h"

using namespace std;

int main(){
    // NhanVien *nv = new NV_QuanLy;
    // nv -> Nhap();
    // nv -> Xuat();

    CongTy c;
    c.Nhap_danhSach();
    c.Xuat_danhSach();
    cout << "\n*Tong luong ma cong ty phai tra: " << c.tongLuong_cty() << " vnd";
    c.tim_theoTen();

    return 0;
}