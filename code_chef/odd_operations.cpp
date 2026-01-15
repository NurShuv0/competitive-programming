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
        if(n % 2 != 0)
        {
            cout << 0 << nl;
            cn;
        }
        if(n == 2 || n == 4 || n == 6 || n == 8)
        {
            cout << -1 << nl;
            cn;
        }
        bool flag = false;
        int two, four, six, eight;
        while(n > 0)
        {
            int digit = n % 10;
            n /= 10;
            if(digit % 2 == 1)
            {
                flag = true;
            }
            //if(digit == )
        }
        if(flag)
        {
            cout << 1 << nl;
        }
        else {
            cout << 3 << nl;
        }

    }
    return 0;
}