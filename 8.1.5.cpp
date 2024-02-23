#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

const int Maxn = 1e7 + 5;
int n,a[Maxn];
int cnt = 1;

int countNum(int n, int a[]){
    sort(a + 1, a + n + 1);
    for(int i=2; i<=n; i++){
        if(a[i] != a[i-1]){
            cnt++;
        }
    }
}

int main(){
    cout<<"Nhập số lượng phần tử: ";
    cin>>n;
    cout<<"Nhập phần tử: ";
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    countNum(n,a);
    cout<<"Số phần tử khác nhau: "<<cnt;
}