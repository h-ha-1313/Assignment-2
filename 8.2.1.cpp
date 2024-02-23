#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

const int Maxn = 1e7 + 5;
int n, a[Maxn], cntp = 0, cntn = 0;
vector<int> pos;
vector<int> neg;

void sortArray(int n, int a[]){
    for(int i=1; i<=n; i++){
        if(a[i] % 2 == 0){
            pos.push_back(a[i]);
            cntp++;
        }
        else{
            neg.push_back(a[i]);
            cntn++;
        }
    }

    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end()); 
}

int main(){
    cout<<"Nhập số lượng phần tử: ";
    cin>>n;
    cout<<"Nhập phần tử: ";
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    cout<<"Mảng số sau khi sắp xếp: ";
    sortArray(n, a);
    for(int i=0; i<cntp; i++){
        cout<<pos[i]<<" ";
    }
    cout<<"0 ";
    for(int i=cntn - 1; i>=0; i--){
        cout<<neg[i]<<" ";
    }
    cout<<endl;
}

