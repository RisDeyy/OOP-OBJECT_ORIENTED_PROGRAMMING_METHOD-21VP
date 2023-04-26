#include "sort.h"

using namespace std;

void inputFractionArray(Fraction* arr, int n){
    arr = new Fraction[n];
    for (int i = 0; i < n; i++){
        cout << "\nEnter fraction " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void outputFractionArray(Fraction* arr, int n){
    arr = new Fraction[n];
    for (int i = 0; i < n; i++){
        cout << arr[i] << "\t";
    }
}

int main(int argc, char *argv[]) {
    Fraction *arr;
    int n;
    cout << "Enter number of fractions: ";
    cin >> n;
    arr = new Fraction[n];
    inputFractionArray(arr, n);
    outputFractionArray(arr, n);

    SortAlgorithm* sortAlg = new InsertionSort<Fraction>(arr, n);
    sortAlg->sort(SortAlgorithm::INCREASING);
    delete sortAlg;

    cout << "Sorted array: ";
    outputFractionArray(arr, n);

    delete arr;
    return 0;
}