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
//int gcd (int a,int b) {return __gcd(a,b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}
using namespace std;

// int gcd(int a, int b) {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }


signed main() 
{
    let_strt;
    int t;
    cin >> t;
    while(t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        bool flag = false;
        vector<int>v;
        for(int i = 1; i <= n; i++)
        {

            int nr = (((l - 1)/ i) + 1) * i;
            if(nr <= r && nr >= l)
            {
                v.pb(nr);
            }
            else {
                cout << "NO" << nl;
                flag = true;
                break;
            }
        }
        if(!flag)
        {
            cout << "YES" << nl;
            for(int i = 0; i < v.size(); i++)
            {
                cout << v[i] << sp;
            }
            cout << nl;
        }
    }
    return 0;
}