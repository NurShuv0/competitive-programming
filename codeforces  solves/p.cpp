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
#define matrix  vector<vector<int>> matrix(row, vector<int>(col, 0));
using namespace std;
signed main()
{
    let_strt
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int>pref(n+1,0),suffix(n+1,0);
        string vv,v;
        cin >> vv;
        for(int i = 1; i <= m;i++)
        {
            v += vv;
        }
        cout << v << nl;
        pref[0] = v[0] - '0';
        for(int i = 1; i < v.size(); i++)
        {
            pref[i] = v[i] - '0' + pref[i-1];
        }
        suffix[0] = v[n-1] - '0';
        for(int i = 1; i < v.size(); i++)
        {
            suffix[i] = v[n-i] - '0'+ suffix[i - 1];
        }
        int cnt = 0;
        for(int i = 0; i < v.size();i++)
        {
            if(pref[i] == suffix[i+1])
            {
                //cout << pref[i] << sp << suffix[i] << nl;
                cnt++;
            }
        }
        cout << cnt << nl;
    }
}