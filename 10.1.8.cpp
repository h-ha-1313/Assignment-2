#include <string>
#include <iostream>
using namespace std;

const int Max = 100001;
int n;

int generateArray(int n){
    if(n==0) return;

    cout << n % 10 <<" ";

    generateArray(n / 10);
}

int main(){
    cout<<"Mảng gồm 1, 2, 3";
    int n = 123;
    cout<<"Mảng được tạo là: "<< generateArray(n);
}