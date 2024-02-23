#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int n;
long long res = 1;

int solve(int n){
    if(n<=1) return n;

    for(int i=1; i<=n; i++){
        res *= i;
    }
    
    return res;
}

int main(){
    cin>>n;

    cout<<solve(n);
}