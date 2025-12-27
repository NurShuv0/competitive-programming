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
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int sum = 0;
        for(int i = 0;  i < n - 1; i++)
        {
            sum += abs(v[i] - v[i+1]);
        }
       // cout << sum << nl;
        int nr = wrst;
        for(int i = 1; i < n - 1; i++)
        {
            nr = max(nr, abs(v[i] - v[i-1]) + abs(v[i] - v[i+1]) - abs(v[i-1] - v[i+1]));
           // cout << nr << sp;
        }
        nr = max(nr, abs(v[n-1] - v[n-2]));
        nr = max(nr, abs(v[1] - v[0]));
        cout << sum - nr << nl;
    }
    return 0;
}