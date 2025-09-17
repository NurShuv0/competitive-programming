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
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int>p(n+1);
        for(int i = 0; i < n; i++)
        {
            p[v[i]] = i;
        }
        int left = 0, right = n - 1;
        bool flag = true;
        for(int i = 1; i <= n; i++)
        {
            int x = p[i];
            if(left == x)
            {
                left++;
            }
            else if(right == x)
            {
                right--;
            }
            else {
                flag  = false;
            }
        }
        cout << (flag?"YES":"NO") << nl;
    }
}