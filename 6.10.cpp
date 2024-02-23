#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

char n;

void upperCase(char n){
    cout<< char(n-32);
}

int main(){
    cout<<"Nhập chữ: ";
    cin>>n;

    upperCase(n);
}