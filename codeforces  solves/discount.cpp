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
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int>p(n),d(k);
        for(int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        for(int i = 0; i < k; i++)
        {
            cin >> d[i];
        }
        sort(allr(p));
        sort(all(d));
        k = min(n, k);
        int ans = 0;
        int cnt = 0;
        int left = 0;
        bool flag = true;
        for(int i = 0; i < k; i++)
        {
            if(d[i] == 1){
                left++;
                cn;
            }
            if(left == n)
            {
                break;
            }
            //cout << left<< nl;
            //int x = left;
            for(int j = 0; j < d[i] - 1 && left < n; j++)
            {
                // (left == n)
                // {if
                //     flag = false;
                //     break;
                // }
                ans += p[left++];
            }
            if(!flag)
            {
                break;
            }
            if(left < n)
            {
                left++;
            }
        }
        //cout << ans << nl << left << nl;
        while(left < n){
            ans += p[left++];
        }
        cout << ans << nl;
    }
}