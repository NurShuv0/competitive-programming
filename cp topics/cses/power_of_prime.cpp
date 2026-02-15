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

    int n;
    cin >> n;

    while(n--)
    {
        int number;
        cin >> number;

        vector<int> v;

        for(int i = 2; i * i <= number; i++)
        {
            if(number % i != 0)
            {
                cn;
            }

            int cnt = 0;
            while(number % i == 0)
            {
                cnt++;
                number /= i;
            }
            v.pb(cnt);
        }

        if(number > 1)
        {
            v.pb(1);
        }

        int ans = 1;
        for(auto &c : v)
        {
            ans *= (c + 1);
        }

        cout << ans << nl;
    }

    return 0;
}
