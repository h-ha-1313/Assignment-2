#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

const int Maxn = 1e7+5;
int n, x, a[Maxn];

int countRepeat(int a[], int n, int x){
    sort(a+1, a+n+1);

    int cnt=0;
    for(int i=1; i<=n; i++){
        if(a[i]==x) cnt++;
        else break;
    }
    
    return cnt;
}

int main(){
    cout<<"Nhập số phần tử trong mảng: ";
    cin>>n;
    
    cout<<"Nhập các phần tử đó: ";
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    cout<<"Nhập phần tử muốn tìm: ";
    cin>>x;

    cout<<"Số lần lặp lại là: "<<countRepeat(a, n, x);
}