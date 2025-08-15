#include <bits/stdc++.h>
#define sp ' '
#define nl "\n"
#define ll long long
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
int main()
{
    speed 
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll diff = b - a;
        ll rem = c - diff - b;
        //cout << rem << sp << diff << sp;
        if ((c - diff) >= b)
        {
            if (rem % 3 == 0)
            {
                cout << "YES" << nl;
            }
            else
            {
                cout << "NO" << nl;
            }
        }
        else
        {
            cout << "NO" << nl;
        }
    }
}