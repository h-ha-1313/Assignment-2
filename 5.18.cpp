#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int n;

int fib(int n) 
{ 
    if (n <= 1) 
        return n; 
    return fib(n - 1) + fib(n - 2); 
}

int main(){
    cin>>n;
    cout << fib(n);
}