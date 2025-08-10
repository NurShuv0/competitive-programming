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
using namespace std;
signed main()
{
    speed;
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        string str;
        cin >> str;
        int cnt = 0;
        for(int i = 0; i < k; i++)
        {
            if(str[i] == 'W')
            {
                cnt++;
            }
        }
        int ans = cnt;
        int left = k;
        for(int i = left; i < n; i++)
        {
            if(str[i - left] == 'W') cnt--;
            if(str[i] == 'W')cnt++;
            ans = min(ans, cnt);
        }
        cout << ans << nl;
    }
}