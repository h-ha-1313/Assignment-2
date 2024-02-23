#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int a[2], b[2], g[2];

void findCentroid(int a[], int b[], int c[]){
    g[1] = (a[1] + b[1] )/2;
    g[2] = (a[2] + b[2] )/2;

    cout<<"Tọa độ trọng tâm là: "<<g[1]<<" "<<g[2];
}

int main(){
    cout<<"Nhập tọa độ x, y, z của đỉnh 1 theo thứ tự: ";
    cin>>a[1]>>a[2];

    cout<<"Nhập tọa độ x, y, z của đỉnh 2 theo thứ tự: ";
    cin>>b[1]>>b[2];

}