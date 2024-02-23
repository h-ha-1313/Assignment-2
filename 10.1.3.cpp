#include <string>
#include <iostream>
using namespace std;

const int Max = 100001;
int n;

int reverseNum(int n){
    if(n==0) return;

    cout << n % 10;

    reverseNum(n / 10);
}

int main(){
    cout<<"Nhập số n: "; cin>>n;
    cout<<"Số sau khi đảo ngược là: "<< reverseNum(n);
}