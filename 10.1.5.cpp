#include<bits/stdc++.h>
using namespace std;

int x, n;
int a;

int giaiThua(int a)
{
    if (a == 1)
        return 1;
    return a * giaiThua(a - 1);
}

int findSin(int x, int n){
    if (n <= 0) 
        return n;
    return pow(-1, n)*(pow(x, 2*n+1)/(giaiThua(2*n + 1))) + findSin(x, n-1);
}

int main(){
    cout<<"Nhập số x trong sin(x): ";
    cin>>x;
    cout<<"Nhập số n: ";
    cin>>n;

    cout<<"Kết quả theo hàm sin(x): "<<sin(x)<<endl;
    cout<<"Kết quả theo n: "<<findSin(x, n);
}