#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long a, b, k;
        cin >> a >> b >> k;
        long long g = __gcd(a, b);
        a /= g;
        b /= g;
        if (a <= k && b <= k) {
            cout << "1\n";
        } else {
            cout << "2\n";
        }
    }
    return 0;
}