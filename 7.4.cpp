#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

const int Maxn = 1e7+5;
int n, x;
vector<int> a;

int main(){
    cout<<"Nhập số lượng phần tử trong mảng: ";
    cin>>n;
    cout<<"Nhập phần tử của mảng: ";
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        a.push_back(element);
    }

    cout<<"Nhập phần tử bị xóa: ";
    cin>>x;

    a.erase(remove(a.begin(), a.end(), x), a.end());

    cout<<"Mảng mới có dạng: ";
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
}