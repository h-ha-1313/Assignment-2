#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int n,k;
long long C, t=1, m1=1, m2=1;

int tu(int n){
    if(n<1) return 1;

    for(int i=1; i<=n; i++){
        t *= i;
    }

    return t;
}

int mau(int n, int k){
    if(k<1) return 1;

    for(int i=1; i<=k; i++){
        m1 *= i;
    }

    for(int i=1; i<=(n-k); i++){
        m2 *= i;
    }

    return m1*m2;
}

int main(){
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter k: ";
    cin>>k;
    
    C = tu(n)/mau(n,k);
    cout<<C;
}