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
        int n, q;
        cin >> n >> q;
        string str;
        cin >> str;
        vector<int>v(q);
        for(int i = 0; i < q; i++)
        {
            cin >> v[i];
        }
        string temp = str;
        sort(all(temp));
        if(temp[0] == 'A' &&  temp[n-1] == 'A')
        {
           for(int i = 0; i < q; i++)
           {
                cout << v[i] << nl;
           }
           cn;
        }
        for(int i = 0; i < q; i++)
        {
            int ans = 0;
            int j = 0;
            while(v[i] > 0)
            {
                // int j = 0;
                if(str[j] == 'A')
                {
                    v[i]--;
                    ans++;
                }
                else {
                    v[i] /= 2;
                    ans++;
                }
                j++;
                if(j == n)
                {
                    j = 0;
                }
            }
            cout << ans <<nl;
        }
    }
    return 0;
}