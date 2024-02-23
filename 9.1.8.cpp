#include<bits/stdc++.h>
using namespace std;

int n, m, a[100][100], b[100][100];
int c[100][100], d[100][100];

void productMatrix(int n, int m, int a[][100], int b[][100]){
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < m; j++) {
            d[i][j] = 0;
            for (int k = 1; k < n; k++) {
                d[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout<<"Tích của ma trận: "<<endl;
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < m; j++) {
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void sumMatrix(int n, int m, int a[][100], int b[][100]){
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    cout<<"Tổng hai matrixs: "<<endl;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main(){
    cout<<"Lưu ý hai ma trận phải cùng cấp (điều kiện tính tổng) và số cột của mảng 1 bảng mảng 2 (điều kiện tính tích)"<<endl;
    cout<<"Nhập số hàng (của cả hai ma trận): "; cin>>m;
    cout<<"Nhập số cột (của cả hai ma trận): "; cin>>n;

    if(m != n) cout<<"INVALID";

    cout<<"Nhập phần tử của mảng 1: "<<endl;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
        }
    }

    cout<<"Nhập phần tử của mảng 2: "<<endl;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cin>>b[i][j];
        }
    }

    sumMatrix(n, m, a, b);
    productMatrix(n, m, a, b);
}