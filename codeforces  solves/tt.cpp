#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    speed;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<ll> swt;
        for (ll i = 0; i < n; i++)
        {
            auto it = lower_bound(swt.begin(), swt.end(), v[i]);
            if (it == swt.end())
            {
                swt.push_back(v[i]);
            }
            else
            {
                *it = v[i];
            }
        }
        cout << swt.size() << nl;
    }
    return 0;
}
