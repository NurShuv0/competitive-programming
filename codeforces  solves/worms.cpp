#include <bits/stdc++.h>
#define let_strt ios_base::sync_with_stdio(false); cin.tie(nullptr);
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
// int gcd (int a,int b) {return __gcd(a,b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}
using namespace std;
signed main()
{
    let_strt;
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++)
    {
        int w;
        cin >> w;
        if(i == 0)
        {
            v[i] = w;
        }
        else
        {
            v[i] = v[i - 1] + w;
        }
    }
    int m;
    cin >> m;
    while(m--)
    {
        int q;
        cin >> q;
        int p = lower_bound(v.begin(), v.end(), q) - v.begin();
        cout << (p + 1) << nl;
    }
}