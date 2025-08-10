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
        string str;
        cin >> str;
        int cnt = 0;
        int cnt_f = 0;
        int cnt_s = 0;
        for(int i = 0; i < n; i++)
        {
            if(str[i] == '(')
            {
                cnt_f++;
                // str.erase(str.begin() + i);
                // str.pb(')');
                // cnt++;
            }
            else{
                cnt_s++;
            }
            if(cnt_f < cnt_s)
            {
                // str.erase(str.begin() + i);
                // str.pb(')');
                cnt++;
                cnt_s--;
            }
        }
        cout << cnt << nl;
    }
}