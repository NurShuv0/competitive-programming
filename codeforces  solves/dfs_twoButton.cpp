#include <bits/stdc++.h>
#define let_strt ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define sp ' '
#define nl "\n"
#define PI 3.14159265358979323846
#define pb push_back
#define f first
#define s second
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define cn continue
#define mod 1000000007
#define best INT_MAX
// int gcd (int a,int b) {return __gcd(a,b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}
using namespace std;
signed main()
{
    let_strt;
    int n, m;
    cin >> n >> m;
    if(n > m)
    {
        cout << n - m;
        return 0;
    }
   
    int cnt = 0;
    while(m != n)
    {
        if(n > m)
        {
            cnt += n - m;
            cout << cnt << nl;
            return 0;
        }
        else 
        {
            if(m % 2 == 0)
            {
                m /= 2;
                cnt ++;
            }
            else {
                m += 1;
                cnt++;
            }
        }
    }
    cout << cnt << nl;
}