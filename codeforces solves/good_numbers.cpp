#include <bits/stdc++.h>
#define sp ' '
#define nl "\n"
#define int long long
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        if(b == 1)
        {
            cout << "NO" << nl;
            continue;
        }
        int mul = a * b;
        int add = mul + a;
        cout << "YES" << nl << mul << sp << a << sp << add << nl;
    }
}