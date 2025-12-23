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
signed main()
{
    let_strt;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // if(i % 2 == 1)
            // {
            //     //a[i] = *max_element(all(a));
            // }
        }
        vector<int>mxv;
        int temp = a[0];
        for(int i = 0; i < n; i++)
        {
            //int temp = 0;
            temp = max(a[i], temp);
            mxv.pb(temp);
        }
        for(int i = 0; i < n; i++)
        {
            if(i % 2 == 1)
            {
                a[i] = mxv[i];
            }
        }
        // for(auto& c: mxv)
        // {
        //     cout <<c <<sp;
        // }
        //cout << nl;
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (i % 2 == 0)
            {
                if (a[i] >= a[i + 1])
                {
                    int mx = mxv[i];
                    ans += a[i] - mx + 1;
                    a[i] = a[i + 1] - 1;
                }
            }
            else
            {
                if (a[i] <= a[i + 1])
                {
                    int mx = mxv[i];
                    ans += a[i + 1] - mx + 1;
                    a[i + 1] = a[i] - 1;
                }
            }
        }

        cout << ans << nl;
    }
    return 0;
}