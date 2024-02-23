#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int n,x;
long long res = 1;

int solve(int n , int x){
    if(n == 0) return 1;

    for(int i=1; i<=n; i++){
        res *= x;
    }

    return res;
}

int main(){
    //cout<<"Enter x: ";
    cin>>x;
    //cout<<"Enter n: ";
    cin>>n;

    cout<<solve(n,x);
}