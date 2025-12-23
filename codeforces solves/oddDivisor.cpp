#include <bits/stdc++.h>
#define nl "\n"
#define speed ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;
int main()
{
    speed
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        //bool flag = false;
        if(n & (n - 1))
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
}
