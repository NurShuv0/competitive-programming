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
        int n, k;
        cin >> n >> k;
        vector<int>v(n), vv(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int cnt = 0;
        int indx;
        for(int i = 0; i  < n; i++)
        {
            cin >> vv[i];
            if(vv[i] == -1)
            {
                cnt++;
            }
            else
            {
                indx = i;
            }
        }
        bool flag = false;
        int temp = v[indx] + vv[indx];
        int mx = *max_element(all(v));
        int mn = *min_element(all(v));
        int m = wrst;
        for(int i = 0; i < n; i++)
        {
            if(vv[i] != -1)
            {
                m = max(m, v[i] + vv[i]);
                if(v[i] + vv[i] != temp)
                {
                    flag = true;
                    break;
                }
                if(v[i] + vv[i] < mx)
                {
                    flag = true;
                    break;
                }
            }
        }
        //cout << "m = " << m << nl;
        for(int i = 0; i < n; i++)
        {
            if(vv[i] == -1)
            {
                if(k + v[i] < m)
                {
                    flag = true;
                    break;
                }
            }
        }
        if(cnt == n)
        {
            cout << k - (mx - mn) + 1 << nl;
        }
        else {
            cout << (flag? 0:1) << nl;
        }
    }
    return 0;
}