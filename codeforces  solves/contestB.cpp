#include <bits/stdc++.h>
#define let_strt                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
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
// int gcd (int a,int b) {return __gcd(a,b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}
using namespace std;
signed main()
{
    let_strt;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n), temp(n);
        set<int> st;
        bool flag = false;
        int value = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            temp[i] = v[i];
            //cout << temp[i] << sp;
            st.insert(v[i]);
            if (v[i] == -1)
            {
                v[i] = 0;
                flag = true;
            }
            if (v[i] != -1 && v[i] != 0)
            {
                value = v[i];
            }
            //cout << value << nl;
        }
        int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            sum += v[i + 1] - v[i];
        }
        // cout << abs(sum) << nl;
        if (sum == 0)
        {
            cout << 0 << nl;
            for (auto &c : v)
            {
                cout << c << sp;
            }
            cout << nl;
            cn;
        }
        if (st.size() == 2 && flag)
        {
            cout << 0 << nl;
            for (int i = 0; i < n; i++)
            {
                cout << value << sp;
            }
            cout << nl;
            cn;
        }
        if (temp[n - 1] == -1)
        {
            v[n - 1] = abs(v[n-1] - v[0]);
        }
        if (temp[n-1] != -1 && temp[0] == -1)
        {
            v[0] = abs(v[n-1] - v[0]);
        }
        if (temp[0] != -1 && temp[n - 1] != -1)
        {
            cout << abs(v[n-1] - v[0]) << nl;
        }
        else
        {
            cout << 0 << nl;
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << sp;
        }
        cout << nl;
    }
    return 0;
}