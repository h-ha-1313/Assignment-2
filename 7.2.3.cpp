#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

const int Maxn = 1e7+5;
int a[Maxn], b[Maxn], c[Maxn];
int n;

void greastestCommonDivisor(int a[], int b[], int n){
    for(int i=1; i<=n; i++){
        c[i]=__gcd(a[i],b[i]);
    }
}

int main(){
    cout<<"Số phần tử trong 1 mảng: ";
    cin>>n;

    cout<<"Nhập phần tử của mảng a: ";
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    cout<<"Nhập phần tử của mảng b: ";
    for(int i=1; i<=n; i++){
        cin>>b[i];
    }

    greastestCommonDivisor(a, b, n);
    for(int i=1; i<=n; i++){
        cout<<c[i]<<" ";
    }
}