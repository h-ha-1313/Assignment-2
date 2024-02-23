#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int n;

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main(){
    cin>>n;
    
    for(int i=2; i<n; i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
}