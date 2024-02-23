#include<bits/stdc++.h>
using namespace std;

int n;

int giaiThua(int n){
    if(n == 0)
        return 1;
    return n*giaiThua(n-1);
}

int main(){
    cout<<"Nhập n: "; cin>>n;
    if(n<0) cout<<"Invalid";

    cout<<"Giai thừa của n: "<<giaiThua(n);
}