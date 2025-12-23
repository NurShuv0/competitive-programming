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
        int n, k, b, sum;
        cin >> n >> k >> b >> sum;
        if(sum == 0 && b == 0)
        {
            for(int i = 0; i < n; i++)
            {
                cout << 0 << sp;
            }
            cout << nl;
            cn;
        }
        if((k * b > sum) || ((k * (b + 1) - 1) + ((n-1) * (k - 1))) < sum)
        {
            cout << -1 << nl;
            cn;
        }
        if(k * (b+1) > sum)
        {
            for(int i = 0; i < n - 1; i++)
            {
                cout << 0 << sp;
            }
            cout << sum << nl;
            cn;
        }
        cout << k * (b+1) - 1 << sp;
        int temp = sum;
        temp -= k * (b+1) - 1;
        int cnt = 1;
        while(temp > 0)
        {
            cout << min(k - 1, temp) << sp;
            temp -= min(k-1, temp);
            cnt++;
        }
        //cout << cnt << nl;
        while(n-cnt > 0)
        {
            cout << 0 << sp;
            cnt++;
        }
        cout << nl;
        
    }
    return 0;
}