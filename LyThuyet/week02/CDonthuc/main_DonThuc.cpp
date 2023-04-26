#include "CDonThuc.h"

using namespace std;

int main(){
    cout << "Don thuc co dang cho truoc ax^b (a la he so, b la so mu)";

    CDonThuc dt1, dt2;
    dt1.KhoiTao(2, 2);

    cout << "\n___NHAP___";
    dt2.Nhap();

    cout << "\n___XUAT___";
    dt1.Xuat();
    dt2.Xuat();

    cout << "\n___LAY GIA TRI HE SO VA SO MU___\n";
    cout << "Don thuc 1: " << "HS: " << dt1.Lay_HeSo() << "   " << "SM: " << dt1.Lay_SoMu() << endl;
    cout << "Don thuc 2: " << "HS: " << dt2.Lay_HeSo() << "   " << "SM: " << dt2.Lay_SoMu() << endl;

    cout << "___GAN GIA TRI HE SO VA SO MU___";
    cout << "\nDon Thuc 1: ";
    dt1.Gan_HeSo(3);
    dt1.Gan_SoMu(4);
    dt1.Xuat();

    cout << "\n___KET QUA CUA DON THUC___";
    cout << "\nKet qua cho don thuc 1: " << dt1.Tinh_DonThuc(2);
    cout << "\nKet qua cho don thuc 2: " << dt2.Tinh_DonThuc(3);

    /*cout << "\n___TINH DAO HAM___";
    cout << "\nDon thuc 1: ";
    dt1.Tinh_DaoHam();*/

    cout << "\n___CAC PHEP TINH TOAN +, -, *, /___";
    cout << "\n\tPhep Cong (+): " << dt1.Tinh_DonThuc(2) + dt2.Tinh_DonThuc(3);
    cout << "\n\tPhep Tru (-): " << dt1.Tinh_DonThuc(2) - dt2.Tinh_DonThuc(3);
    cout << "\n\tPhep Nhan (*): " << dt1.Tinh_DonThuc(2) * dt2.Tinh_DonThuc(3);
    cout << "\n\tPhep chia (/): " << dt1.Tinh_DonThuc(2) / dt2.Tinh_DonThuc(3);

    return 0;
}