#include <bits/stdc++.h> 
using namespace std; 

const int Max = 100 + 5;
int n, a[Max];

int tongMang(int n, int a[]){
    if(n == 0) return 0;
    return (n) + tongMang(n - 1,a);
}

int main(){
    cout<<"Nhập số lượng phần tử: ";
    cin>>n;

    cout<<"Nhập phần tử: "<<endl;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    int sum = tongMang(n,a);
    cout<<"Tổng của mảng là: "<<sum<<endl;
}