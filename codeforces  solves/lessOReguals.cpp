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
    speed
    int n, m;
    cin >> n >> m;
    vector<int>v(n), v2(m);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(auto& c: v2)
    {
        cin >> c;
    }
    sort(all(v));
    for(int i = 0; i < m; i++)
    {
        int nur = upper_bound(all(v), v2[i]) - v.begin();
        cout << nur << sp;
    }

}