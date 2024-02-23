#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

const int Maxn = 1e7 + 5;
int n, a[Maxn];
int maxLength = 1;  // Minimum length is 1
int curLength = 1;
int start = 0;  // Start index of the cur ascending subarr
int longestStart = 0;  // Start index of the longest ascending subarr so far

int findSubarray(int n, int a[]){

    for (int i = 1; i < n; ++i) {
        if (a[i] > a[i - 1]) {
            // Cur element is part of the ascending subarray

            curLength++;

            // Update the start index if the ascending subarray is starting
            if (curLength == 2) {
                start = i - 1;
            }

            // Update the longest ascending subarrayinformation
            if (curLength > maxLength) {
                maxLength = curLength;
                longestStart = start;
            }
        } else {
            // Reset the cur ascending subarray length
            curLength = 1;
        }
    }
}

int main(){
    cout<<"Nhập số lượng phần tử: ";
    cin>>n;
    cout<<"Nhập phần tử: ";
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    findSubarray(n,a);
    if (maxLength > 1) {
        // Print the longest ascending subarray
        cout << "Longest ascending subarray: ";
        for (int i = longestStart; i < longestStart + maxLength; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    } else {
        cout << "No ascending subarray found.";
    }
}