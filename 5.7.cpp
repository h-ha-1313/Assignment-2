#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

void printPascalsTriangle(int numRows) {
    for (int i = 0; i < numRows; ++i) {
        int start = 1;
    

        for (int j = 0; j <= i; ++j) {
            cout <<" "<< start;

            start = start * (i - j) / (j + 1);
        }
        
        for(int space = 0; space < numRows - i; ++space) {
            cout << " ";
        }

        cout<<endl;
    }
}

int main() {
    int numRows;

    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> numRows;

    printPascalsTriangle(numRows);

    return 0;
}