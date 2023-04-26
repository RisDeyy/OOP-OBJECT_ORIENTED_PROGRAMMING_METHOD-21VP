#include "point2D.h"

using namespace std;

Point::Point(){
    x = 0;
    y = 0;
}

Point::Point(int x, int y){
    this -> x = x;
    this -> y = y;
}

Point::Point(int x){//nằm trên ox
    this -> x = x;
    this -> y = 0;
}

Point::Point(const Point& point){
    x = point.x;
    y = point.y;
}

Point::Point(string p){
    // doi char sang int: value - 48
    x = p.at(1) - 48;
    y = p.at(3) - 48; //cai nay la tuy IDE :(((
    // cout << "\n" << x << "\t" << y;
}

Point::~Point(){
    //cout << "\nData is deleted!";
}

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
