#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

const int Maxn = 1e7+5;
int n, a[Maxn];

int main(){
    cout<<"Nhập số lượng phần tử trong mảng: ";
    cin>>n;
    cout<<"Nhập phần tử: ";
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    int cnt=0;
    for(int i=1; i<=n; i++){
        if(a[i] > 0) cnt++;
    }

    cout<<"Số lượng phần tử dương trong mảng là: "<<cnt;
}