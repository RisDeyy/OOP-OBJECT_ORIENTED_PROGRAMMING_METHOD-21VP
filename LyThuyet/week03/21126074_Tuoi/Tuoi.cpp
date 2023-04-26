#include "Tuoi.h"

using namespace std;
#define MAX 100

Tuoi::Tuoi(){
    ten = NULL;
    diachi = NULL;
    ngay = 0;
    thang = 0;
    nam = 0;
}

Tuoi::Tuoi(int ngay, int thang, int nam){
    ten = new char(MAX);
    diachi = new char(MAX);
    strcpy(ten,"NO_NAME");
    strcpy(diachi,"NO_ADDRESS");
    this -> ngay = ngay;
    this -> thang = thang;
    this -> nam = nam;
}

Tuoi::Tuoi(const Tuoi& t){
    ten = t.ten;
    diachi = t.diachi;
    ngay = t.ngay;
    thang = t.thang;
    nam = t.nam;
}

Tuoi::~Tuoi(){
    delete ten;
    delete diachi;
    cout << "\nDu lieu da huy!";
}

void Tuoi::Nhap_tt(){
    ten = new char(MAX);
    diachi = new char(MAX);
    cout << "Nhap Ho Ten: ";
    fgets(ten, MAX, stdin);
    cout << "Nhap Dia Chi: ";
    fgets(diachi, MAX, stdin);
    cout << "Nhap Ngay/Thang/Nam Sinh: ";
    cin >> ngay >> thang >> nam;
}

void Tuoi::Xuat_tt(){
    cout << "Ho Ten: " << ten;
    cout << "Dia Chi: " << diachi;
    cout << "Ngay/Thang/Nam Sinh: " << ngay << "/" << thang << "/" << nam;
}

char *Tuoi::Lay_Ten(){
    return ten;
}

char *Tuoi::Lay_Diachi(){
    return diachi;
}

int Tuoi::Lay_Ngay(){
    return ngay;
}

int Tuoi::Lay_Thang(){
    return thang;
}

int Tuoi::Lay_Nam(){
    return nam;
}

void Tuoi::Ngay_HienTai(){
    cout << "\nNhap vao thoi gian hien tai: ";
    cin >> ngay >> thang >> nam;
}

int Tuoi::Khoang_Cach(){
//tinh so ngay tu ngay 1/1/01 den ngay dd/mm/yy nhap tu ban phim
//tinh so ngay tu 1/1/01 den 1/1/yy
    int KCach = 0;
    for (int i = 1; i < nam; i++){
        if (nam % 100 == 0){
            if (nam % 400 == 0)
                KCach += 366;
            else 
                KCach += 365;  
        }else if(nam % 4 == 0){
            KCach += 366;
        }else {
            KCach += 365;
        }
    }

    //tinh so ngay tu 1/1/yy den dd/mm/yy
    int KCach_ngay = ngay;
    for (int j = 1; j < thang; j++){
        KCach_ngay += Lay_Ngay();
    }

    KCach += KCach_ngay;
    return KCach;
}

int Tuoi::tuoi_Tinh(Tuoi t1, Tuoi t2){
    int tuoi = abs(t2.Khoang_Cach() - t1.Khoang_Cach())/365;
    return tuoi;
}