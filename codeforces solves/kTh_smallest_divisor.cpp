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
    int n, k;
    cin >> n >> k;
    vector<int>divisor;
    for(int i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            divisor.pb(i);
            if(n / i != i)
            {
                divisor.pb(n/i);
            }
        }
    }
    sort(all(divisor));
    if(k > divisor.size())
    {
        cout << -1 << nl;
    }
    else {
        cout << divisor[k-1] << nl;
    }
    // for(auto& c: divisor)
    // {
    //     cout << c << sp;
    // }
    return 0;
}