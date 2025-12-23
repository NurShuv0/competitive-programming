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
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int cnt_a = count(all(str), 'a');
        int cnt_b = n - cnt_a;
        //cout << cnt_a << sp << cnt_b << nl;
        if (cnt_a == cnt_b)
        {
            cout << 0 << nl;
            cn;
        }
        if (cnt_a == 0 || cnt_b == 0)
        {
            cout << -1 << nl;
            cn;
        }
        int diff = abs(cnt_a - cnt_b);
        int con_a = 0;
        bool flag = false;
        if (cnt_a > cnt_b)
        {
            for (int i = 0; i < n; i++)
            {
                if (str[i] == 'a')
                {
                    con_a++;
                    if (con_a == diff)
                    {
                        flag = true;
                        break;
                    }
                }
                else if (str[i] == 'b')
                {
                    con_a = 0;
                }
            }
        }
        if (cnt_b > cnt_a)
        {
            int con_b = 0;
            for (int i = 0; i < n; i++)
            {
                if (str[i] == 'b')
                {
                    con_b++;
                    if (con_b == diff)
                    {
                        flag = true;
                        break;
                    }
                }
                else if (str[i] == 'a')
                {
                    con_b = 0;
                }
            }
        }

        cout << (flag ? diff : -1) << nl;
    }
    return 0;
}