#include "Triangle.h"

using namespace std;

int main(){

    // cout << "\nTHIS IS CODE OF DAO'ss THANH'ss LUC'ss";

    Point x, y, z, a;
    a = Point(3, 0);

    cout << "\nINPUT:";
    x.inPut();
    y.inPut();
    z.inPut();

    cout << "\nOUTPUT: ";
    cout << "\nPoint X";
    x.outPut();
    cout << "\nPoint Y";
    y.outPut();
    cout << "\nPoint Z";
    z.outPut();
    cout << endl;


    Triangle tgl;
    Triangle(x, y, z);
    Triangle(x, y);
    Triangle tgl2(tgl);
    cout << "\nTRIANGLE: ";
    tgl.inPut_Triangle();
    cout << "\nCOORDINATES OF A, B, C: ";
    tgl.outPut_Triangle();
    
    return 0;
}