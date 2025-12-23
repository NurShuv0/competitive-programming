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
        map<int,int>mp;
        map<pair<int,int>,int>check;
        set<int>st;
        for(int i = 0; i < n; i++)
        {
            int x,y;
            cin >> x >> y;
            check[{x,y}]++;
            st.insert(x);
            mp[x]++;
        }
        int ans = 0;
        for(auto& m:mp)
        {
            //cout << m.f << sp << m.s << nl;
            if(m.s > 1)
            {
                ans += n - 2;
            }
        }
        vector<int>v(all(st));
        //sort(all(v));
        for(int i = 0; i < v.size() - 2; i++)
        {
            int fst = v[i];
            int snd = v[i + 1];
            int trd = v[i + 2];
            int left = square(trd - fst);
            int right = square(snd - fst) + square(trd - snd)+ 2;
            //cout << left << sp << right << nl;
            if(left == right && check[{fst,0}] == 1 && check[{snd, 1}] == 1 && check[{trd, 0}] == 1)
            {
                ans++;
            }
            if(left == right && check[{fst, 1}] == 1 && check[{snd, 0}] == 1 && check[{trd, 1}] == 1)
            {
                ans++;
            }
        }
        cout << ans <<nl;
    }
    return 0;
}