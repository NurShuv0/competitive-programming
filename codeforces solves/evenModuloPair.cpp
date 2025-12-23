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
        bool flag = false;
        for(int i = 0; i < n && flag == false; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(v[i] == 1)
                {
                    cout << v[i] << sp << v[j] << nl;
                    flag = true;
                    break;
                }
                int x = v[j] % v[i];
                if(x % 2 == 0)
                {
                    cout << v[i] << sp << v[j] << nl;
                    flag = true;
                    break;
                }
            }
        }
        if(!flag)
        {
            cout << -1 << nl;
        }
    }
    return 0;
}