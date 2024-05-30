#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool isSorted(const string& s) {
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] < s[i-1]) return false;
    }
    return true;
}

bool isStrongPassword(const string& password) {
    string digits, letters;
    bool letterFound = false;

    for (char c : password) {
        if (isdigit(c)) {
            digits += c;
            if (letterFound) return false; // Digit found after letter
        } else if (isalpha(c)) {
            letters += c;
            letterFound = true;
        }
    }

    return isSorted(digits) && isSorted(letters);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string password;
        cin >> n >> password;

        if (isStrongPassword(password)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

