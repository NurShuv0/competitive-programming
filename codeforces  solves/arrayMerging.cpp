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
        vector<int>a(n), b(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int cnt = 1;
        map<int,int>mpa;
        for(int i = 0; i < n - 1; i++)
        {
            if(a[i] == a[i+1])
            {
                cnt++;
            }
            else{
                mpa[a[i]] = max(mpa[a[i]], cnt);
                cnt = 1;
            }
        }
        mpa[a[n-1]] = max(cnt, mpa[a[n-1]]);
        cnt = 1;
        map<int, int>mpb;
        for(int i = 0; i < n-1; i++)
        {
            if(b[i] == b[i+1])
            {
                cnt++;
            }
            else {
                mpb[b[i]] = max(mpb[b[i]], cnt);
                cnt = 1;
            }
        }
        mpb[b[n-1]] = max(mpb[b[n-1]], cnt);
        set<int>st;
        for(auto& c: a)
        {
            st.insert(c);
        }
        for(auto& c: b)
        {
            st.insert(c);
        }
        int ans = 0;
        for(auto& c: st)
        {
            ans = max(ans, mpa[c] + mpb[c]);
        }
        cout <<  ans << nl;
    }
    return 0;
}