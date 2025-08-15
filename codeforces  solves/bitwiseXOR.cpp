#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);
#define sp ' '
#define nl "\n"
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if ((n ^ 1) == n + 1)
            cout << "0 0 " << n / 2 << nl;
        else
            cout << -1 << nl;
    }
}
