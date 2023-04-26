#include "CHocSinh.h"

using namespace std;

int main(){
    cout << "\n___THONG TIN HOC SINH___";
    CHocSinh hs; 
    CHocSinh hs2;

    cout << "\n___NHAP THONG TIN___";
    hs.Nhap();

    cout << "\n___THONG TIN DUOC GHI NHAN___";
    hs.Xuat();

    cout << "\n___LAY THONG TIN___";
    cout << "\nTen hoc sinh: " << hs.Lay_TT();
    cout << "\nDiem mon van: " << hs.Lay_dVan();
    cout << "\nDiem mon toan: " << hs.Lay_dToan();

    cout << "\n___GAN THONG TIN___";
    hs.Gan_hTen("Ngo Hoang Minh Khang Mupsss");
    cout << "\nTen hoc sinh hien tai duoc gan: " << hs.Lay_TT();
    hs.Gan_dVan(9);
    cout << "\nDiem van sau khi gan: " << hs.Lay_dVan();
    hs.Gan_dToan(8);
    cout << "\nDiem toan sau khi gan: " << hs.Lay_dToan();

    cout << "\n___DIEM TRUNG BINH___";
    cout << "\nDTB = " << (hs.Lay_dVan() + hs.Lay_dToan())/2 << "diem";

    cout << "\n___XEP LOAI___";
    float dtb = (hs.Lay_dVan() + hs.Lay_dToan())/2;
    if (dtb >= 8 && dtb <=10){
        cout << "\nXep loai Gioi";
    }if (dtb >= 7 && dtb < 8){
        cout << "\nXep loai Kha";
    }if (dtb >= 5 && dtb < 7){
        cout << "\nXep loai Trung Binh";
    }if (dtb >= 0 && dtb < 5){
        cout << "\nXep loai Yeu";
    }

    return 0;
}