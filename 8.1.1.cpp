#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

const int Maxn = 1e7 + 5;
int n, x, a[Maxn];

int findNum(int n, int a[], int x){
    int low = 1;
    int high = n;

    while(low <= high){
        int mid = low + (high - low)/2;

        if (a[mid] == x) {
            return mid; 
        } else if (a[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main(){
    cout<<"Nhập số lượng phần tử trong mảng: ";
    cin>>n;
    cout<<"Nhập phần tử: ";
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    sort(a + 1, a + n + 1);

    cout<<"Nhập số cần tìm: ";
    cin>>x;

    if(findNum(n,a,x) != -1){
        cout<<"x ở vị trí "<<findNum(n,a,x)<<" trong mảng";
    }
    else cout<<"x không có trong mảng.";
}