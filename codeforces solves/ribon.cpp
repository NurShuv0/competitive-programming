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
    speed 
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int ans = 0;
    for(int i = 0; i <= n ; i++)
    {
        for(int j = 0; j <= n; j++)
        {
            int k_c = n - (i * a + j * b);
            if(k_c < 0) break;
            if(k_c % c == 0)
            {
                int k = k_c / c;
                ans = max(ans, i + j + k);
            }
        }
    }
    cout << ans << nl;
}