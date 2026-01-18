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
        vector<int>v, vv(n);
        for(int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            vv.pb(input);
            if(input < 0)cn;
            else {
                v.pb(input);
            }
        }
        sort(all(v));
        sort(all(vv));
        int ans;
        int value = vv[0];
        if(vv[0] == 0)
        {
            ans = mex(vv, 0, vv.size() - 1);
            cout << ans << nl;
            cn;
        }
        else {
            if(vv[0] < 0)
            {
                for(int i = 0; i < n; i++)
                {
                    vv[i] += value;
                    //cout << v[i] << sp;
                }
            }
            else {
                for(int i = 0; i < vv.size(); i++)
                {
                    vv[i] -= value;
                    //cout << v[i] << sp;
                }
            }
        }
        int vl = v[0];
        for(int i = 0; i < v.size(); i++)
        {
            v[i] -= vl;
        }
        ans = mex(v, 0, v.size() - 1);
        int ans2 = mex(vv, 0, vv.size() - 1);
        cout << ans << sp << ans2 << nl;
        cout << max(ans, ans2) << nl;

    }
    return 0;
}