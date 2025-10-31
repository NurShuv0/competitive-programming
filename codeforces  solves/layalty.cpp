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
#define vvi vector<vector<int>> v(rows, vector<int>(cols))
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
        int n, x;
        cin >> n >> x;
        vector<int>v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        //sort(all(v));
        int ans = 0;
        int loyal = 0;
        for(int i = 0; i < n; i++)
        {
            int temp = floor(loyal/(double)x);//0 0 1 1 2 2
            loyal += v[i];
            //cout << temp << sp << floor(loyal/(double)x) << nl;
            if(floor(loyal/(double)x) > temp)//0 1 1 2 2
            {
                //cout << v[i] << sp;
                ans += v[i];
            }
        }
        cout << ans << nl;
        for(int i = 0; i < n; i++)
        {
            cout << v[i] << sp;
        }
        cout << nl;
    }
    return 0;
}