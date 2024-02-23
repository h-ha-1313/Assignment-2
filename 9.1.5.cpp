#include<bits/stdc++.h>
using namespace std;

int m, a[100][100];
int firstDiagonal = 0, secondDiagonal = 0;

void sumMainDiagonal(int m, int a[][100]){
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m; j++){
            if(i == j) firstDiagonal += a[i][j];
            if((i+j) == (m+1)) secondDiagonal += a[i][j];
        }
    }

    cout<<"Tổng của đường chéo chính thứ nhât: "<<firstDiagonal<<endl;
    cout<<"Tổng của đường chéo chính thứ hai: "<<secondDiagonal<<endl;
}

int main(){
    cout<<"Nhập số hàng (số hàng bằng số cột): "; cin>>m;

    cout<<"Nhập phần tử: "<<endl;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m; j++){
            cin>>a[i][j];
        }
    }

    sumMainDiagonal(m, a);
}