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
    // speed
    // int t;
    // cin >> t;
    // while(t--)
    {
        int n, m, a, b;
        cin >> n >> m >> a >> b;
        int normal_cost = n * a;
        int special_ticket = n / m;
        // int rem = n - ((n / m) * special_ticket);
        int rem = n % m;
        int special_cost = (special_ticket * b) + (rem * a);
        int special_pro_cost = (special_ticket * b + b);
        // int special_pro_cost = ((n + m - 1) / m) * b;
        cout << min({normal_cost, special_cost, special_pro_cost}) << nl;
    }
}