#include "bits-stdc++.h"
using namespace std;

const int Max = 100001;
int n, a[Max];

bool isIncreasing(int n, int a[]){
    if (n <= 1) return true;

    return (a[n] > a[n - 1]) && isIncreasing(n - 1, a);
}

int main(){
    cout<<"Nhập số lượng phần tử trong mảng: ";
    cin>>n;

    cout<<"Nhập mảng: "<<endl;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    if (isIncreasing(n, a)) {
        cout << "Array is increasing";
    } else {
        cout << "Array is not increasing";
    }
}