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

int isOdd(int i)
{
    return i & 1;
}

bool solve(int n)
{
    bool ans = false;
    vector<int>odds;
    for(int i = 3; i * i <= n; i++)
    {
        if(n % i != 0)
        {
            cn;
        }
        if(isOdd(i))
        {
            odds.pb(i);
        }
        if(i != n/i && isOdd(n/i))
        {
            odds.pb(n/i);
        }
    }
    for(int i = 0; i < odds.size(); i++)
    {
        if(n % odds[i] == 0)
        {
            ans |= (!solve(n/odds[i]));
        }
    }
    return ans;
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
        if(n == 1)
        {
            cout << "FastestFinger" << nl;
            cn;
        }
        if(n == 2)
        {
            cout << "Ashishgup" << nl;
            cn;
        }
        if(n & 1)
        {
            cout << "Ashishgup" << nl;
            cn;
        }
        cout << (solve(n)?"Ashishgup":"FastestFinger") << nl;
    }
    return 0;
}