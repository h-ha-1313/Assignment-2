#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

const int Maxn = 100;

int main() {
    int n, m;
    cout << "Nhập số hàng: ";
    cin >> m;
    cout << "Nhập số cột: ";
    cin >> n;

    int a[Maxn][Maxn];

    cout << "Nhập phần tử: ";
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    int maxArray = a[1][1];
    int minArray = a[1][2];

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            maxArray = max(maxArray, a[i][j]);
            minArray = min(minArray,a[i][j]);
        }
    }
    
    cout << "max của mảng là: " << maxArray << endl;
    cout << "min của mảng là: " << minArray << endl;
}

/*
void findArray(int n, int m, int a[][Maxn]) {
    int maxArray = a[1][1];

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            maxArray = max(maxArray, a[i][j]);
        }
    }
    
    int minArray = a[1][1];

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            minArray = min(minArray, a[i][j]);
        }
    }
    
    cout << "max của mảng là: " << maxArray << endl;
    cout << "min của mảng là: " << minArray << endl;
}
*/
