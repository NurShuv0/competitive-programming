#include <bits/stdc++.h>
#define let_start ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl "\n"
#define int long long
#define sp ' '
#define PI 3.14159265358979323846
#define pb push_back
#define f first
#define s second
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define cn continue
#define mod 1000000007
#define best INT_MAX
using namespace std;
signed main()
{
    let_start
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int mx = best;
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            mx = min(mx, v[i]);
            st.insert(mx);
        }
        mx = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            mx = max(mx, v[i]);
            st.insert(mx);
        }
        string str;
        for (int i = 0; i < n; i++)
        {
            if (!st.count(v[i]))
            {
                str += "0";
            }
            else
            {
                str += "1";
            }
        }
        cout << str << nl;
    }
}