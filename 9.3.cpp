#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

const int max_dong = 50;
const int max_cot = 50;

int main() {
    int m, n;
    int a[max_dong][max_cot];

    // Input elements for the 2D array with m rows and n columns
    cout << "Nhap so dong: ";
    cin >> m;
    cout << "Nhap so cot: ";
    cin >> n;

    cout<<"Nhập phần tử: "<<endl;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }

    // Search for saddle points
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            bool IsMinRow = true, IsMaxCol = true;

            // Check if a[i][j] is the smallest element in the row
            for (int k = 0; k < n; k++)
                if (a[i][k] < a[i][j]) {
                    IsMinRow = false;
                    break;
                }

            // Check if a[i][j] is the largest element in the column
            for (int l = 0; l < m; l++)
                if (a[l][j] > a[i][j]) {
                    IsMaxCol = false;
                    break;
                }

            // If a[i][j] satisfies the conditions, it is a saddle point
            if (IsMaxCol && IsMinRow)
                cout << "A[" << i + 1 << "," << j + 1 << "] = " << a[i][j] << " la phan tu yen ngua."<<endl;
        }
}
