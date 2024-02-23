#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

const int Maxn = 1e7 + 5;
int n,a[Maxn],k;
int curSum = 0;

int findMaxSum(int n, int a[], int k){
    if(k>n) return -1;

    for(int i=1; i<=k; i++){
        curSum += a[i];
    }

    int maxSum = curSum;
    for(int i= k+1; i<=n; i++){
        curSum = curSum - a[i - k] + a[i];
        maxSum = max(maxSum, curSum);
    }
    return maxSum;
}

int main(){
    cout<<"Nhập số lượng phần tử: ";
    cin>>n;
    cout<<"Nhập phần tử: ";
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    cout<<"Nhập số k: ";
    cin>>k;

    cout<<"Tổng lớn nhất của k số: "<<findMaxSum(n,a,k);
}