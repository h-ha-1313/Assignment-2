#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int n,a,b;

bool checkSquare(int n){
    a = sqrt(n);
    b = n/a;
    if(n%a==0 && n%b==0){
        if(a!=b){
            return false;
        }
        return true;
    }
    else return false;
}

int main(){
    cin>>n;

    if(checkSquare(n)){
        cout<<"This is a square number."<<endl;
        cout<<sqrt(n)<<" "<<sqrt(n);
    }
    else cout<<"This is not a square number."<<endl;
}