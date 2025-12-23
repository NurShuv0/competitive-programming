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
        int n, c;
        cin >> n >> c;
        int total = 0;
        for(int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            total += input;
            c -= (input * input);
        }
        int avrg = total / n;
        int total_area = sqrt(avrg * avrg + (c / n)) - avrg;
        int ans = (total_area)/ 2;
        cout << ans << nl;
    }
}