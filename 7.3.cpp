#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

const int Maxn = 1e7+5;
int n, m, x, a[Maxn], b[Maxn];

int main(){
    cout<<"Số phần tử trong mảng 1: ";
    cin>>n;
    cout<<"Nhập phần tử mảng 1: ";
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    cout<<"Số phần tử trong mảng 2: ";
    cin>>m;
    cout<<"Nhập phần tử mảng 2: ";
    for(int i=1; i<=m; i++){
        cin>>b[i];
    }
    
    cout<<"Mảng mới sau khi trộn: ";
    for(int i=1; i<=m; i++){
        cout<<a[i]<<" "<<b[i]<<" ";
    }
}