#include <string>
#include <iostream>
using namespace std;

const int Max = 100001;
int n;

double sqrtNum(int n){
    if(n==1) return sqrt(2.0);

    return sqrt(2*n + sqrtNum(n - 1));
}

int main(){
    cout<<"Nhập số n: "; cin>>n;

    double res = sqrtNum(n);
    cout<<"Kết quả là: " << res;
}