#include "bits/stdc++.h"

using namespace std;

int n;
char str[20];

void chenKyTuVaoChuoi(char str[], char chr, int pos){
    int length = strlen(str);

    for(int i = length; i>pos; i--){
        str[i] = str[i-1];
    }

    str[pos] = chr;
    str[length + 1] = '\0';
}

int main(){
    cout<<"Nhập số: "; cin>>n;

    itoa(n, str, 10);

    for(int i=strlen(str)-3; i>0; i -= 3){
        chenKyTuVaoChuoi(str, ',', i);
    }

    cout<<"Chuỗi số sau khi xử lý là: "<< str;
    getch();
}