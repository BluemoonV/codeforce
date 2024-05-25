#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isSorted(vector<int>& a) {
    for (int i = 1; i < a.size(); ++i) {
        if (a[i] < a[i - 1]) {
            return false;
        }
    }
    return true;
}

bool canBeSortedBySwaps(vector<int>& a) {
    int n = a.size();
    for (int i = 0; i < n; ++i) {
        // Rotate the array
        vector<int> rotated_a(a.begin() + i, a.end());
        rotated_a.insert(rotated_a.end(), a.begin(), a.begin() + i);
        // Check if this rotation is sorted
        if (isSorted(rotated_a)) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    vector<string> results;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (canBeSortedBySwaps(a)) {
            results.push_back("Yes");
        } else {
            results.push_back("No");
        }
    }

    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}

