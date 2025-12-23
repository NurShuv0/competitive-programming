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
struct SegmentTree
{
    bitset<26> st[4 * 100005];
    int n;

    void init(int n)
    {
        this->n = n;
    }

    void build(int start, int end, int node, string &a)
    {
        if (start == end)
        {
            st[node].set(a[start] - 'a');
            return;
        }
        int mid = (start + end) / 2;
        build(start, mid, 2 * node + 1, a);
        build(mid + 1, end, 2 * node + 2, a);
        st[node] = st[2 * node + 1] | st[2 * node + 2];
    }

    void build(string &a)
    {
        build(0, a.size() - 1, 0, a);
    }

    void update(int start, int end, int node, int index, char y)
    {
        if (start == end)
        {
            st[node].reset();
            st[node].set(y - 'a');
            return;
        }
        int mid = (start + end) / 2;
        if (index <= mid)
        {
            update(start, mid, 2 * node + 1, index, y);
        }
        else
        {
            update(mid + 1, end, 2 * node + 2, index, y);
        }
        st[node] = st[2 * node + 1] | st[2 * node + 2];
    }

    void update(int index, char y)
    {
        update(0, n - 1, 0, index, y);
    }

    bitset<26> query(int start, int end, int node, int l, int r)
    {
        if (start > r || end < l)
        {
            return bitset<26>();
        }
        if (start >= l && end <= r)
        {
            return st[node];
        }
        int mid = (start + end) / 2;
        bitset<26> q1 = query(start, mid, 2 * node + 1, l, r);
        bitset<26> q2 = query(mid + 1, end, 2 * node + 2, l, r);
        return q1 | q2;
    }

    int query(int l, int r)
    {
        bitset<26> qq = query(0, n - 1, 0, l, r);
        return qq.count();
    }
};

signed main()
{
    speed;
    int t;
    string a;
    cin >> a >> t;
    SegmentTree tree;
    tree.init(a.size());
    tree.build(a);
    while (t--)
    {
        int x;
        cin >> x;
        if (x == 2)
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            cout << tree.query(l, r) << nl;
        }
        else
        {
            int l;
            char y;
            cin >> l >> y;
            tree.update(l - 1, y);
        }
    }
    return 0;
}
