#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

const int Maxn = 1e7 + 5;
int a[Maxn], n;
int t=1;
long long sum=0;

void countFactorial(int a[],int n){
    while(t<=n){
        long long s=1;
        for(int i=1; i<=a[t]; i++){
            s *=i; //tính factorial của a[t]
        }
        sum += s; //cộng vào tổng
        t++; //cộng vào thứ tự
    }
}

int main(){
    cout<<"Nhập số lượng phần tử trong mảng: ";
    cin>>n;

    cout<<"Nhập phần tử: ";
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    countFactorial(a,n);
    cout<<"Tổng: "<<sum;
}