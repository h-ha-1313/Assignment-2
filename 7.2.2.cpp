#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

const int Maxn = 1e7 +5;
int a[Maxn], n, x, b, t;

void deleteArray(int a[], int n, int x, int t){
    for (int i = x + n; i <= t; i++) {
        a[i - n] = a[i];
    }
}

int main(){
    cout<<"Số lượng phần tử trong mảng: ";
    cin>>t;
    cout<<"Nhập phần tử: ";
    for(int i=1; i<=t; i++){
        cin>>a[i];
    }

    cout<<"Nhập vị trí x và khoảng cách n cần xóa: ";
    cin>>x>>n;
    
    deleteArray(a, n, x, t);
    for (int i = 1; i <= t-n; ++i) {
        cout << a[i] << " ";
    }
}