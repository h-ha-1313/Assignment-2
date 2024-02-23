#include<bits/stdc++.h>
using namespace std;

int n, m, a[100][100], bMin[100][100], bMax[100][100];
int r[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int q[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int i = 1, j = 1;

void findMaxMatrix(int n, int m, int a[][100], int i, int j){
    int maxPositive = a[i][j];

    for(int k = 1; k <= 8; k++){
        int curNum = a[i + r[k]][j + q[k]];
        if(curNum > 0){
            maxPositive = max(maxPositive, curNum);
        }
    }

    bMax[i][j] = maxPositive;
}

void findMinMatrix(int n, int m, int a[][100], int i ,int j){
    int minPositive = a[i][j];

    for(int c = 1; c <= 8; c++){
        int curNum = a[i + r[c]][j + q[c]];
        if(curNum > 0){
            minPositive = min(minPositive, curNum);
        }
    }

    bMin[i][j] = minPositive;
}

int main(){
    cout<<"Nhập số hàng: ";
    cin>>m;
    cout<<"Nhập số cột: ";
    cin>>n;
    cout<<"Nhập phần tử: ";
    for(i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
        }
    }
    
    cout<<"Ma trận max: "<<endl;
    for(i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            findMaxMatrix(n, m, a, i, j);
            cout<<bMax[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    cout<<"Ma trận min: "<<endl;
    for(i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            findMinMatrix(n, m, a, i, j);
            cout<<bMin[i][j]<<" ";
        }
        cout<<endl;
    }
}