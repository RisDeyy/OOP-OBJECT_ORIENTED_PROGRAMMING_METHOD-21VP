#include "MyIntArray.h"

using namespace std;

int main(){
    MyIntArray arr;

    int arr1[5] = {1, 2, 3, 4};
    MyIntArray(arr1);
    
    MyIntArray(9);
    cout << endl;
    MyIntArray(0, 9);
    arr.inPut();
    arr.outPut();

    MyIntArray arr2(arr);
    arr2.outPut();

    return 0;

}