#include<bits/stdc++.h>
using namespace std;

int m, a[100][100];
int firstDiagonal = 0, totalSum = 0;

void sumExtraDiagonal(int m, int a[][100]){
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m; j++){
            totalSum += a[i][j];
            if(i == j) firstDiagonal += a[i][j];
        }
    }

    cout<<"Tổng của đường phụ chéo: "<< (totalSum - firstDiagonal)<<endl;
}

int main(){
    cout<<"Nhập số hàng (số hàng bằng số cột): "; cin>>m;

    cout<<"Nhập phần tử: "<<endl;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m; j++){
            cin>>a[i][j];
        }
    }

    sumExtraDiagonal(m, a);
}