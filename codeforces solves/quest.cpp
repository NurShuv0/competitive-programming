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
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int>a(n), b(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int mxa = *max_element(all(a));
        int mxb = *max_element(all(b));
        vector<int>prefmax(n);
        prefmax[0] = b[0];
        for(int i = 1; i < n; i++)
        {
            prefmax[i] = max(prefmax[i-1], b[i]);
            //cout << prefmax[i] << sp;
        }
        int ans1 = 0, ans2 = 0;
        for(int i = 0; i < k; i++)
        {
            if(i == n)
            {
                //cout << n;
                ans1 += (mxb * (k - n));
                break;
            }
            ans1 += a[i];
        }
        for(int i = 0; i < k; i++)
        {
            if(i == n)
            {
                ans2 += (mxb * (k-n));
                break;
            }
            ans2 += max(prefmax[i], a[i]);
        }
        cout << ans1 << sp << ans2 << nl;
        cout << max(ans1, ans2) << nl;
    }
    return 0;
}