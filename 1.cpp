#include <string>
#include <iostream>
using namespace std;

//str2 = new char[strlen(str1)];

bool isSymmetric(const string str) {
    int length = str.length();
    
    for (int i = 0; i < length / 2; ++i) {
        if (str[i] != str[length - 1 - i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    string S;

    cout << "Enter string: ";
    getline(cin, S);

    if (isSymmetric(S)) {
        cout << "The string is symmetric." << endl;
    } else {
        cout << "The string is not symmetric." << endl;
    }
}
