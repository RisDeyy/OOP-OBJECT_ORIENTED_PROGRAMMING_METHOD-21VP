#include "triangle.h"

using namespace std;

void Point::inPut(){
    cout << "\nEnter x, y: ";
    cin >> x >> y;
}

void Point::outPut(){
    cout << "(" << x << ", " << y << ")";
}

int Point::Get_x(){
    return x;
}

int Point::Get_y(){
    return y;
}

int Point::distance(Point X){
    float distance = sqrt((X.x - x)*(X.x - x) + (X.y - y)*(X.y - y));
    return distance;
}

int Point::distance_toOx(){
    return x;
}

int Point::distance_toOy(){
    return y;
}

void Triangle::inPut_Triangle(){
    cout << "\nEnter Coordinate of A: ";
    A.inPut();
    cout << "\nEnter Coordinate of B: ";
    B.inPut();
    cout << "\nEnter Coordinate of C: ";
    C.inPut();
}

void Triangle::outPut_Triangle(){
    cout << "\nA";
    A.outPut();
    cout << "\nB";
    B.outPut();
    cout << "\nC";
    C.outPut();
}

bool Triangle::IsValidTriangle(){
    float AB = A.distance(B);
    float AC = A.distance(C);
    float BC = B.distance(C);
    if (AB + AC <= BC || AB + BC <= AC || AC + BC <= AB){
        return false;
    }else {
        return true;
    }
}

void Triangle::Type_Triangle(){
    float AB = A.distance(B);
    float AC = A.distance(C);
    float BC = B.distance(C);
    // float AB = 3;
    // float AC = 3;
    // float BC = 3;
    if (AB == AC){
        if (AB != BC){
            cout << "This is an Isosceles Triangle at A";
        }else if (AB == BC){
            cout << "This is an Equilateral Triangle";
        }
    }else if(AB == BC){
        if (AB != AC){
            cout << "This is an Isosceles Triangle at B";
        }else if (AB == AC){
            cout << "This is an Equilateral Triangle";
        }
    }else if(AC == BC){
        if (AC != AB){
            cout << "This is an Isosceles Triangle at C";
        }else if (AC == AB){
            cout << "This is an Equilateral Triangle";
        }
    }else if(AB*AB + AC*AC == BC*BC || AB*AB + BC*BC == AC*AC || AC*AC + BC*BC == AB*AB){
        // if (AB == AC && AB != BC){
        //     cout << "This is an Isosceles-Right at A";
        // }else if (AB == BC && AB != AC){
        //     cout << "This is an Isosceles-Right at B";
        // }else if (AC == BC && AC != AB){
        //     cout << "This is an Isosceles-Right at C";
        // }else{
        cout << "This is a Right Triangle";
    }else{
        cout << "This is a Normal Triangle";
    }
}

float Triangle::Perimeter(){
    float AB = A.distance(B);
    float AC = A.distance(C);
    float BC = B.distance(C);
    float P = AB + BC + AC;
    return P;
}

float Triangle::Area(){
    float AB = A.distance(B);
    float AC = A.distance(C);
    float BC = B.distance(C);
    float p = Perimeter() / 2;
    float S = sqrt(p*(p - AB)*(p - AC)*(p - BC));
    return S;
}

float Triangle::CenterG_X(){
    float x_Center = (float)(A.Get_x() + B.Get_x() + C.Get_x())/3;
    return x_Center;
}

float Triangle::CenterG_Y(){
    float y_Center = (float)(A.Get_y() + B.Get_y() + C.Get_y())/3;
    return y_Center;
}