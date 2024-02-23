#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

long long l,r;
long long area=1, perimeter=0;

int perimeterRectangle(int r, int l){
    perimeter = (r+l)*2;

    return perimeter;
}

int areaRectangle(int r, int l){
    area = r*l;

    return area;
}

int main(){
    cout<<"Length: ";
    cin>>l;
    cout<<"Right: ";
    cin>>r;

    cout<<"Area: "<<areaRectangle(r,l)<<endl;
    cout<<"Perimeter: "<<perimeterRectangle(r,l)<<endl;

    for(int i=1; i<=l; i++){
        if(i==1 || i==l){
            for(int j=1; j<=r; j++){
                cout<<"*";
            }
            cout<<endl;
        }
        else{
            for(int j=1; j<=r; j++){
                if(j==1 || j==r) cout<<"*";
                else cout<<" ";

            }
            cout<<endl;
        }
    }
}