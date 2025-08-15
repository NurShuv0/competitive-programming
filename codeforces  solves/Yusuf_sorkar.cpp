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
    ll np;
    cin >> np;
    vector<ll> v(np);

    for (int i = 0; i < np; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll b_hight, p_bullet, strength;
        cin >> b_hight >> p_bullet >> strength;
        ll count = v.end() - lower_bound(v.begin(), v.end(), b_hight);

        ll n_loss = strength * count;
        ll swt = p_bullet - n_loss;

        if (swt > 0)
        {
            cout << "Apaa Nai :(" << nl;
        }
        else
        {
            cout << "Apaa Ache :)" << nl;
        }
    }

    return 0;
}
