#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

const int Maxn = 1e7 + 5;
int n, a[Maxn];
int sum = 0, cnt = 0;

bool isPrime(int t) {
    if (t <= 1) return false;
    for (int j = 2; j <= sqrt(t); j++) {
        if (t % j == 0) return false;
    }
    return true; // Return true when the number is prime
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
        if (isPrime(t)) {
            cnt++;
            sum += t;
        }
    }

    cout << "Số số nguyên tố có trong mảng: " << cnt << endl;
    cout << "Tổng các số nguyên tố: " << sum << endl;

}
