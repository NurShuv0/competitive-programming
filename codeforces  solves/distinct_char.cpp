#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl "\n"
#define int long long
#define sp ' '
#define PI 3.14159265358979323846
#define db double
#define pb push_back
#define f first
#define s second
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define cn continue
#define mod 1000000007
#define best INT_MAX
// int gcd (int a,int b) {return __gcd(a,b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}
using namespace std;
struct Segmenttree {
    set<char> st[4 * 100005];
    int n;

    void init(int n) {
        this->n = n;
    }

    void build(int start, int end, int node, string &a) {
        if (start == end) {
            st[node].clear();
            st[node].insert(a[start]);
            return;
        }
        int mid = (start + end) / 2;
        build(start, mid, 2 * node + 1, a);
        build(mid + 1, end, 2 * node + 2, a);
        st[node].clear();
        st[node].insert(st[2 * node + 1].begin(), st[2 * node + 1].end());
        st[node].insert(st[2 * node + 2].begin(), st[2 * node + 2].end());
    }

    void build(string &a) {
        build(0, int_fast32_t(a.size()) - 1, 0, a);
    }

    void update(int start, int end, int node, int index, char y) {
        if (start == end) {
            st[node].clear();
            st[node].insert(y);
            return;
        }
        int mid = (start + end) / 2;
        if (index <= mid) {
            update(start, mid, 2 * node + 1, index, y);
        } else {
            update(mid + 1, end, 2 * node + 2, index, y);
        }
        st[node].clear();
        st[node].insert(st[2 * node + 1].begin(), st[2 * node + 1].end());
        st[node].insert(st[2 * node + 2].begin(), st[2 * node + 2].end());
    }

    void update(int x, char y) {
        update(0, n - 1, 0, x, y);
    }

    set<char> query(int start, int end, int node, int l, int r) {
        if (start > r || end < l) {
            return {};
        }
        if (start >= l && end <= r) {
            return st[node];
        }
        int mid = (start + end) / 2;
        set<char> q1 = query(start, mid, 2 * node + 1, l, r);
        set<char> q2 = query(mid + 1, end, 2 * node + 2, l, r);
        q1.insert(q2.begin(), q2.end());
        return q1;
    }

    int query(int l, int r) {
        set<char> qq = query(0, n - 1, 0, l, r);
        return int_fast32_t(qq.size());
    }
};

signed main() {
    speed;
    int t;
    string a;
    cin >> a >> t;
    Segmenttree tree;
    tree.init(a.size());
    tree.build(a);
    while (t--) {
        int x;
        cin >> x;
        if (x == 2) {
            int l, r;
            cin >> l >> r;
            l--; r--;
            cout << tree.query(l, r) << nl;
        } else {
            int l;
            char y;
            cin >> l >> y;
            tree.update(l - 1, y);
        }
    }
    return 0;
}