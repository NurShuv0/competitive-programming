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
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        multiset<int> ms(v.begin(), v.end());
        vector<int> order;
        order.reserve(n);
        long long S = 0;
        long long ans = 0;

        while(!ms.empty())
        {
            int need = x - (S % x);
            if(need == x) need = x;
            if(!ms.empty() && *ms.rbegin() >= need)
            {
                auto it = prev(ms.end());
                int val = *it;
                ans += val;
                S += val;
                order.push_back(val);
                ms.erase(it);
            }
            else
            {
                auto it = ms.begin();
                int val = *it;
                S += val;
                order.push_back(val);
                ms.erase(it);
            }
        }

        cout << ans << nl;
        for(size_t i = 0; i < order.size(); ++i)
        {
            if(i) cout << sp;
            cout << order[i];
        }
        cout << nl;
    }
    return 0;
}