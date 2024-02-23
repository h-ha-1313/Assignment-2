#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

const int Maxn = 1e7 + 5;
int n, a[Maxn];
int sum = 0, cnt = 0;

bool isSquare(int t) {
    if (t < 1) return false;
    int n = sqrt(t);
    int m = t/n;
    if(t%n==0 || t%m==0) return true;
    else return false;
}

int main() {
    cout << "Nhập số lượng phần tử trong mảng: ";
    cin >> n;
    cout << "Nhập phần tử: ";
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
        int t = a[i];
        if (isSquare(t)) {
            cnt++;
            sum += t;
        }
    }

    cout << "Number of square number: " << cnt << endl;
    cout << "Total of them: " << sum << endl;
}
