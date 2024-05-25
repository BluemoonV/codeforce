#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

bool isBeautiful(vector<int>& a) {
    int n = a.size();

    // Find the smallest element
    int min1 = *min_element(a.begin(), a.end());

    // Flag to check if all elements are divisible by min1
    bool all_divisible_by_min1 = true;
    for (int num : a) {
        if (num % min1 != 0) {
            all_divisible_by_min1 = false;
            break;
        }
    }

    if (all_divisible_by_min1) return true;

    // Find the next smallest element min2 that is not divisible by min1
    int min2 = INT_MAX;
    for (int num : a) {
        if (num % min1 != 0) {
            min2 = min(min2, num);
        }
    }

    // Check if all elements are divisible by either min1 or min2
    for (int num : a) {
        if (num % min1 != 0 && num % min2 != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;
    vector<string> results(t);

    for (int case_idx = 0; case_idx < t; ++case_idx) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        results[case_idx] = isBeautiful(a) ? "Yes" : "No";
    }

    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}
