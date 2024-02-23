#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int a[2], b[2], c[2], x[2];

double areaTriangle(int Ax, int Ay, int Bx, int By, int Cx, int Cy){
    return 0.5*abs(Ax * (By - Cy) + Bx * (Cy - Ay) + Cx * (Ay - By));
}

bool checkCenter(int a[], int b[], int c[], int x[]){
    double totalArea = areaTriangle(a[1], a[2], b[1], b[2], c[1], c[2]);

    double xAB = areaTriangle(a[1], a[2], b[1], b[2], x[1], x[2]);
    double xAC = areaTriangle(a[1], a[2], c[1], c[2], x[1], x[2]);
    double xCB = areaTriangle(c[1], c[2], b[1], b[2], x[1], x[2]);

    return xAB + xAC + xCB == totalArea;
}

int main(){
    cout<<"Nhập tọa độ x,y của đỉnh A theo thứ tự: ";
    cin>>a[1]>>a[2];

    cout<<"Nhập tọa độ x,y của đỉnh B theo thứ tự: ";
    cin>>b[1]>>b[2];

    cout<<"Nhập tọa độ x,y của đỉnh C theo thứ tự: ";
    cin>>c[1]>>c[2];

    cout<<"Nhập tọa độ x,y của điểm cần kiểm tra theo thứ tự: ";
    cin>>x[1]>>x[2];

    if(checkCenter) cout<<"Điểm x trong tam giác ABC";
    else cout<<"Điểm x không nằm trong tam giác ABC";
}