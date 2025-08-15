#include <bits/stdc++.h>
#define sp ' '
#define nl "\n"
#define int long long
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if(n == 0)
    {
        cout << 1 << nl;
    }
    else if (n % 4 == 0)
    {
        cout << 6 << nl;
    }
    else if (n % 4 == 1)
    {
        cout << 8 << nl;
    }
    else if (n % 4 == 2)
    {
        cout << 4 << nl;
    }
    else if (n % 4 == 3)
    {
        cout << 2 << nl;
    }
}