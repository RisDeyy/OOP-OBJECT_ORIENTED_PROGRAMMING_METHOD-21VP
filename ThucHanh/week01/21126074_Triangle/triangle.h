#include <bits/stdc++.h>
using namespace std;

class Point{
    private:
        int x;
        int y;
    public:
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
        void inPut_Triangle();
        void outPut_Triangle();
        bool IsValidTriangle();
        void Type_Triangle();
        float Perimeter();
        float Area();
        float CenterG_X();
        float CenterG_Y();
};