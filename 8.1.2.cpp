#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

const int Maxn = 1e7 + 5;
int n, a[Maxn];

bool checkDescending(int n, int a[]){
    for(int i=1; i<=(n-1); i++){
        if(a[i] < a[i+1]){
            return false;
        }
    }

    return true;
}

bool checkAscending(int n, int a[]){
    for(int i=1; i<=(n-1); i++){
        if(a[i] > a[i+1]){
            return false;
        }
    }

    return true;
}

int main(){
    cout<<"Nhập số lượng trong mảng: ";
    cin>>n;
    cout<<"Nhập phần tử: ";
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    if(checkAscending(n,a)){
        cout<<"The array is ascending";
    }
    else if(checkDescending(n,a)){
        cout<<"The array is descending";
    }
    else cout<<"The array is none of them";
}