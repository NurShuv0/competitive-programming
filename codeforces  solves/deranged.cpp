#include <bits/stdc++.h>
#define let_strt ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl "\n"
#define int long long
#define sp ' '
#define PI 3.14159265358979323846
#define pb push_back
#define f first
#define s second
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define cn continue
#define mod 1000000007
#define best INT_MAX
#define wrst INT_MIN
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
        vector<int>v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool flag = true;
        vector<int>v2 = v;
        sort(all(v2));
        // for(int i = 0; i < n; i++)
        // {
        //     if(v[i] == v2[i])
        //     {
        //         flag = false;
        //     }
        // }
        if(v == v2 || n == 1)
        {
            cout << "NO" << nl;
        }
        else{
            cout << "YES" << nl << 2 << nl;
            for(int i = 0; i < n - 1; i++)
            {
                if(v[i] > v[i + 1])
                {
                    cout <<  v[i] << sp << v[i + 1] << nl;
                    break;
                }
            }
        }
    }
}