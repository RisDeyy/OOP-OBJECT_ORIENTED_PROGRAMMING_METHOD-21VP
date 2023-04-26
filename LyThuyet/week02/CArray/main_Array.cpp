#include "CArray.h"
using namespace std;

int main(){

    CArray a;

    cout << "\n___NHAP CAC PHAN TU CHO MANG___";
    a.NhapMang();

    cout << "\n___XUAT CAC PHAN TU TRONG MANG___";
    a.XuatMang();

    cout << "\nMang co kich thuoc la " << a.Lay_Kthuoc() << " phan tu";

    cout << "\n___LAY PHAN TU THU i___";
    //vi du lay phan tu thu 2 trong mang co 3 phan tu
    cout << "\nPhan tu duoc lay ra co gia tri la: " << a.Lay_Ptu(2);

    cout << "\n___GAN GIA TRI PHAN TU i___";
    //vi du la gan phan tu thu 2 cua mang cho truoc bang so 57
    cout << "\nMang sau khi duoc gan co dang: ";
    a.Gan_Ptu(57, 2);
    a.XuatMang();

    cout << "\n___KIEM TRA SU TON TAI CUA PHAN TU x TRONG MANG___";
    //vi du: kiem tra doi voi phan tu 57 trong mang -> co ton tai
    if (a.KT_xTonTai(57) == true){
        cout << "\n-> Phan tu co ton tai trong mang"; 
    }else{
        cout << "\n-> Phan ru khong ton tai trong mang";
    }

    cout << "\n___PHAN TU LON NHAT TRONG MANG___";
    cout << "\nPhan tu lon nhat trong mang: " << a.Ptu_LonNhat();

    cout << "\n___PHAN TU LON NHAT TRONG MANG___";
    cout << "\nPhan tu nho nhat trong mang: " << a.Ptu_NhoNhat();

    cout << "\n___SAP XEP THU TU MANG___";
    cout << "\nTheo chieu tu be den lon: ";
    a.SX_BDL();
    a.XuatMang();
    cout << "\nTheo chieu tu lon den be: ";
    a.SX_LDB();
    a.XuatMang();

    return 0;
}

