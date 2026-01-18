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
        int n, m, r;
        cin >> n >> m >> r;
        vector<int>v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int>temp = v;
        for(int i = 0; i < m; i++)
        {
            int b, c;
            cin >> b >> c;
            temp[b-1] += c;
            //cout << temp[b-1] << sp;
            if(temp[b-1] > r)
            {
                temp = v;
                //cout << i << sp;
            }
        }
        for(int i = 0; i < n; i++)
        {
            cout << temp[i] << sp;
        }
        cout << nl;
        
    }
    return 0;
}