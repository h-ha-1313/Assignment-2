#include <string>
#include <iostream>
using namespace std;

int findGCD(const vector<int> numbers, int n) {
    if (n == 1) {
        return numbers[0];
    }

    return _gcd(findGCD(numbers, n - 1), numbers[n - 1]);
}

int main() {
    int n;
    cout << "Enter the number of natural numbers (n): ";
    cin >> n;

    vector<int> numbers(n);
    cout << "Enter " << n << " natural numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int result = findGCD(numbers, n);
    cout << "Greatest Common Divisor (GCD) of the sequence: " << result << endl;

    return 0;
}
