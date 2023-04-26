#include "Xe.h"

using namespace std;

float Xe::Xang = 0;
float Xe::CanNang_HangHoa = 0;

Xe::Xe(){
    QuangDuong = 0;
    Xang = 0;
    CanNang_HangHoa = 0;
}

float Xe::BaoCanNang_HangHoa(){
    return CanNang_HangHoa;
}

float Xe::LuongXang(){
    return Xang;
}

void Xe::DoXang(float doXang){
    Xang += doXang;
}

void Xe::ChatHang(float Hang){
    cout << "\nSo Cang nang hang hoa tren xe la " << BaoCanNang_HangHoa() + Hang << "kg";
    CanNang_HangHoa = BaoCanNang_HangHoa() + Hang;
}

void Xe::BoBotHang(float Hang){
    if (BaoCanNang_HangHoa() == 0){
        cout << "\nKhong co hang hoa nao tren xe";
    }else if (BaoCanNang_HangHoa() < Hang){
        cout << "\nLoi khong xac dinh";
    }else if (BaoCanNang_HangHoa() >= Hang){
        cout << "\nSo Cang nang hang hoa tren xe la " << BaoCanNang_HangHoa() - Hang << "kg";
        CanNang_HangHoa = BaoCanNang_HangHoa() - Hang;
    }
}

XeMay::XeMay(){
    Xe();
}

void XeMay::ChatHang(float Hang){
    Xe::ChatHang(Hang);
}

void XeMay::BoBotHang(float Hang){
    Xe::BoBotHang(Hang);
}

void XeMay::DoXang(float X){
    Xe::DoXang(X);
}

void XeMay::XeChay(float S){
    cout << "\nVoi so can nang hang hoa la " << Xe::BaoCanNang_HangHoa() << "kg";
    cout << "\nXe may chay " << S << "km tieu hao het " << (2 * S /100) + ((0.1 * Xe::BaoCanNang_HangHoa()/10)/100)*S << " lit xang";
    cout << "\nLuong Xang con lai: " << Xe::LuongXang() - ((2 * S /100) + ((0.1 * Xe::BaoCanNang_HangHoa()/10)/100)*S) << " lit xang";
}

bool XeMay::Ktra_Xang(){
    if (Xe::LuongXang() == 0){
        return 1;
    }else if (Xe::LuongXang() > 0 && Xe::LuongXang() <= 0.2){
        return -1; //dua ra canh bao;
    }else if (Xe::LuongXang() > 0.2){
        return 0;
    }
}

XeTai::XeTai(){
    Xe();
}

void XeTai::ChatHang(float Hang){
    Xe::ChatHang(Hang);
}

void XeTai::BoBotHang(float Hang){
    Xe::BoBotHang(Hang);
}

void XeTai::DoXang(float X){
    Xe::DoXang(X);
}

void XeTai::XeChay(float S){
    cout << "\nVoi so can nang hang hoa la " << Xe::BaoCanNang_HangHoa() << "kg";
    cout << "\nXe tai chay " << S << "km tieu hao het " << (20 * S /100) + ((1 * Xe::BaoCanNang_HangHoa()/1000)/100)*S << " lit xang";
    cout << "\nLuong Xang con lai: " << Xe::LuongXang() - ((20 * S /100) + ((1 * Xe::BaoCanNang_HangHoa()/1000)/100)*S) << " lit xang";
}

bool XeTai::Ktra_Xang(){
    if (Xe::LuongXang() == 0){
        return 1;
    }else if (Xe::LuongXang() > 0 && Xe::LuongXang() <= 1){
        return -1; //dua ra canh bao;
    }else if (Xe::LuongXang() > 1){
        return 0;
    }
}








