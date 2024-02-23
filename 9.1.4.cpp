#include<bits/stdc++.h>
using namespace std;

int n, m, a[100][100], sum = 0;

void sumNonNegative(int n, int m, int a[][100]){
    for(int i = 1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(a[i][j] >=0){
                sum += a[i][j];
            }
        }
    }

    cout<<"Tổng số nguyên dương: "<<sum;
}

int main(){
    cout<<"Nhập số hàng: "; cin>>m;
    cout<<"Nhập số cột: "; cin>>n;

    cout<<"Nhập phần tử"<<endl;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
        }
    }

    sumNonNegative(n, m, a);
}