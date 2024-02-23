#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int m,n;
int cnt=0, sum=0;

void checkEvenNumber(int m, int n){
    for(int i=m; i<=n; i++){
        if(i%2==0){
            cnt++;
            sum+=i;
        }
    }

    cout<<"Number of even numbers are: "<<cnt<<endl;
    cout<<"Sum: "<<sum<<endl;
}

int main(){
    cin>>m>>n;

    checkEvenNumber(m,n);
}