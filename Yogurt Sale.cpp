#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        int n, a, b;
        cin >> n >> a >> b;


        int minimum_cost = (2 * a > b) ? (n / 2) * b + (n % 2) * a : n * a;

        cout << minimum_cost << "\n";
    }

    return 0;
}
