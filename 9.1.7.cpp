#include<bits/stdc++.h>
using namespace std;

int n, m, a[100][100];

void sortArray(int n, int m, int a[][100]){
    for(int i=1; i<=m; i++){
        sort(a[i] + 1, a[i] + n + 1);
    }

    cout<<"Mảng sau khi sắp xếp: "<<endl;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    cout<<"Nhập số hàng: "; cin>>m;
    cout<<"Nhập số cột: "; cin>>n;

    cout<<"Nhập phần tử: "<<endl;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
        }
    }

    sortArray(n, m, a);
}