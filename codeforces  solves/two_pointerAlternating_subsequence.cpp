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
bool sign(int n)
{
    if (n > 0)
    {
        return true;
    }
    else
        return false;
}
signed main()
{
    speed int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int sum = 0;
        for (int left = 0; left < n;)
        {
            int right = left + 1;
            int current = v[left];
            while (right < n && sign(v[left]) == sign(v[right]))
            {
                current = max(current, v[right]);
                right++;
            }
            sum += current;
            left = right;
        }
        cout << sum << nl;
    }
}