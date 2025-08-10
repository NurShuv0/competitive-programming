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
#define mset(m, v) memset(m, v, sizeof(m))
#define cn continue
#define mod 1000000007
#define best INT_MAX
#define wrst INT_MIN

// int gcd(int a, int b) {return b == 0 ? a : gcd(b, a % b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}

using namespace std;
signed main()
{
    let_strt
    int t;
    cin >> t;
    while(t--)
    {
        int n, p;
        cin >> n >> p;
        string str;
        cin >> str;
        if(p  == 1 || p == n)
        {
            cout << 1 << nl;
            cn;
        }
        bool flag = true;
        for(int i = 0; i < n; i++)
        {
            if(str[i] == '#')
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout << 1 << nl;
            cn;
        }
        int left = count(str.begin(), str.begin() + p - 1,'#');
        int right = count(str.begin() + p, str.end(),'#');
        int ans = min(left,right);
        //int ans = min(n - p,p - 1);
        cout << 2 *  + 1 << nl;
    }
}