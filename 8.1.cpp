#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

const int Maxn = 1e7 + 5;
int a[Maxn], n, x;

bool checkAppear(int a[], int n, int x){
    for(int i=1; i<=n; i++){
        if(x==a[i]){
            return true;
        }
    }

    return false;
}

int main(){
    cout<<"Nhập số phần tử trong mảng: ";
    cin>>n;
    cout<<"Nhập phần tử: ";
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    cout<<"Nhập số x cần tìm: ";
    cin>>x;

    if(!checkAppear) cout<<"x has appeared in array.";
    else cout<<"x has not appeared in array.";
}