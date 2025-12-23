#include <bits/stdc++.h>
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
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
signed main()
{
    speed;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int cnt = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        while (v[i])
        {
            if (v[i] & 1)
            {
                // cnt++;
                mp[v[i]]++;
            }
            v[i] >>= 1;
        }
    }
    int max_key = -1, max_val = -1;
    for (auto &mp : mp)
    {
        if (mp.s > max_val)
        {
            max_val = mp.s;
            max_key = mp.f;
        }
    }
    cout << max_key << sp << max_val;
}