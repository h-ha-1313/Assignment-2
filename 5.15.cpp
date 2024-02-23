#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

const long long Max = 1e7+5;
int n,N;
long long sum=0, cnt=0, a[Max];

int sumNumber(long long a[], int N) {
    for(int i=1; i<=N; i++){
        int trans = 0; 

        while (a[i] > 0) {
            int digit = a[i] % 10;
            trans = trans * 10 + digit;
            a[i] /= 10;
        }
    
        sum += trans;
    }

    return sum;
}

int main(){
    cout<<"How many numbers do you need to calculate: ";
    cin>>N;

    for(int i=1; i<=N; i++){
        cout<<"Nhập số: "<<endl;
        cin>>a[i];
    }

    cout<<sumNumber(a, N)<<endl;
}
