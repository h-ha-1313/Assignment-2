#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

double a=0,b=0;

void findEquation(int x1, int y1, int x2, int y2){
    a = (y2 - y1)/(x2 - x1);
    b = y1 - x1 * a;

    cout<<"a và b theo phương trình qua hai điểm A và B là: "<<a<<" "<<b;
}

int main(){
    int x1, y1, x2, y2;
    cout<<"Nhập tọa độ x,y của điểm A theo thứ tự: ";
    cin>>x1>>y1;

    cout<<"Nhập tọa độ x,y của điểm B theo thứ tự: ";
    cin>>x2>>y2;

    findEquation(x1, y1, x2, y2);
}