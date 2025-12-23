#include <iostream>
#include <vector>
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
        vector<ll> towers;

        for (ll i = 0; i < n; i++)
        {
            bool flag = false;
            for (ll j = 0; j < towers.size(); j++)
            {
                if (towers[j] >= v[i])
                {
                    towers[j] = v[i];
                    flag = true;
                    break;
                }
            }
            if (!flag)
            {
                towers.push_back(v[i]);
            }
        }
        cout << towers.size() << nl;
    }
    return 0;
}
