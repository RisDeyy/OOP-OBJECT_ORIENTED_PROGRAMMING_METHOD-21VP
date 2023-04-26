#include "point2D.h"

using namespace std;

int main(){

    cout << "\nTHIS IS CODE OF DAO'ss THANH'ss LUC'ss";

    Point a, b, c;
    Point("(3, 2)");
    Point(1, 2);
    Point(4);

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
    Point x(a);
    cout << "\nPoint X";
    x.outPut();


    cout << "\nDistance from A to B is: " << a.distance(b);
    cout << "\nDistance from A to Ox is: " << a.distance_toOx();
    cout << "\nDistance from B to Ox is: " << b.distance_toOx();
    cout << "\nDistance from A to Oy is: " << a.distance_toOy();
    cout << "\nDistance from B to Oy is: " << b.distance_toOy();

    return 0;
}