#include <bits/stdc++.h> 
using namespace std; 

void printBinary(int n) {
    if (n > 0) {
        printBinary(n / 2);     
        cout << n % 2;
    }
}

int main() {
    int N;

    cout << "Nhập số N: ";
    cin >> N;

    if (N <= 0) {
        cout << "Invalid" << endl;
    }

    cout << "Dãy nhị phân của " << N << " là: ";
    printBinary(N);
}