#include "Xe.h"

using namespace std;

int main(){
    XeMay m;
    m.BaoCanNang_HangHoa();
    m.ChatHang(10);
    m.BoBotHang(5);
    m.DoXang(5);
    cout << "\n*Luong Xang: " << m.LuongXang();
    if (m.Ktra_Xang() == 0){
        m.XeChay(5);
    }else if(m.Ktra_Xang() == -1){
        cout << "\nNhien lieu sap su dung het!!!";
    }else {
        cout << "\nNhien lieu da het!!!";
    }

    XeTai n;
    //tuong tu
}