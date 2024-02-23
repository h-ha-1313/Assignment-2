#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

const int Maxn = 1e7+5;
int n, a[Maxn];

int fib(int b) 
{ 
    if (b <= 1) 
        return b; 
    return fib(b - 1) + fib(b - 2); 
}

int main(){
    cout<<"Nhập độ dài mảng: ";
    cin>>n;

    cout<<"Mảng các số Fibonaci: ";
    for(int i=1; i<=n; i++){
        cout<<fib(i)<<" ";
    }
}