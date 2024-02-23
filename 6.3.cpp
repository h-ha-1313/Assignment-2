#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

const long long Max = 1e7+5;
int n;

int transNumber(int n) {
    int trans = 0; 

    while (n > 0) {
        int digit = n % 10;
        trans = trans * 10 + digit;
        n /= 10;
    }
    
    return trans;
}

int main(){
    cout<<"Enter a number: ";
    cin>>n;

    cout<<transNumber(n);
}