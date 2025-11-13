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
        vector<int>v(n),p;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        map<int, int>mp;
        for(int i = 0; i < n; i++)
        {
            mp[v[i]]++;
        }
        bool flag = false;
        for(auto& c: mp)
        {
            if(c.s < 2)
            {
                flag = true;
                break;
            }
        }
        if(flag)
        {
            cout << -1 << nl;
            cn;
        }
        for(int i = 1; i <= n; i++)
        {
            p.pb(i);
        }
        int left = 0;
        int right = 1;
        while(right < n)
        {
            if(v[left] == v[right])
            {
                right++;
            }
            else{
                rotate(p.begin() + left,p.begin()+ left + 1, p.begin() + right);
                left = right;
                right++;
            }
        }
        rotate(p.begin() + left,p.begin() + left + 1, p.begin() + right);
        for(int i = 0; i < n; i++)
        {
            cout << p[i] << sp;
        }
        cout << nl;
        
    }
    return 0;
}