#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define nl "\n"
#define int long long
#define sp ' '
#define PI 3.14159265358979323846
#define db double
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
    speed
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
        int left = 0;
        int right = n - 1;
        if(n == 1)
        {
            cout << v[0];
        }
        vector<int>ans;
        while(left < right)
        {
            ans.pb(v[left]);
            ans.pb(v[right]);
            left++;
            right--;
            if(left == right)
            {
                ans.pb(v[left]);
            }
        }
        for(auto& c:ans)
        {
            cout << c << sp;
        }
        cout << nl;
    }
}