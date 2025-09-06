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
#define best INT_MAX
#define wrst INT_MIN
// int gcd (int a,int b) {return __gcd(a,b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}
using namespace std;
signed main() 
{
    let_strt
    int t;
    cin >> t;
    while(t--)
    {
        int h, w;
        cin >> w >> h;
        int ans = 0;
        for(int i = 0; i < 4; i++)
        {
            int k;
            cin >> k;
            vector<int>point(k);
            for(int j = 0; j < k; j++)
            {
                cin >> point[j];
            }
            ans = max(ans,  (point[k-1] - point[0]) * (i < 2? h:w));
        }
        cout << ans << nl;
    }
}