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

bool isPrime(long long n) {
    if(n < 2) return false;
    if(n % 2 == 0 && n != 2) return false;
    for(long long i = 3; i * i <= n; i += 2) {
        if(n % i == 0) return false;
    }
    return true;
}




signed main() 
{
    let_strt;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(isPrime(n))
        {
            cout << 1 << sp << n - 1 << nl;
            cn;
        }
        int gdiv;
        if(n % 2 == 0)
        {
            cout << n/2 << sp << n/2 << nl;
            cn;
        }
        int cnt = 0;
        for(int i = 2; i * i <= n; i++)
        {
            if(n % i == 0)
            {
                gdiv = n / i;
                break;
            }
        }
        cout << gdiv << sp << n - gdiv << nl;
    }
    return 0;
}