#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int tu, mau;
int num=0;

int simplified(int tu, int mau){
    num = __gcd(tu, mau);

    return num;
}

int main(){
    cout<<"Nhập tử số: ";
    cin>>tu;
    cout<<"Nhập mẫu số: ";
    cin>>mau;

    cout<<"Phân số tối giản có dạng: "<<tu/simplified(tu, mau) <<"/"<< mau/simplified(tu, mau);
}