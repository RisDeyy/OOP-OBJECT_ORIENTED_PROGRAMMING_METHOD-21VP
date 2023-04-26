#include <bits/stdc++.h>
using namespace std;

class Point{
    private:
        char x;
        char y;
    public:
        Point();
        Point(int x, int y);
        ~Point();
        void inPut();
        void outPut();
        int Get_x();
        int Get_y();
        int distance(Point X);
        int distance_toOx();
        int distance_toOy();
};

class Triangle{
    private:
        Point A;
        Point B;
        Point C;
    public:
        Triangle();
        Triangle(Point a, Point b, Point c);
        Triangle(Point a, Point b);
        Triangle(const Triangle& t);
        void inPut_Triangle();
        void outPut_Triangle();
        bool IsValidTriangle();
        void Type_Triangle();
        float Perimeter();
        float Area();
        float CenterG_X();
        float CenterG_Y();
        ~Triangle();
};