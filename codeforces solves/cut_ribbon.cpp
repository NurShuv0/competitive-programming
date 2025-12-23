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
    bool flag = true;
    int cnt = 1;
    while(flag)
    {
        int mn = min(min(a, b), c);
        if(n - mn == a || n - mn == b || n - mn == c)
        {
            cnt++;
        }
        else{
            flag = false;
        }
        n -= mn;
    }
    cout << cnt << nl;
}