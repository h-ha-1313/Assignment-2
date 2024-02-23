#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

string name[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
int n;

void inWord(int n){
    cout<<name[n - 1];
}

int main(){
    cin>>n;

    inWord(n);
}