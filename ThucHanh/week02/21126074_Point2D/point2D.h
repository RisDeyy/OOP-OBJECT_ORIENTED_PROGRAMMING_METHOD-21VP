#include <bits/stdc++.h>
using namespace std;

class Point{
    private:
        char x;
        char y;
    public:
        Point();
        Point(int x, int y);
        Point(int x);
        Point(const Point& point);
        Point(string p);
        void inPut();
        void outPut();
        int Get_x();
        int Get_y();
        int distance(Point X);
        int distance_toOx();
        int distance_toOy();
        ~Point();
};
