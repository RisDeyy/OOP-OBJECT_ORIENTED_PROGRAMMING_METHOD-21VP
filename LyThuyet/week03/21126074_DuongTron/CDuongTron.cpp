#include "CDuongTron.h"
#define pi 3.1415

using namespace std;

CDiem::CDiem(){
    x = 0;
    y = 0;
}

CDiem::CDiem(float a, float b){
    x = a;
    y = b;
}

CDiem::~CDiem(){
    cout << "\nDu lieu da bi huy";
}

void CDiem::Nhap_Toado(){
    cout << "\nNhap toa do x: ";
    cin >> x;
    cout << "\nNhap toa do y: ";
    cin >> y;
}

void CDiem::Xuat_Toado(){
    cout << "\n(" << x << ", " << y << ")";
}

float CDiem::Lay_X(){
    return x;
}

float CDiem::Lay_Y(){
    return y;
}

float CDiem::Distance(CDiem X){
    float distance = (float)sqrt((X.x - x)*(X.x - x) + (X.y -y)*(X.y - y));
    return distance;
}

CDuongTron::CDuongTron(){
    r = 0;
    CDiem();
}

CDuongTron::CDuongTron(float r){
    this -> r = r;
}

CDuongTron::~CDuongTron(){
    //....
    cout << "\nDu lieu da huy!";
}

float CDuongTron::Chvi(CDiem X, CDiem Y){
    r = X.Distance(Y);
    float cv = (float)(r*2*pi);
    return cv;
}

float CDuongTron::Dtich(CDiem X, CDiem Y){
    r = X.Distance(Y);
    float dt = (float)(r*r*pi);
    return dt;
}

