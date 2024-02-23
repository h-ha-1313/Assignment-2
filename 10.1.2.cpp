#include <string>
#include <iostream>
using namespace std;

const int Max = 100001;
int n, a[Max], i = 0;

bool isSymmetrical(int a[],int start,int end){
    if(start >= end){
        return true;
    }

    return (a[start] == a[end]) && isSymmetrical(a, start + 1, end - 1);
}

int main(){
    cout<<"Nhập số lượng phần tử trong mảng: ";
    cin>>n;

    cout<<"Nhập mảng: "<<endl;
    for(i=1; i<=n; i++){
        cin>>a[i];
    }

    if (isSymmetrical(a, 1, n)) {
        cout << "Array is symmetrical";
    } else {
        cout << "Array is not symmetrical";
    }
}