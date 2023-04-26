#include "ColorPixel.h"

using namespace std;

ColorPixel::ColorPixel(){
    red = 0;
    green = 0;
    blue = 0;
}

ColorPixel::ColorPixel(int red, int green, int blue){
    this -> red = red;
    this -> green = green;
    this -> blue = blue;
}

ColorPixel::ColorPixel(int red, int green){ //mac dinh blue la 50 loai
    this -> red = red;
    this -> green = green;
    blue = 50;
}

ColorPixel::ColorPixel(int red){//mac dinh green va blue la 50 loai
    this -> red = red;
    green = blue = 50;
}

ColorPixel::ColorPixel(const ColorPixel& c){
    red = c.red;
    green = c.green;
    blue = c.blue;
}

ColorPixel::~ColorPixel(){
    cout << "\nData is deleted!";
}

void ColorPixel::inPut(){
    cout << "\nEnter number of red'S type: ";
    cin >> red;
    cout << "\nEnter number of green'S type: ";
    cin >> green;
    cout << "\nEnter number of blue'S type: ";
    cin >> blue;
}

void ColorPixel::outPut(){
    cout << "\nNumber of red'S type: " << red;
    cout << "\nNumber of green'S type: " << green;
    cout << "\nNumber of blue'S type: " << blue;
}