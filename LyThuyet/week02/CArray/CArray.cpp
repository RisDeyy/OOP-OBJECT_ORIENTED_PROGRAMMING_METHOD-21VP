#include "CArray.h"

using namespace std;

void CArray::NhapMang(){
    cout << "\nMang ban muon nhap co bao nhieu phan tu? ";
    cin >> n;
    arr = new int [n];

    for (int i = 0; i < n; i++){
        cout << "\nPhan tu "<< i+1 << ": ";
        cin >> arr[i];
    }
}

void CArray::XuatMang(){
    cout << "\nMang Array co dang: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << "     ";
    }
}

int CArray::Lay_Kthuoc(){
    return n;
}

int CArray::Lay_Ptu(int i){
    return arr[i-1];
}

void CArray::Gan_Ptu(int x, int i){
    arr[i-1] = x;
}

bool CArray::KT_xTonTai(int x){
    for (int i = 0; i < n; i++) {
		if (arr[i] == x) {
			return true;
		}
	}
	return false;
}

int CArray::Ptu_LonNhat(){
    int max = arr[1];
    for (int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }return max;
}

int CArray::Ptu_NhoNhat(){
    int min = arr[1];
    for (int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }return min;
}

void  CArray::SX_BDL(){
    int i, gt, j;
    
    for (i = 1; i < n; i++){
        gt = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] > gt){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = gt;
    }
}

void  CArray::SX_LDB(){
    int i, gt, j;
    
    for (i = 1; i < n; i++){
        gt = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] < gt){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = gt;
    }
}