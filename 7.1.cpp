#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

const int Maxn = 1e7+5;
int n, a[Maxn];

int main(){
    cout << "Số lượng phần tử có trong mảng: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    long long arraySum = 0; // Use a different name for the local variable
    for(int i = 1; i <= n; i++){
        arraySum += a[i];
    }

    cout << "Tổng các phần tử có trong mảng: " << arraySum;
    
    return 0;
}