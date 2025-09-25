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
        map<int,int>mp,mp2;
        for(int i = 0; i < n; i++)
        {
            int x,y;
            cin >> x >> y;
            mp[x]++;
            mp2[y]++;
        }
        int ans = 0;
        for(auto& m:mp)
        {
            //cout << m.f << sp << m.s << nl;
            if(m.s > 1)
            {
                ans += n - 2;
            }
        }
        cout << ans <<nl;
    }
    return 0;
}