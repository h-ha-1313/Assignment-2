#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;


double calculateSine(double x, int terms) {
    double result = 0.0;
    for (int n = 0; n < terms; ++n) {
        result += pow(-1, n) * pow(x, 2 * n + 1) / factorial(2 * n + 1);
    }
    return result;
}

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    double x;
    int terms;

    cout << "Enter the angle in radians (x): ";
    cin >> x;

    cout << "Enter the number of terms for the Taylor series expansion: ";
    cin >> terms;

    double sineByFormula = calculateSine(x, terms);
    double sineByLibrary = sin(x);

    cout << "Sine calculated by formula: " << sineByFormula << endl;
    cout << "Sine calculated by library function: " << sineByLibrary << endl;

    return 0;
}
