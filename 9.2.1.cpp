#include<bits/stdc++.h>
using namespace std;

const int MAX_ROWS = 100; // Maximum number of rows
const int MAX_COLS = 100; // Maximum number of columns

void sortColumnsAscending(int a[][MAX_COLS], int rows, int cols) {
    for (int j = 0; j < cols; ++j) {
        int column[MAX_ROWS];
        for (int i = 0; i < rows; ++i) {
            column[i] = a[i][j];
        }
        sort(column, column + rows);

        for (int i = 0; i < rows; ++i) {
            a[i][j] = column[i];
        }
    }
}

void sortRowsDescending(int a[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        sort(a[i], a[i] + cols, greater<int>());
    }
}

void printArray(int a[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    if (rows <= 0 || cols <= 0 || rows > MAX_ROWS || cols > MAX_COLS) {
        cerr << "Invalid" << endl;
        return 1;
    }

    int array[MAX_ROWS][MAX_COLS];

    cout << "Enter the elements:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> array[i][j];
        }
    }

    sortColumnsAscending(array, rows, cols);
    sortRowsDescending(array, rows, cols);

    cout << "Array after sorting:" << endl;
    printArray(array, rows, cols);

    return 0;
}