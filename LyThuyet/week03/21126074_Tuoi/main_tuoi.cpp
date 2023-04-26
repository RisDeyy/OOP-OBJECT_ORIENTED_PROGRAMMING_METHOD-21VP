#include "Tuoi.h"
using namespace std;

int main(){
    Tuoi t, t2, t3;

    cout << "NHAP THONG TIN: \n\n";
    t.Nhap_tt();
    cout << "--------------------------------\n";
    cout << "THONG TIN DUOC GHI NHAN: \n\n";
    t.Xuat_tt();

    //cout << "\n" << t.Lay_Ten();
    cout << "\n\nTINH TUOI: ";
    t2.Ngay_HienTai();
    //cout << t.Khoang_Cach() << "\t" << t2.Khoang_Cach();
    cout << "-> Tuoi Cua Ban La: " << t3.tuoi_Tinh(t, t2) << " tuoi";

    return 0;
}