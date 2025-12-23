#include <bits/stdc++.h>
#define let_strt ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl "\n"
#define int long long
#define sp ' '
#define PI 3.14159265358979323846
#define pb push_back
#define f first
#define s second
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define cn continue
#define mod 1000000007
#define best INT_MAX
#define wrst INT_MIN
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
        sort(all(v));
        int left = 0, right = best;
        int h = 1;
        while(left <= right)
        {
            int mid = (left + right) / 2;
            int water = 0;
            bool flag = true;
            for(int i = 0; i < n; i++)
            {

                if(mid > v[i])
                {
                    water += mid - v[i];
                }
                if(water > x)
                {
                    flag = false;
                }
            }
            if(flag)
            {
                h = mid;
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        cout << h << nl;
    }
    
}