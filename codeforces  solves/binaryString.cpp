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
        string str;
        cin >> str;
        string temp = str;
        sort(all(temp));
        int cnt1 = 0, cnt0 = 0;
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == '1')
            {
                cnt1++;
            }
            else {
                cnt0++;
            }
        }
        
        //cout << cnt1 << sp << cnt0 << nl;
        double result;
        // if(str == temp)
        // {
        //     if(cnt0 > cnt1)
        //     {
        //         cout << cnt0 << nl;
        //         cn;
        //     }
        //     else {
        //         cout << cnt1 << nl;
        //         cn;
        //     }
        // }
        // else
        // {
            result = abs(cnt1 - cnt0);
        //}
        cout << result << nl;

    }
}