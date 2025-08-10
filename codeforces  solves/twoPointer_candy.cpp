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
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int left = 0, right = n - 1;
        int ans = 0, cnt = 0;
        int sum_a = 0, sum_b = 0;
        while(left <= right)
        {
            // sum_a += left;
            // sum_b += right;
            // cnt++;
            if(sum_a < sum_b)
            {
                sum_a += v[left];
                left++;
            }
            else{
                sum_b += v[right];
                right--;
            }
            if(sum_a == sum_b)
            {
                ans = left + (n - (right + 1));
            }
        }
        cout << ans << nl;
    }
}