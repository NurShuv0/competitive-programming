#include <bits/stdc++.h>
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define int long long
using namespace std;
signed main()
{
    speed
    int a,b;
    cin >> a >> b;
    if(a == b)
    {
        cout << "1" << nl;
        cout << a << nl;
        return 0;
    }
    cout << 3 << nl;
    cout << b << sp << b  << sp << 3*a - 2*b << nl;
    return 0;
}