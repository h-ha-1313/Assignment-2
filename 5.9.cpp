#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int day, month, year;

bool checkDate(int day, int month, int year){
    switch (month){
        case 2:
            if(year%4==0 || year%400==0){
                if(day<1 && day>29) return false;
            }
            else{
                if(day<1 && day>28) return false;
            }
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(day<1 && day>31) return false;
        case 4:
        case 6:
        case 9:
        case 11:
            if(day<1 && day>30) return false;
    }
}

int main(){
    cout<<"Day: ";
    cin>>day;
    cout<<"Month: ";
    cin>>month;
    cout<<"Year: ";
    cin>>year;

    if(checkDate(day, month, year)){
        cout<<"Valid"<<endl;
    }
    else cout<<"Invalid"<<endl;
}