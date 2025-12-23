#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define nl "\n"
#define int long long
#define sp ' '
#define PI 3.14159265358979323846
#define db double
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
    speed
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int cnt = 0;
    vector<int>v2;
    for(int i = 0; i < n; i++)
    {
        int temp = t;
        cnt = 0;
        for(int j = i ;j < n; j++)
        {
            if(temp >= v[j])
            {
                temp -= v[j];
                cnt++;
            }
            else break;
        }
        v2.pb(cnt);
    }
    int ans = *max_element(v2.begin(), v2.end());
    cout << ans << nl;
}