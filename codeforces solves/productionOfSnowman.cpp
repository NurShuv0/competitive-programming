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
        vector<int>a(n),b(n),c(n);
        for(int i = 0; i < n; i++)cin >> a[i];
        for(int i = 0; i < n; i++)cin >> b[i];
        for(int i = 0; i < n; i++)cin >>c[i];
        int cnt = 0, cntt = 0;
        for(int i = 0; i < n; i++)
        {
            bool flag  = false;
            for(int j = 0; j < n; j++)
            {
                if(a[j] < b[(i+j)%n])cn;
                else {
                    flag = true;
                    break;
                }
            }
            if(!flag)cnt++;
        }
        for(int i = 0; i < n; i++)
        {
            bool flag = false;
            for(int j = 0; j < n; j++)
            {
                if(b[j] < c[(i+j) % n]) cn;
                else{
                    flag = true;
                }
            }
            if(!flag)cntt++;
        }
        cout << cnt * cntt * n << nl;
    }
    return 0;
}