#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

const int Maxn = 1e7 + 5;
int n, a[Maxn];

void sortDescending(int n, int a[]){
    sort(a + 1, a + n + 1, greater<int>()); 
}

void sortAscending(int n, int a[]){
    sort(a + 1, a + n + 1);
}

int main(){
    cout<<"Nhập số lượng phần tử mảng: ";
    cin>>n;
    cout<<"Nhập phần tử: ";
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    
    cout<<"Tăng dần: ";
    sortAscending(n, a);
    for(int i=1; i<=n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Giảm dần: ";
    sortDescending(n, a);
    for(int i=1; i<=n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}