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
        string str;
        cin >> str;
        if(n == k)
        {
            for(int i = 0; i < str.size(); i++)
            {
                cout << '-';
            }
            cout << nl;
            cn;
        }
        sort(all(str));
        //cout << str << nl;
        string ans(n,'+');
        int one = 0;
        int zero = 0;
        int unk = 0;
        for(int i = 0; i < k; i++)
        {
            if(str[i] == '0')
            {
                ans[zero] = '-';
                zero++;
            }
            else if(str[i] == '1')
            {
                ans[n - one - 1] = '-';
                one++;
            }
            else{
                ans[zero] = '?';
                ans[n - one - 1] = '?';
                zero++;
                one++;
            }
        }
        cout << ans << nl;
    }
    return 0;
}