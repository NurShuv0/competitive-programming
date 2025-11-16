#include <bits/stdc++.h>
#define nl "\n"

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, v, l, n;
        cin >> a >> v >> l >> n;
        if(v == 1)
        {
            cout << "NO" << nl;
            continue;
        }
        if(a - l >= n)
        {
            cout << "YES" << nl;
        }
        else {
            cout << "NO" << nl;
        }

    }
}