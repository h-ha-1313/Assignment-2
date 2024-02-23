#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

double ans =0;

int solveDistance(int x1, int y1, int z1, int x2, int y2, int z2){
    ans = sqrt(abs(pow(x1-x2,2) + pow(y1-y2,2) + pow(z1-z2,2)));

    return ans;
}

int main(){
    
    int x1, y1, z1, x2, y2, z2;
    //input điểm 1
    cout<<"Tọa độ x của điểm 1: ";
    cin>>x1;
    cout<<"Tọa độ y của điểm 1: ";
    cin>>y1;
    cout<<"Tọa độ z của điểm 1: ";
    cin>>z1;

    //input điểm 2
    cout<<"Tọa độ x của điểm 2: ";
    cin>>x2;
    cout<<"Tọa độ y của điểm 2: ";
    cin>>y2;
    cout<<"Tọa độ z của điểm 2: ";
    cin>>z2;

    cout<<"Khoảng cách là: "<<solveDistance(x1, y1, z1, x2, y2, z2);
}