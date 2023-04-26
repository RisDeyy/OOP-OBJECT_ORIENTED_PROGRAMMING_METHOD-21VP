#include "triangle.h"

using namespace std;

int main(){

    cout << "\nTHIS IS CODE OF DAO'ss THANH'ss LUC'ss";

    Point a, b, c;
    cout << "\nINPUT:";
    a.inPut();
    b.inPut();
    //c.inPut();

    cout << "\nOUTPUT: ";
    cout << "\nPoint A";
    a.outPut();
    cout << "\nPoint B";
    b.outPut();
    // cout << "\nPoint C";
    // c.outPut();
    // cout << endl;


    cout << "\nDistance from A to B is: " << a.distance(b);
    cout << "\nDistance from A to Ox is: " << a.distance_toOx();
    cout << "\nDistance from B to Ox is: " << b.distance_toOx();
    cout << "\nDistance from A to Oy is: " << a.distance_toOy();
    cout << "\nDistance from B to Oy is: " << b.distance_toOy();

    Triangle tgl;
    cout << "\nTRIANGLE: ";
    tgl.inPut_Triangle();
    cout << "\nCOORDINATES OF A, B, C: ";
    tgl.outPut_Triangle();

    if (tgl.IsValidTriangle() == true){
        cout << "\nThis is a Valid Triangle!";
        cout << "\n-> ";
        tgl.Type_Triangle();
        cout << "\nTriangle's Perimeter is: " << tgl.Perimeter();\
        cout << "\nTriangle's Area is: " << tgl.Area();
        cout << "\nCenter: G(" << tgl.CenterG_X() << ", " << tgl.CenterG_Y() << ")";
    }else if (tgl.IsValidTriangle() == false){
        cout << "\nThis isn't a Valid Triangle!";
    }
    
    return 0;
}