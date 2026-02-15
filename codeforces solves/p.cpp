#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long p, q;
        cin >> p >> q;

        long long left = q / 3;
        long long right = (p + 1) / 2;

        if (left >= right)
            cout << "Bob\n";
        else
            cout << "Alice\n";
    }
    return 0;
}
