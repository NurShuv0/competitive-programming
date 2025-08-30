#include <bits/stdc++.h>
#define let_strt ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl "\n"
using namespace std;

bool possible(int x, int y) {
    int mn = min(x, y), mx = max(x, y);
    return mx <= 2 * mn + 2;
}

int main() {
    let_strt;
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ra = c - a, rb = d - b;
        if (possible(a, b) && possible(ra, rb)) {
            cout << "YES" << nl;
        } else {
            cout << "NO" << nl;
        }
    }
}