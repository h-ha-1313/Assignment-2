#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

const int MaxRows = 100;
const int MaxCols = 100;

void sortMatrix(int mat[][MaxCols], int rows, int cols) {
    int temp[MaxRows * MaxCols];
    int index = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            temp[index++] = mat[i][j]; //cho vào mảng 1 chiều
        }
    }

    sort(temp, temp + (rows * cols));

    index = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            mat[i][j] = temp[index++];
        }
    }
}

int main() {
    int m, n;

    cout << "Nhập số hàng: ";
    cin >> m;

    cout << "Nhập số cột: ";
    cin >> n;

    if (m <= 0 || n <= 0 || m > MaxRows || n > MaxCols) {
        cout << "Invalid."<<endl;
    }

    int matrix[MaxRows][MaxCols];

    cout << "Nhập mảng: "<<endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    sortMatrix(matrix, m, n);
    cout << "Mảng sau khi sắp xếp:"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
