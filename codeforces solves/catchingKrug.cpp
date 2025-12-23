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
        int n, rk, ck, rd, cd;
        cin >> n >> rk >> ck >> rk >> cd;
        vector<pair<int, int>>vp = {{0,n}, {n,0}, {n,n}, {0,0}};
        int ans = wrst;
        if(n == 1)
        {
            cout << 1 <<nl;
            cn;
        }
        if(rk == rd)
        {
            int x;
            if(ck < rk)
            {
                x = ck;
            }
            else {
                x = n - 1 - ck;
            }
            cout << abs(ck - cd) + x;
            cn;
        }
        if(ck == cd)
        {
            int x;
            
        }
    }
    return 0;
}