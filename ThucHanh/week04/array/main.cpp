#include "Array.h"
using namespace std;
int main(){
    MyVector<int> vector(10);
    cout << endl;
    cout << vector.getItem(3);
    cout << endl;
    cout << vector.getSize();
    cout << endl;
    cout << vector.indexOf(9);
    cout << endl;
    vector.setItem(8, 3);
    cout << vector.getItem(3);
    // vector.clear();
    // cout << endl;
    // vector.getItem(7);
    cout << endl;
    vector.remove(10);
    cout << endl;
    vector.remove(9);
    cout << endl;
    vector.remove(1);
    vector.removeAt(5);
    cout << endl;
    cout << vector.indexOf(5) << "\t";
    cout << vector.lastIndexOf(7);
    cout << endl;
    vector.reverse();

    cout << endl;
    MyVector<Fraction> f(10);
    cout << endl;
    cout << f.getItem(4);
    f.clear();
    //cout << f.toString();
    
}