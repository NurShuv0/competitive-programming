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
    int n, m;
    cin >> n >> m;
    vector<int>a(n), b(m);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int pointa = 0, pointb = 0;
    int ans = 0;
    int start = 0;
    while(pointa < n && pointb < m)
    {
        //cout << "point : "<< pointa << sp << pointb << nl;
        if(pointa == n-1 && pointb < m - 1)
        {
            if(a[pointa] == b[pointb])
            {
                ans++;
               // cout << a[pointa] << sp << b[pointb] << nl;
            }
            pointa = start;
            pointb++;
            cn;
        }
        if(a[pointa] == b[pointb])
        {
           // cout << a[pointa] << sp << b[pointb] << nl;
            ans++;
            pointa++;
        }
        else if(a[pointa] > b[pointb] && pointb < m-1)
        {
            pointb++;
            if(b[pointb] == b[pointb - 1])
            {
                pointa = start;
            }
            else {
                start = pointa;
            }
        }
        else if(pointa < n-1)
        {
            pointa++;
        }
        else {
           // pointa = start;
            pointb++;
        }
    }
    cout << ans << nl;
    return 0;
}