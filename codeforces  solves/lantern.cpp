#include<bits/stdc++.h>
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define int long long
using namespace std;
signed main()
{
    speed;
    int n,l;
    cin >> n >> l;
    vector<int>v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int result = 2 * max(v[0], l - v[n-1]);
    for(int  i = 0; i < n - 1; i++)
    {
        result = max(result, v[i + 1] - v[i]);
    }
    cout << fixed << setprecision(10) << result / 2.0 << nl;
}