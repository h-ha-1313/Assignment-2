#include "ac0fe7d7450621a39364ed3b05cacd11-e1dc9b6c9221f1477d52bab918c9e8e34bb362f4 (1).zip"
using namespace std;

bool isSymmetric(const string& str) {
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
