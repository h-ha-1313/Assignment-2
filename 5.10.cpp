#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

string d[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
int day, month, year;


int findDate(int day, int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }

    int k = year % 100;
    int j = year / 100;

    int dayOfWeek = (day + ((13 * (month + 1)) / 5) + k + (k / 4) + (j / 4) - (2 * j)) % 7;

    if (dayOfWeek < 0) {
        dayOfWeek += 7;
    }

    return dayOfWeek;
}

int main() {
    int day, month, year;

    cout << "Enter the day: ";
    cin >> day;

    cout << "Enter the month: ";
    cin >> month;

    cout << "Enter the year: ";
    cin >> year;

    string ans = d[findDate(day, month, year)];
    cout << "The day of the week is: " << ans << endl;

    return 0;
}
