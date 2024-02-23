#include<bits/stdc++.h>
using namespace std;

int n, m, a[100][100];
long long sum = 0;

int main(){
    cout<<"Nhập số hàng: "; cin>>m;
    cout<<"Nhập số cột: "; cin>>n;

    cout<<"Nhập phần tử"<<endl;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
            sum += a[i][j];
        }
    }

    cout<<"Tổng là: "<<sum;
}