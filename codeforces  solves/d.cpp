#include <bits/stdc++.h>
using namespace std;

struct Casino {
    int l, r, real;
    bool visited = false;
};

void solve() {
    int n, k;
    cin >> n >> k;
    vector<Casino> casinos(n);
    for (int i = 0; i < n; i++) {
        cin >> casinos[i].l >> casinos[i].r >> casinos[i].real;
    }

    int coins = k;
    bool changed = true;

    while (changed) {
        changed = false;
        int bestReal = -1;
        int bestIdx = -1;

        for (int i = 0; i < n; i++) {
            if (!casinos[i].visited && casinos[i].l <= coins && coins <= casinos[i].r) {
                if (casinos[i].real > bestReal) {
                    bestReal = casinos[i].real;
                    bestIdx = i;
                }
            }
        }

        if (bestIdx != -1) {
            casinos[bestIdx].visited = true;
            coins = bestReal;
            changed = true;
        }
    }

    cout << coins << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
