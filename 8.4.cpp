#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

const int Maxn = 1e7 +5;
int n, a[Maxn];

int main(){
    cout<<"Nhập số lượng mảng: ";
    cin>>n;
    cout<<"Nhập phần tử: ";
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    
    cout<<"Mảng sau khi đổi: ";
    for(int i=n; i>0; i--){
        cout<<a[i]<<" ";
    }
}