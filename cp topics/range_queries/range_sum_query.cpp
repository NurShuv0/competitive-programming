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
    int n, q;
    cin >> n >> q;
    vector<int>v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int>pref(n);
    pref[0] = v[0];
    for(int i = 1; i < n; i++)
    {
        pref[i] = pref[i-1] + v[i];
        //cout << pref[i] << sp;
    }
    while(q--)
    {
        int l, r;
        cin >> l >> r;
        if(l == 1)
        {
            cout << pref[r-1] << nl;;
        }
        else {
            cout << pref[r-1] - pref[l-2] << nl;
        }
    }
    return 0;
}