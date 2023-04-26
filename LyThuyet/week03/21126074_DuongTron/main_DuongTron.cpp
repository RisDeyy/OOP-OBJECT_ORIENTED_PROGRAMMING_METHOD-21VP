#include "CDuongTron.h"

using namespace std;

int main(){

    CDiem(A);
    CDiem(B);

    cout << "\nNHAP TOA DO: ";
    A.Nhap_Toado();
    B.Nhap_Toado();
    
    cout << "\nXUAT TOA DO: ";
    A.Xuat_Toado();
    B.Xuat_Toado();

    cout << "\nKhoang cach tu A den B = " << A.Distance(B);

    CDuongTron c;
    cout << "\nChu vi duong tron co ban kinh AB = " << c.Chvi(A, B);
    cout << "\nDien tich duong tron co ban kinh AB = " << c.Dtich(A, B);

    A.~CDiem();
    B.~CDiem();

    return 0;
}

