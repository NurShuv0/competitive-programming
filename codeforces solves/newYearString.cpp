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
        string str;
        cin >> str;
        int ans;
        bool newYear = false;
        bool oldYear = false;
        for(int i = 0; i < n - 3; i++)
        {
            if(str.substr(i,4) == "2026") newYear = true;
            if(str.substr(i,4) == "2025") oldYear = true;
        }
        //cout << newYear << sp << oldYear << nl;
        if(newYear || !(oldYear))
        {
            cout << 0 << nl;
            cn;
        }
        if(oldYear)
        {
            cout << 1 << nl;
        }
    }
    return 0;
}