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

        int ans = best;
        for(int i = 0; i <= n - k; i++)
        {
            int left = i;
            // int right = i + k - 1;
            int temp = k;
            int cnt = 0;
            while(temp--)
            {
                if(str[left] == 'W')
                {
                    cnt++;
                }
                left++;
            }
            ans = min(ans , cnt);
            if(cnt == 0) break;
        }
        cout << ans << nl;
    }
}