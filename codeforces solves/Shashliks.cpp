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
signed main()
{
    speed;
    int t;
    cin >> t;
    while (t--)
    {
        int k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;

        int cnt = 0;

        if (x < y)
        {
            if (k >= a)
            {
                int cnt_x = (k - a) / x + 1;
                cnt += cnt_x;
                k -= cnt_x * x;
            }
            if (k >= b)
            {
                int cnt_y = (k - b) / y + 1;
                cnt += cnt_y;
            }
        }
        else
        {
            if (k >= b)
            {
                int cnt_y = (k - b) / y + 1;
                cnt += cnt_y;
                k -= cnt_y * y;
            }
            if (k >= a)
            {
                int cnt_x = (k - a) / x + 1;
                cnt += cnt_x;
            }
        }

        cout << cnt << nl;
    }
    return 0;
}