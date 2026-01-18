#include <bits/stdc++.h>
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
// int gcd (int a,int b) {return __gcd(a,b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}
using namespace std;

int mex(vector<int> &a, int l, int r) {
    unordered_set<int> s;
    for (int i = l; i <= r; i++)
        if (a[i] >= 0)
            s.insert(a[i]);

    int m = 0;
    while (s.count(m)) m++;
    return m;
}


signed main() 
{
    let_strt;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(all(v));
        vector<int>suff_mex(n),pref_mex(n);
        bool flag = false;
        for(int i = 0; i < n; i++)
        {
            int value = mex(v, 0, i);
           // cout << value << sp;
            pref_mex.pb(value);
            int val = mex(v, i + 1, n-1);
            //cout << val << sp << nl;
            suff_mex.pb(val);
            if(val == value)
            {
                flag = true;
                break;
            }
        }
        cout << (flag? "NO":"YES") << nl;

    }
    return 0;
}