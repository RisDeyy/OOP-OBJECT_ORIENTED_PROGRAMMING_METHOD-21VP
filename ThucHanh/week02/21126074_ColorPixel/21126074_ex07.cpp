#include "ColorPixel.h"

using namespace std;

int main(){
    ColorPixel cl;
    ColorPixel(30, 40, 40);
    ColorPixel(30, 40);
    ColorPixel(30);

    cl.inPut();
    cl.outPut();

    ColorPixel cl2(cl);
    cl2.outPut();


    return 0;
}