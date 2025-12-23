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
    let_strt;
    int t;
    cin >> t;
    while(t--)
    {
        int k, n;
        cin >> k >> n;
        int ans = n;
        for(int i = 0; i < k; i++)
        {
            ans *= 2;
        }
        cout << ans << nl;
        //cout << k * 2 * n << nl;
        // for(int i = 0; i < k; i++)
        // {
        //     int temp = n * 2;
        //     if(temp % 2 == 0)
        //     {
        //         ans = temp;
        //     }
        //     else {
        //         ans = 
        //     }
        // }
    //    // cout << n * 2 << nl;
    //     //int temp = n * 2;
    //     if(k == 1 && n % 2 == 0)
    //     {
    //         cout << (n - 1)/3 << nl;
    //     }
    //     // if(n % 2 != 0)
    //     // {
    //     //     cout << n * 2 << nl;
    //     // }
    //     else {
    //         cout << n * 2 <<  nl;
    //     }
    }
}