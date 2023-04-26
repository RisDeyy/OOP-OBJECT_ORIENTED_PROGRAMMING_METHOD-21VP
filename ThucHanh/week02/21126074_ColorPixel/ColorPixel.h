#include <bits/stdc++.h>
using namespace std;

class ColorPixel{
    private:
        int red; //so luong loai cua 1 mau
        int green;
        int blue;
    public:
        ColorPixel();
        ColorPixel(int red, int green, int blue);
        ColorPixel(int red, int green);
        ColorPixel(int red);
        ColorPixel(const ColorPixel& c);
        void inPut();
        void outPut();
        ~ColorPixel();
};