#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int a[2], b[2], c[2];

double areaTriangle(int Ax, int Ay, int Bx, int By, int Cx, int Cy){
    return 0.5*abs(Ax * (By - Cy) + Bx * (Cy - Ay) + Cx * (Ay - By));
}

double length(int x1, int y1, int x2, int y2){
    return sqrt( abs( pow((x1-x2),2) + pow((y1-y2),2) ) );
}

int main(){
    cout<<"Nhập tọa độ x,y của điểm A theo thứ tự: ";
    cin>>a[1], a[2];
    cout<<"Nhập tọa độ x,y của điểm B theo thứ tự: ";
    cin>>b[1], b[2];
    cout<<"Nhập tọa độ x,y của điểm C theo thứ tự: ";
    cin>>c[1], c[2];

    double area = areaTriangle(a[1], a[2], b[1], b[2], c[1], c[2]);
    double perimeter = length(a[1], a[2], b[1], b[2]) + length(b[1], b[2], c[1], c[2]) + length(a[1], a[2], c[1], c[2]);

    cout<<"Area: "<<area<<endl;
    cout<<"Perimeter: "<<perimeter<<endl;
}