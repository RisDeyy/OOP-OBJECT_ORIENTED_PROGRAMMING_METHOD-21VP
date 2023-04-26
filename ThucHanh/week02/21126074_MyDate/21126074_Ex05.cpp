#include "MyDate.h"

using namespace std;
int main(){

    MyDate time2;
    MyDate time3(time2);
    cout << "\n___KHOI TAO NGAY/THANG/NAM___";
    MyDate("12/12/2003");
    MyDate(1, 2, 2000);

    MyDate(1999);
    
    time2.Nhap();

    cout << "\n___XUAT THOI GIAN___";
    //time.Xuat();
    time2.Xuat();
    time3.Xuat();

    cout << "\n___KIEM TRA NHAM NHUAN___";
    //time.KT_NamNhuan();
    time2.KT_NamNhuan();

    // cout << "\n___GAN THOI GIAN MOI___";
    // time.Gan_gtNTN(1, 1, 2003);
    // time.Xuat();

    cout << "\n___LAY THOI GIAN___";
    cout << "\nLay thoi gian cua time2: ngay " << time2.Lay_Ngay() << " thang " << time2.Lay_Thang() << " nam " << time2.Lay_Nam();

    cout << "\n___XAC DINH SO NGAY CO TRONG THANG (CUA NAM X)___";
    //cout << "\nSo ngay co trong thang cua time1: " << time.Lay_SoNgay() << " ngay";
    cout << "\nSo ngay co trong thang cua time2: " << time2.Lay_SoNgay() << " ngay";

    // cout << "\n-> Ngay hom truoc cua ngay " << time.Lay_Ngay() << " thang " << time.Lay_Thang() << " nam " << time.Lay_Nam()<< " la ngay ";
    // int day = time.Lay_Ngay();
    // day --;
	// if (day == 0){
	// 	time.Tim_NgayHomTruoc();
	// }
    // day = time.Lay_SoNgay();
    // cout << day << " thang " << time.Lay_Thang() << " nam " << time.Lay_Nam();

    cout << "\n-> Ngay hom sau cua ngay " << time2.Lay_Ngay() << " thang " << time2.Lay_Thang() << " nam " << time2.Lay_Nam()  << " la ngay ";
    int day2 = time2.Lay_Ngay();
    day2 ++;
    if (day2 > time2.Lay_SoNgay()){
        day2 = 1;
        time2.Tim_NgayHomSau();
    }
    cout << day2 << " thang " << time2.Lay_Thang() << " nam " << time2.Lay_Nam();

    // cout << "\n___TINH KHOANG CACH GIUA 2 NGAY___";
    // cout << "\nKhoang cach tu ngay " << time.Lay_Ngay() << " thang " << time.Lay_Thang() << " nam " << time.Lay_Nam() << " den ngay " << time2.Lay_Ngay() 
    // << " thang " << time2.Lay_Thang() << " nam " << time2.Lay_Nam() << " la " << abs(time.khoangCach() - time2.khoangCach()) << " ngay";

    return 0;

}