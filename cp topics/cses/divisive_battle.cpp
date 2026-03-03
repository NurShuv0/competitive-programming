#include <bits/stdc++.h>
using namespace std;

#define let_strt ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl "\n"
#define int long long
#define sp ' '
#define pi 3.14159265358979323846
#define square(n) (n) * (n)
#define cube(n) (n) * (n) * (n)
#define setPrec(n) fixed << setprecision(n)
#define circulate(a, b) (((a % b) + b) % b)
#define pb push_back
#define f first
#define s second
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define cn continue
#define mod 1000000007
#define best LLONG_MAX
#define wrst LLONG_MIN

const int MAX_A = 1e6 + 5;
int small_f[MAX_A];

void sieve() {
    for (int i = 1; i < MAX_A; i++)
    {
        small_f[i] = i;
    }
    for (int i = 2; i * i < MAX_A; i++) {
        if (small_f[i] == i) {
            for (int j = i * i; j < MAX_A; j += i) {
                if (small_f[j] == j)
                {
                    small_f[j] = i;
                }
            }
        }
    }
}

int cnt(int x) {
    int cntt = 0;
    while (x > 1) {
        cntt++;
        x /= small_f[x];
    }
    return cntt;
}

signed main() {
    let_strt;

    sieve();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)cin >> a[i];
        bool flag = true;
        for (int i = 1; i < n; i++) {
            if (a[i] < a[i - 1]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << "Bob" << nl;
            cn;
        }
        int total = 0;
        for (int i = 0; i < n; i++) {
            total += cnt(a[i]);
        }
        if (total % 2 == 1)
            cout << "Alice" << nl;
        else
            cout << "Bob" << nl;
    }

    return 0;
}