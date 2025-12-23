#include <bits/stdc++.h>
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define int long long
using namespace std;
signed main()
{
    speed 
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int bits = 0;
        int temp = x;
        while (temp > 0)
        {
            temp /= 2;
            bits++;
        }
        cout << (bits * 2) + 1 << nl;
    }
}